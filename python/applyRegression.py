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

# regDict = {"Jet_mult":"Jet_mult","(Jet_corr_JECUp-Jet_corr_JECDown)":"(Jet_corr_JECUp[0]-Jet_corr_JECDown[0])","Jet_pt":"Jet_pt[0]", "Jet_rawPt":"Jet_rawPt[0]"  ,"rho":"rho[0]", "Jet_eta":"Jet_eta[0]", "Jet_mt":"Jet_mt[0]", "Jet_leadTrackPt":"Jet_leadTrackPt[0]", "max(0,Jet_leptonPtRel)":"max(0,Jet_leptonPtRel[0])", "max(0,Jet_leptonPt)":"max(0,Jet_leptonPt[0])", "max(0,Jet_leptonDeltaR)":"max(0,Jet_leptonDeltaR[0])", "Jet_chEmEF":"Jet_chEmEF[0]", "Jet_chHEF":"Jet_chHEF[0]", "Jet_neHEF":"Jet_neHEF[0]", "Jet_neEmEF":"Jet_neEmEF[0]", "Jet_chMult":"Jet_chMult[0]" ,"max(0,Jet_vtxPt)":"max(0,Jet_vtxPt[0])", "max(0,Jet_vtxMass)":"max(0,Jet_vtxMass[0])","max(0,Jet_vtx3dL)":"max(0,Jet_vtx3dL[0])","max(0,Jet_vtxNtrk)":"max(0,Jet_vtxNtrk[0])","max(0,Jet_vtx3deL)":"max(0,Jet_vtx3deL[0])","max(0,Jet_vtx3DVal)":"max(0,Jet_vtx3DVal[0]","max(0,Jet_vtx3DSig)":"max(0,Jet_vtx3DSig[0])"}
#regVars = ["Jet_pt", "Jet_rawPt"  ,"rho", "Jet_eta", "Jet_mt", "Jet_leadTrackPt", "Jet_leptonPtRel", "Jet_leptonPt", "Jet_leptonDeltaR", "Jet_chEmEF", "Jet_chHEF", "Jet_neHEF", "Jet_neEmEF", "Jet_chMult" ,"Jet_vtxPt","Jet_vtxMass","Jet_vtx3dL","Jet_vtxNtrk", "Jet_vtx3deL"]
# theForms = {}
# theVars0 = {}
# theVars1 = {}
# def addVarsToReader(reader,theVars,theForms,i):
#      for key in regVars:
#             print key
#             var = regDict[key]
#             theVars[key] = array( 'f', [ 0 ] )
#             reader.AddVariable(key,theVars[key])
#             formula = regDict[key].replace("[0]","[%.0f]" %i)
#             print 'Adding var: %s with %s to readerJet%.0f' %(key,formula,i)
#             theForms['form_reg_%s_%.0f'%(key,i)] = formula #ROOT.TTreeFormula("form_reg_%s_%.0f"%(key,i),'%s' %(formula),tree)


# def get_leaves_from_keys(key,leafs):
#     "This function should return a key in case the key is a leaf, or return the leafs used to generate the key."
#     if key in leafs:
#         return leafs.find(key) # to complete....
#     else 
#         return key


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
    


    regressed_Jet_pt_local = array('f',[0,0])
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
    for key in regVars:
        print(key)
        theVars[key] = array( 'f', [ 0 ] )
        # theVars[key] = tree.GetLeaf("%s" %(key))
        # theVars[key].GetNdata()
        #theVars[key] = theVars[key].GetValuePointer() # this returns a ROOT.PyLongBuffer
        #theVars[key] = theVars[key].GetValue() # this returns a float
        # leaf[key] =  array('f',[0])
        leaf[key] = tree.GetLeaf("%s" %(key))
        leaf[key].GetNdata()
        # print(leaf[key])
        # print(type(leaf[key]))
        reader.AddVariable(key,theVars[key])

    # define the new branches for the new tree
    # Jet_pt = array('f',[0])
    # Jet_mult = array('f',[0])
    # Jet_leadTrackPt = array('f',[0])
    # reader.AddVariable("Jet_pt",Jet_pt)
    # reader.AddVariable("Jet_mult",Jet_mult)
    # reader.AddVariable("Jet_leadTrackPt",Jet_leadTrackPt)
        

    # addVarsToReader(reader,theVars0,theForms,0)
    # addVarsToReader(reader2,theVars1,theForms,1)
    reader.BookMVA( "jet_regression", regWeight )
    # reader2.BookMVA("jet_regression2", regWeight )

    #looping over the events
    for entry in range(0,nEntries):
        tree.GetEntry(entry)


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
            # Jet_pt[0] = tree.Jet_pt[i]
            # Jet_pt[0] = tree.Jet_pt[i]
            # Jet_mult[0] = tree.Jet_mult[i]
            # Jet_leadTrackPt[0] = tree.Jet_leadTrackPt[i]
            for key in regVars:
                theVars[key][0] = leaf[key].GetValue(i) # this can not work because I am training using formulas and not directly variables
            print("Jet_pt : %s" %tree.Jet_pt[i])
#            print("reader.EvaluateRegression = %f.0" %(reader.EvaluateRegression("jet_regression")[0]))
#            print("reader.GetRegressionValues = %f.0" %(reader.GetRegressionValues()[i]))
            regressed_Jet_pt_local[0] = reader.EvaluateRegression("jet_regression")[0]
            print("Jet_regressed_local %s" %(regressed_Jet_pt_local[0]))

        newtree.Fill()

print 'Exit loop'
newtree.AutoSave()
print 'Save'
output.Close()
print 'Close'



# # at the end copy the file from temporary directory to a storage directory in the shared file system
# targetStorage = OUTpath+'/'+job.prefix+job.identifier+'.root'
# command = 'rm -f %s' %(targetStorage)
# print(command)
# subprocess.call([command], shell=True)
# command = 'cp file:///%s %s' %(tmpDir+'/'+job.prefix+job.identifier+'.root',targetStorage)
# print(command)
# subprocess.call([command], shell=True)



# ##################
# reader = ROOT.TMVA.Reader("!Color:!Silent")




# theForms = {}
# theVars0 = {}
# theVars1 = {}
# def addVarsToReader(reader,regDict,regVars,theVars,theForms,i,hJet_MET_dPhiArray,METet,rho25,hJet_MtArray,hJet_EtArray,hJet_ptRawArray):
#     for key in regVars:
#         var = regDict[key]
#         theVars[key] = array( 'f', [ 0 ] )
#         if var == 'Jet_MET_dPhi':
#             print 'Adding var: %s with %s to readerJet%.0f' %(key,var,i)
#             reader.AddVariable( key, hJet_MET_dPhiArray[i] )
#         elif var == 'METet':
#             print 'Adding var: %s with %s to readerJet%.0f' %(key,var,i)
#             reader.AddVariable( key, METet )
#         elif var == 'rho25':
#             print 'Adding var: %s with %s to readerJet%.0f' %(key,var,i)
#             reader.AddVariable( key, rho25 )
#         elif var == 'Jet_mt':
#             print 'Adding var: %s with %s to readerJet%.0f' %(key,var,i)
#             reader.AddVariable( key, hJet_MtArray[i] )
#         elif var == 'Jet_et':
#             print 'Adding var: %s with %s to readerJet%.0f' %(key,var,i)
#             reader.AddVariable( key, hJet_EtArray[i] )
#         elif var == 'Jet_ptRaw':
#             print 'Adding var: %s with %s to readerJet%.0f' %(key,var,i)
#             reader.AddVariable( key, hJet_ptRawArray[i] )
#         else:
#             reader.AddVariable(key,theVars[key])
#             formula = regDict[key].replace("[0]","[%.0f]" %i)
#             print 'Adding var: %s with %s to readerJet%.0f' %(key,formula,i)
#             theForms['form_reg_%s_%.0f'%(key,i)] = ROOT.TTreeFormula("form_reg_%s_%.0f"%(key,i),'%s' %(formula),tree)
#     return 


# hJet_ptRawArray = [array('f',[0]),array('f',[0])]

# addVarsToReader(readerJet0,regDict,regVars,theVars0,theForms,0,hJet_MET_dPhiArray,METet,rho25,hJet_MtArray,hJet_EtArray,hJet_ptRawArray)    
# addVarsToReader(readerJet1,regDict,regVars,theVars1,theForms,1,hJet_MET_dPhiArray,METet,rho25,hJet_MtArray,hJet_EtArray,hJet_ptRawArray)    
# readerJet0.BookMVA( "jet0Regression", regWeight )
# readerJet1.BookMVA( "jet1Regression", regWeight )
# #Add training Flag
# EventForTraining = array('i',[0])
# newtree.Branch('EventForTraining',EventForTraining,'EventForTraining/I')
# EventForTraining[0]=0
# TFlag=ROOT.TTreeFormula("EventForTraining","EVENT.event%2",tree)
# newtree.Branch('hJet_MET_dPhi',hJet_MET_dPhi,'hJet_MET_dPhi[2]/F')
# newtree.Branch('HVMass_Reg',HVMass_Reg,'HVMass_Reg/F')
# rPt0 = max(0.0001,readerJet0.EvaluateRegression( "jet0Regression" )[0])
# rPt1 = max(0.0001,readerJet1.EvaluateRegression( "jet1Regression" )[0])
# newtree.Fill()

# print 'Exit loop'
# newtree.AutoSave()
# print 'Save'
# output.Close()
# print 'Close'



