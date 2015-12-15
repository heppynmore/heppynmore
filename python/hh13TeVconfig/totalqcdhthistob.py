import os
import glob
import math    
 
import ROOT 
#ROOT.gROOT.Macro("rootlogon.C")

import FWCore.ParameterSet.Config as cms

import sys
from DataFormats.FWLite import Events, Handle

from array import array

#grab MC files
QCD500 = ROOT.TFile("QCD_HT500_v6p5.root") 
QCD700 = ROOT.TFile("QCD_HT700_v6p5.root") 
QCD1000 = ROOT.TFile("QCD_HT1000_v6p5.root") 
QCD1500 = ROOT.TFile("QCD_HT1500_v6p5.root") 
QCD2000 = ROOT.TFile("QCD_HT2000_v6p5.root") 

#grab MC histos
histo1_500 = QCD500.Get("d4b")
histo1_700 = QCD700.Get("d4b")
histo1_1000 = QCD1000.Get("d4b")
histo1_1500 = QCD1500.Get("d4b") 
histo1_2000 = QCD2000.Get("d4b")
 
histo2_500 = QCD500.Get("d5b")
histo2_700 = QCD700.Get("d5b")
histo2_1000 = QCD1000.Get("d5b")
histo2_1500 = QCD1500.Get("d5b") 
histo2_2000 = QCD2000.Get("d5b")

#histo3_500 = QCD500.Get("c11")
#histo3_700 = QCD700.Get("c11")
#histo3_1000 = QCD1000.Get("c11")
#histo3_1500 = QCD1500.Get("c11") 
#histo3_2000 = QCD2000.Get("c11")

#histo4_500 = QCD500.Get("c12")
#histo4_700 = QCD700.Get("c12")
#histo4_1000 = QCD1000.Get("c12")
#histo4_1500 = QCD1500.Get("c12") 
#histo4_2000 = QCD2000.Get("c12")


histos1 = [histo1_500,histo1_700,histo1_1000,histo1_1500,histo1_2000]
histos2 = [histo2_500,histo2_700,histo2_1000,histo2_1500,histo2_2000]
#histos3 = [histo3_500,histo3_700,histo3_1000,histo3_1500,histo3_2000]
#histos4 = [histo4_500,histo4_700,histo4_1000,histo4_1500,histo4_2000]

weights = [(29370.0*1000.)/19542847.0,(6524.0*1000.)/15011016.0,(1064.0*1000.)/4963895.0,(121.5*1000.)/3848411.0,(25.42*1000.)/1961774.0]

#defining new file and histogram
datafile = ROOT.TFile( "qcddata_v6p3.root",'recreate')
datafile.cd()
d4b = ROOT.TH1F("d4b", "Dijet Mass Yes Mass Cut Yes Tau21 Subjet B Tag 50", 10000, 0, 10000)
d5b = ROOT.TH1F("d5b", "Dijet Mass Yes Mass Cut Yes Tau21 BB Tag 50", 10000, 0, 10000)
#Add- the histos with the appropriate weights

print len(histos1)

for i in range(len(histos1)):
    print i
    d4b.Add(histos1[i],weights[i])
    d5b.Add(histos2[i],weights[i])
    
#c8.Write()
datafile.cd()
datafile.Write()
datafile.Close()
