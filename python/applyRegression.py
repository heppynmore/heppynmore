#!/usr/bin/env python

# applyRegression.py
# author: pierluigi bortignon
# date: November 3rd 2015
# version: 0.0


import ROOT, sys, os
from array import array
import time, getopt #time accounting and command line parser

ROOT.gROOT.SetBatch(True)
from optparse import OptionParser

argv = sys.argv
parser = OptionParser()

parser.add_option("-S", "--samples", dest="names", default="", 
                      help="samples you want to run on")
parser.add_option("-C", "--config", dest="config", default=[], action="append",
                      help="configuration defining the plots to make")
(opts, args) = parser.parse_args(argv)
if opts.config =="":
        opts.config = "config"

from myutils import BetterConfigParser, ParseInfo

print opts.config
config = BetterConfigParser()
config.read(opts.config)

anaTag = config.get("Analysis","tag")
TrainFlag = eval(config.get('Analysis','TrainFlag'))
samplesinfo=config.get('Directories','samplesinfo')

VHbbNameSpace=config.get('VHbbNameSpace','library')
ROOT.gSystem.Load(VHbbNameSpace)

#path=opts.path
pathIN = config.get('Directories','SYSin')
pathOUT = config.get('Directories','SYSout')
tmpDir = os.environ["TMPDIR"]

regWeight = config.get("Regression","regWeight")
regVars = eval(config.get("Regression","regVars"))

print 'INput samples:\t%s'%pathIN
namelist=opts.names.split(',')

lheWeight=array('f',[0])
lhe_weight_map = False if not config.has_option('LHEWeights', 'weights_per_bin') else eval(config.get('LHEWeights', 'weights_per_bin'))

#load info
info = ParseInfo(samplesinfo,pathIN)
############


for job in info:
    if not job.name in namelist: continue

    input = ROOT.TFile.Open(pathIN+'/'+job.prefix+job.identifier+'.root','read')
    output = ROOT.TFile.Open(tmpDir+'/'+job.prefix+job.identifier+'.root','recreate')

    input.cd()
    if lhe_weight_map and 'DY' in job.name:
        inclusiveJob = info.get_sample('DY')
        print inclusiveJob.name
        inclusive = ROOT.TFile.Open(pathIN+inclusiveJob.get_path,'read')
        inclusive.cd()
        obj = ROOT.TObject
        for key in ROOT.gDirectory.GetListOfKeys():
            input.cd()
            obj = key.ReadObj()
            if obj.GetName() == job.tree:
                continue
            output.cd()
            obj.Write(key.GetName())
        inclusive.Close()
    else:
        obj = ROOT.TObject
        for key in ROOT.gDirectory.GetListOfKeys():
            input.cd()
            obj = key.ReadObj()
            if obj.GetName() == job.tree:
                continue
            output.cd()
            obj.Write(key.GetName())
        
    input.cd()
    tree = input.Get(job.tree)
    nEntries = tree.GetEntries()
    output.cd()
    newtree = tree.CloneTree(0)

    EventForTraining=array('f',[0])
    TFlag=ROOT.TTreeFormula("EventForTraining","evt%2",tree)
    

    regressed_Jet_pt_local = array('f')
    newtree.Branch('regressed_Jet_pt_local',regressed_Jet_pt_local,'regressed_Jet_pt_local[nJet]/F')

    #save the lhe bins
    theBinForms = {}
    if lhe_weight_map and 'DY' in job.name:
        for bin in lhe_weight_map:
            theBinForms[bin] = ROOT.TTreeFormula("Bin_formula_%s"%(bin),bin,tree)
    else:
        lheWeight[0] = 1.

    # define the reader
    # add all the variables to the reader
    reader = ROOT.TMVA.Reader("!Color:!Silent")
    theVars = {}
    leaf = {}
    formulas = {}
    for key in regVars:
        print(key)
        theVars[key] = array('f',[0])
        reader.AddVariable(key,theVars[key])
        # this way of handling it is more general and works also with formulas
        formulas[key] = ROOT.TTreeFormula('%s' %(key),'%s' %(key), tree)

    reader.BookMVA( "jet_regression", regWeight )

    #looping over the events
    for entry in range(0,nEntries):
        if entry > 10:
            sys.exit(0)
        tree.GetEntry(entry)
        # clear the array
        del regressed_Jet_pt_local[:]


        if job.type != 'DATA':
            EventForTraining[0]=int(not TFlag.EvalInstance())
        if lhe_weight_map and 'DY' in job.name:
            match_bin = None
            for bin in lhe_weight_map:
                if theBinForms[bin].EvalInstance() > 0.:
                    match_bin = bin
            if match_bin:
                lheWeight[0] = lhe_weight_map[match_bin]
            else:
                lheWeight[0] = 1.

        for i in range(0,tree.nJet):

            # this works parametrically
            for key in regVars:
                formulas[key].GetNdata() # important for arrays
                theVars[key][0] = formulas[key].EvalInstance(i)
            print("Jet_pt[%s] : %s" %(i,tree.Jet_pt[i]))
            regressed_Jet_pt_local.append(reader.EvaluateRegression("jet_regression")[0])
            print("Jet_regressed_local %s" %(regressed_Jet_pt_local[i]))

        print(regressed_Jet_pt_local)
        newtree.Fill()

print 'Exit loop'
newtree.AutoSave()
print 'Save'
output.Close()
print 'Close'

