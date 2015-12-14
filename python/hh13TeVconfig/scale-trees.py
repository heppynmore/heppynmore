import sys
import os, commands
import shutil
from ROOT import *
import ROOT
from optparse import OptionParser

argv = sys.argv
parser = OptionParser()

parser.add_option("-d", "--useDAS", dest="useDAS", default=False, action="store_true",
                              help="Use # gen events from DAS")

(opts, args) = parser.parse_args(argv) 

inDirName = '/uscms_data/d3/asady1/HHcode/CMSSW_7_4_2/src/Analysis/HbbAnalysis/QCD'
outDirName = '/uscms_data/d3/asady1/HHcode/CMSSW_7_4_2/src/Analysis/HbbAnalysis/QCD/scaled'
inTreeName = 'myTree'
histName = "c4"
targetFile = "qcd_forTrainingWeight1"
addcmd = "hadd -f %s/%s.root " %(outDirName,targetFile)
rmcmd = "rm "

n = 0 
for inFileName in os.listdir(inDirName):
  print inFileName
  if inFileName.endswith(".root"):
    n += 1
    print "copying file %i" %n
    shutil.copy2("%s/%s" %(inDirName, inFileName), "%s/%s"%(outDirName, inFileName))
    inFile = TFile.Open( "%s/%s" %(outDirName, inFileName), "update" )
    if inFileName.find("500") != -1:
      xSec = 29370.0 #7475.
      genEv = 19542847 #events in DAS
    elif inFileName.find("700") != -1:
      xSec = 6524.0# 587.1
      genEv = 15011016.0 #events in DAS
    elif inFileName.find("1000") != -1:
      xSec = 1064.0 #167.0
      genEv = 4963895.0 #events in DAS
    elif inFileName.find("1500") != -1:  
      xSec = 121.5 #28.25
      genEv = 3848411.0 #events in DAS
    elif inFileName.find("2000") != -1:
      xSec = 25.42 #8.195
      genEv = 1961774.0 #events in DAS
    else:
      print " Cross section not defined! Exiting..."
      sys.exit()
    if not opts.useDAS:
      print inFile
      print histName
      genEv = inFile.Get(histName).GetEntries()
      print 'Not using gen events from DAS! Using %i events stored in %s' %(genEv,inFileName)
    weight = (xSec*3000.)/genEv
    print weight
    myTree = inFile.Get( inTreeName )
    myTree.SetWeight(weight)
    myTree.AutoSave()

    addcmd+= ' %s/%s' %(outDirName, inFileName)
#    rmcmd += ' %s/%s' %(outDirName, inFileName)

# os.system(addcmd)
print "Removing temporary files: ..."
# os.system(rmcmd)
inFile.Close()
del myTree
