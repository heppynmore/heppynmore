#!/usr/bin/env python
#from samplesclass import sample
#from printcolor import printc
import pickle
import sys
import os
import ROOT 
import math
import shutil
from ROOT import TFile
from ROOT import TXNetFile
import ROOT
from array import array
import warnings
from optparse import OptionParser
#from BetterConfigParser import BetterConfigParser
warnings.filterwarnings( action='ignore', category=RuntimeWarning, message='creating converter.*' )
argv = sys.argv

def deltaPhi(phi1, phi2): 
    result = phi1 - phi2
    while (result > math.pi): result -= 2*math.pi
    while (result <= -math.pi): result += 2*math.pi
    return result

do = True
path = '/eos/uscms/store/user/cvernier'
jobpath ='zll-v14-ttbar'
#'flatTree_forRegression' 
def resolutionBias(eta):
    if(eta< 0.5): return 0.052
    if(eta< 1.1): return 0.057
    if(eta< 1.7): return 0.096
    if(eta< 2.3): return 0.134
    if(eta< 5): return 0.28
    return 0

def corrPt(pt,eta,mcPt):
    return (pt+resolutionBias(math.fabs(eta))*(pt-mcPt))/pt

ROOT.gROOT.ProcessLine(
        "struct H {\
        int         HiggsFlag;\
        float         mass;\
        float         pt;\
        float         eta;\
        float         phi;\
        float         dR;\
        float         dPhi;\
        float         dEta;\
        } ;"
    )


for iter in range(0,1):
    #iteration = 'weightDirectory_VH_%.0f/factoryJetRegNewGenJets3_BDT.weights.xml'%(iter)
    regWeight = 'weights_ttbar/TMVARegression_BDTG.weights.xml'
    input = TXNetFile.Open('/eos/uscms/store/user/cvernier/zll-v14.root')
    #ETFile.Open(path+'/'+jobpath+'.root','read')
    #print path+'/'+jobpath+'.root'	
    output = TFile.Open(path+'/'+jobpath+'_weights_ttbar.root','recreate')

    input.cd()
    obj = ROOT.TObject
    for key in ROOT.gDirectory.GetListOfKeys():
        input.cd()
        obj = key.ReadObj()
        if obj.GetName() == 'tree':
            continue
        output.cd()
        obj.Write(key.GetName())
        
    input.cd()
    tree = input.Get('tree')
    nEntries = tree.GetEntries()
    H = ROOT.H()
    HNoReg = ROOT.H()
    tree.SetBranchStatus('H',0)
    output.cd()
    newtree = tree.CloneTree(0)        
    regDict = {"Jet_pt":"Jet_pt[0]", "Jet_corr":"Jet_corr[0]"  ,"rho":"rho[0]", "Jet_eta":"Jet_eta[0]", "Jet_mt":"Jet_mt[0]", "Jet_leadTrackPt":"Jet_leadTrackPt[0]", "Jet_leptonPtRel":"Jet_leptonPtRel[0]", "Jet_leptonPt":"Jet_leptonPt[0]", "Jet_leptonDeltaR":"Jet_leptonDeltaR[0]","Jet_neHEF":"Jet_neHEF[0]", "Jet_neEmEF":"Jet_neEmEF[0]", "Jet_chMult":"Jet_chMult[0]" ,"Jet_vtxPt":"Jet_vtxPt[0]", "Jet_vtxMass":"Jet_vtxMass[0]","Jet_vtx3dL":"Jet_vtx3dL[0]","Jet_vtxNtrk":"Jet_vtxNtrk[0]","Jet_vtx3deL":"Jet_vtx3deL[0]"}
    regVars = ["Jet_pt", "Jet_corr"  ,"rho", "Jet_eta", "Jet_mt", "Jet_leadTrackPt", "Jet_leptonPtRel", "Jet_leptonPt", "Jet_leptonDeltaR","Jet_neHEF", "Jet_neEmEF", "Jet_chMult" ,"Jet_vtxPt","Jet_vtxMass","Jet_vtx3dL","Jet_vtxNtrk", "Jet_vtx3deL"]      	
		

    #Regression branches
    applyRegression = True
    newtree.Branch( 'H', H , 'HiggsFlag/I:mass/F:pt/F:eta/F:phi/F:dR/F:dPhi/F:dEta/F' )
    newtree.Branch( 'HNoReg', HNoReg , 'HiggsFlag/I:mass/F:pt/F:eta/F:phi/F:dR/F:dPhi/F:dEta/F' )
    Event = array('f',[0])
    rho25 = array('f',[0])
    HVMass_Reg = array('f',[0])
    newtree.Branch('HVMass_Reg',HVMass_Reg,'HVMass_Reg/F')
    fRho25 = ROOT.TTreeFormula("rho",'rho',tree)
    Jet_regWeight = array('f',[0]*2)
    Jet_regPt = array('f',[0]*2)	
    Jet_mcPtq = array('f',[0]*2) 	
    Jet_MET_dPhiArray = [array('f',[0]),array('f',[0])]
    Jet_corrArray = [array('f',[0]),array('f',[0])]
    readerJet0 = ROOT.TMVA.Reader("!Color:!Silent" )
    readerJet1 = ROOT.TMVA.Reader("!Color:!Silent" )
    H = ROOT.H()
    HNoReg = ROOT.H()
    tree.SetBranchStatus('H',0)
    output.cd()
    newtree = tree.CloneTree(0)
        
    hJ0 = ROOT.TLorentzVector()
    hJ1 = ROOT.TLorentzVector()
    vect = ROOT.TLorentzVector()

    #Regression branches
    applyRegression = True
    newtree.Branch( 'H', H , 'HiggsFlag/I:mass/F:pt/F:eta/F:phi/F:dR/F:dPhi/F:dEta/F' )
    newtree.Branch( 'HNoReg', HNoReg , 'HiggsFlag/I:mass/F:pt/F:eta/F:phi/F:dR/F:dPhi/F:dEta/F' )
    newtree.Branch('Jet_regWeight',Jet_regWeight,'Jet_regWeight[2]/F')
    newtree.Branch('Jet_regPt',Jet_regPt,'Jet_regPt[2]/F')
    newtree.Branch('Jet_mcPtq',Jet_mcPtq,'Jet_mcPtq[2]/F')



    theForms = {}
    theVars0 = {}
    theVars1 = {}
    
    def addVarsToReader(reader,theVars,theForms,i):
        for key in regVars:
	    print key	
            var = regDict[key]
            theVars[key] = array( 'f', [ 0 ] )
            reader.AddVariable(key,theVars[key])
            formula = regDict[key].replace("[0]","[%.0f]" %i)
            print 'Adding var: %s with %s to readerJet%.0f' %(key,formula,i)
            theForms['form_reg_%s_%.0f'%(key,i)] = formula #ROOT.TTreeFormula("form_reg_%s_%.0f"%(key,i),'%s' %(formula),tree)
        return

    addVarsToReader(readerJet0,theVars0,theForms,0)
    addVarsToReader(readerJet1,theVars1,theForms,1)
    readerJet0.BookMVA( "jet0Regression", regWeight )
    readerJet1.BookMVA( "jet1Regression", regWeight )
    #print theForms	 


    for entry in range(0,nEntries):
            tree.GetEntry(entry)
	    Event[0]=tree.evt

	    Jet_pt_0 = tree.Jet_pt[tree.hJCidx[0]]
            Jet_pt_1 = tree.Jet_pt[tree.hJCidx[1]]
            Jet_eta_0 = tree.Jet_eta[tree.hJCidx[0]]
            Jet_eta_1 = tree.Jet_eta[tree.hJCidx[1]]
            Jet_m_0 = tree.Jet_mass[tree.hJCidx[0]]
            Jet_m_1 = tree.Jet_mass[tree.hJCidx[1]]
            Jet_phi_0 = tree.Jet_phi[tree.hJCidx[0]]
            Jet_phi_1 = tree.Jet_phi[tree.hJCidx[1]]
            hJ0.SetPtEtaPhiM(Jet_pt_0,Jet_eta_0,Jet_phi_0,Jet_m_0)
            hJ1.SetPtEtaPhiM(Jet_pt_1,Jet_eta_1,Jet_phi_1,Jet_m_1)
            Jet_e_0 = hJ0.E()
            Jet_e_1 = hJ1.E()
            Jet_mt_0 = hJ0.Mt()
            Jet_mt_1 = hJ1.Mt()
            Jet_met_dPhi_0 =   deltaPhi(tree.met_phi,Jet_phi_0)
            Jet_met_dPhi_1 =   deltaPhi(tree.met_phi,Jet_phi_1)
            met_pt_0 = tree.met_pt
            met_pt_1 = tree.met_pt
            Jet_vtxPt_0 = tree.Jet_vtxPt[tree.hJCidx[0]]
            Jet_vtxPt_1 = tree.Jet_vtxPt[tree.hJCidx[1]]
            Jet_vtx3dL_0= tree.Jet_vtx3DVal[tree.hJCidx[0]]
            Jet_vtx3dL_1= tree.Jet_vtx3DVal[tree.hJCidx[1]]
            Jet_vtx3deL_0= tree.Jet_vtx3DSig[tree.hJCidx[0]]
            Jet_vtx3deL_1= tree.Jet_vtx3DSig[tree.hJCidx[1]]
            Jet_vtxMass_0= tree.Jet_vtxMass[tree.hJCidx[0]]
            Jet_vtxMass_1= tree.Jet_vtxMass[tree.hJCidx[1]]
            Jet_vtxNtrk_0= tree.Jet_vtxNtracks[tree.hJCidx[0]]
            Jet_vtxNtrk_1= tree.Jet_vtxNtracks[tree.hJCidx[1]]
           # Jet_chEmEF_0=tree.Jet_chEmEF[tree.hJCidx[0]]
           # Jet_chEmEF_1=tree.Jet_chEmEF[tree.hJCidx[1]]    
           # Jet_chHEF_0=tree.Jet_chHEF[tree.hJCidx[0]]
           # Jet_chHEF_1=tree.Jet_chHEF[tree.hJCidx[1]]
            Jet_neHEF_0=tree.Jet_neHEF[tree.hJCidx[0]]
            Jet_neHEF_1=tree.Jet_neHEF[tree.hJCidx[1]]
            Jet_neEmEF_0=tree.Jet_neEmEF[tree.hJCidx[0]]
            Jet_neEmEF_1=tree.Jet_neEmEF[tree.hJCidx[1]]
            Jet_mcPt_0 = tree.Jet_mcPt[tree.hJCidx[0]]
            Jet_mcPt_1 = tree.Jet_mcPt[tree.hJCidx[1]]
            Jet_corr_0 = tree.Jet_corr[tree.hJCidx[0]]
            Jet_corr_1 = tree.Jet_corr[tree.hJCidx[1]]
            Jet_chMult_0 = tree.Jet_chMult[tree.hJCidx[0]]
            Jet_chMult_1 = tree.Jet_chMult[tree.hJCidx[1]]
            Jet_leadTrackPt_0 = tree.Jet_leadTrackPt[tree.hJCidx[0]]
            Jet_leadTrackPt_1 = tree.Jet_leadTrackPt[tree.hJCidx[1]]
            Jet_leptonPtRel_0 = tree.Jet_leptonPtRel[tree.hJCidx[0]]
            Jet_leptonPtRel_1= tree.Jet_leptonPtRel[tree.hJCidx[1]]
            Jet_leptonDeltaR_0 = tree.Jet_leptonDeltaR[tree.hJCidx[0]]
            Jet_leptonDeltaR_1 = tree.Jet_leptonDeltaR[tree.hJCidx[0]]
            Jet_leptonPt_0 = tree.Jet_leptonPt[tree.hJCidx[0]]
            Jet_leptonPt_1= tree.Jet_leptonPt[tree.hJCidx[1]]
            rho_0=tree.rho
            rho_1=tree.rho
            minDr0 = 0.4;
	    minDr1 = 0.4;
            for m in range(0,tree.nGenBQuarkFromH):
	        hQ = ROOT.TLorentzVector()	
       		hQ.SetPtEtaPhiM(tree.GenBQuarkFromH_pt[m],tree.GenBQuarkFromH_eta[m],tree.GenBQuarkFromH_phi[m],tree.GenBQuarkFromH_mass[m]);
    		if hQ.DeltaR(hJ0)<minDr0 :

              			Jet_mcPtq[0] = tree.GenBQuarkFromH_pt[m]
              			minDr0 = hQ.DeltaR(hJ0)
		if hQ.DeltaR(hJ1)< minDr1:

                                Jet_mcPtq[1] = tree.GenBQuarkFromH_pt[m]
                                minDr1 = hQ.DeltaR(hJ1)


		
 
            #corrRes0 = corrPt(Jet_pt_0,Jet_eta_0,Jet_mcPt_0)
            #corrRes1 = corrPt(Jet_pt_1,Jet_eta_1,Jet_mcPt_1)
            #Jet_corr_0 *= corrRes0
            #Jet_corr_1 *= corrRes1
            #Jet_corrArray[0][0] = Jet_corr_0
            #Jet_corrArray[1][0] = Jet_corr_1

	
	    for key in regVars:
		    #print key	
                    theVars0[key][0] = eval("%s_0" %(key)) #theForms["form_reg_%s_0" %(key)].EvalInstance()
                    theVars1[key][0] =  eval("%s_1" %(key)) #theForms["form_reg_%s_1" %(key)].EvalInstance()
	    if applyRegression:
                HNoReg.HiggsFlag = 1
                HNoReg.mass = (hJ0+hJ1).M()
                HNoReg.pt = (hJ0+hJ1).Pt()
                HNoReg.eta = (hJ0+hJ1).Eta()
                HNoReg.phi = (hJ0+hJ1).Phi()
                HNoReg.dR = hJ0.DeltaR(hJ1)
                HNoReg.dPhi = hJ0.DeltaPhi(hJ1)
                HNoReg.dEta = abs(hJ0.Eta()-hJ1.Eta())
                rPt0 = max(0.0001,readerJet0.EvaluateRegression( "jet0Regression" )[0])
                rPt1 = max(0.0001,readerJet1.EvaluateRegression( "jet1Regression" )[0])
                Jet_regWeight[0] = rPt0/Jet_pt_0
                Jet_regWeight[1] = rPt1/Jet_pt_1
                hJ0.SetPtEtaPhiM(rPt0,Jet_eta_0,Jet_phi_0,tree.Jet_mass[tree.hJCidx[0]])
                hJ1.SetPtEtaPhiM(rPt1,Jet_eta_1,Jet_phi_1,tree.Jet_mass[tree.hJCidx[1]])
                Jet_regPt[0] = rPt0
                Jet_regPt[1] = rPt1
                H.HiggsFlag = 1
                H.mass = (hJ0+hJ1).M()
                H.pt = (hJ0+hJ1).Pt()
                H.eta = (hJ0+hJ1).Eta()
                H.phi = (hJ0+hJ1).Phi()
                H.dR = hJ0.DeltaR(hJ1)
                H.dPhi = hJ0.DeltaPhi(hJ1)
                H.dEta = abs(hJ0.Eta()-hJ1.Eta())
                if (Jet_regWeight[0] > 5. or Jet_regWeight[1] > 5. ) :
                    print 'Event %.0f' %(Event[0])
                    print 'corr 0 %.2f' %(Jet_regWeight[0])
                    print 'corr 1 %.2f' %(Jet_regWeight[1])
                    print 'rPt0 %.2f' %(rPt0)
                    print 'rPt1 %.2f' %(rPt1)
                    print 'rE0 %.2f' %(rE0)
                    print 'rE1 %.2f' %(rE1)
                    print 'Mass %.2f' %(H.mass)

            
            newtree.Fill()
        
    newtree.AutoSave()
    output.Close()
        
