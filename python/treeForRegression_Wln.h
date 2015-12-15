//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Oct 21 17:35:26 2015 by ROOT version 5.34/18
// from TTree tree/PhysicsTools.Heppy.analyzers.core.AutoFillTreeProducer.AutoFillTreeProducer_1
// found on file: root://xrootd-cms.infn.it//store/cmst3/user/cvernier/zll-v14-treeForRegression_Wln.root
//////////////////////////////////////////////////////////

#ifndef treeForRegression_Wln_h
#define treeForRegression_Wln_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

// Fixed size dimensions of array or collections stored in the TTree if any.

class treeForRegression_Wln {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   UInt_t          run;
   UInt_t          lumi;
   ULong64_t       evt;
   Int_t           isData;
   Float_t         xsec;
   Float_t         puWeight;
   Int_t           nTrueInt;
   Float_t         genWeight;
   Float_t         json;
   Float_t         nPU0;
   Float_t         nPVs;
   Float_t         Vtype;
   Float_t         VtypeSim;
   Float_t         VMt;
   Float_t         HVdPhi;
   Float_t         fakeMET_sumet;
   Float_t         rho;
   Float_t         deltaR_jj;
   Float_t         lheNj;
   Float_t         lheNb;
   Float_t         lheNc;
   Float_t         lheNg;
   Float_t         lheNl;
   Float_t         lheV_pt;
   Float_t         lheHT;
   Int_t           genTTHtoTauTauDecayMode;
   Float_t         ttCls;
   Float_t         mhtJet30;
   Float_t         mhtPhiJet30;
   Float_t         htJet30;
   Float_t         met_rawpt;
   Float_t         metPuppi_pt;
   Float_t         metPuppi_phi;
   Float_t         metPuppi_rawpt;
   Float_t         metNoHF_pt;
   Float_t         metNoHF_phi;
   Float_t         metNoHF_rawpt;
   Float_t         metType1p2_pt;
   Float_t         metNoPU_pt;
   Float_t         metNoPU_phi;
   Float_t         tkMet_pt;
   Float_t         tkMet_phi;
   Float_t         tkMetPVchs_pt;
   Float_t         tkMetPVchs_phi;
   Float_t         isrJetVH;
   Float_t         simPrimaryVertex_z;
   Float_t         bTagWeight_LFUp;
   Float_t         bTagWeight_Stats2Down;
   Float_t         bTagWeight_LFDown;
   Float_t         bTagWeight_HFUp;
   Float_t         bTagWeight_JESDown;
   Float_t         bTagWeight;
   Float_t         bTagWeight_HFDown;
   Float_t         bTagWeight_Stats2Up;
   Float_t         bTagWeight_JESUp;
   Float_t         bTagWeight_Stats1Up;
   Float_t         bTagWeight_Stats1Down;
   Float_t         Flag_EcalDeadCellTriggerPrimitiveFilter;
   Float_t         Flag_trkPOG_manystripclus53X;
   Float_t         Flag_ecalLaserCorrFilter;
   Float_t         Flag_trkPOG_toomanystripclus53X;
   Float_t         Flag_hcalLaserEventFilter;
   Float_t         Flag_trkPOG_logErrorTooManyClusters;
   Float_t         Flag_trkPOGFilters;
   Float_t         Flag_trackingFailureFilter;
   Float_t         Flag_CSCTightHaloFilter;
   Float_t         Flag_HBHENoiseFilter;
   Float_t         Flag_goodVertices;
   Float_t         Flag_METFilters;
   Float_t         Flag_eeBadScFilter;
   Float_t         HLT_BIT_HLT_CaloMHTNoPU90_PFMET90_PFMHT90_IDLoose_BTagCSV0p7_v;
   Float_t         HLT_BIT_HLT_CaloMHTNoPU90_PFMET90_PFMHT90_IDLoose_v;
   Float_t         HLT_BIT_HLT_PFMET90_PFMHT90_IDLoose_v;
   Float_t         HLT_BIT_HLT_PFMET100_PFMHT100_IDLoose_v;
   Float_t         HLT_BIT_HLT_PFMET110_PFMHT110_IDLoose_v;
   Float_t         HLT_BIT_HLT_PFMET120_PFMHT120_IDLoose_v;
   Float_t         HLT_BIT_HLT_PFMET170_NoiseCleaned_v;
   Float_t         HLT_BIT_HLT_DiCentralPFJet70_PFMET120_NoiseCleaned_v;
   Float_t         HLT_BIT_HLT_PFHT350_PFMET120_NoiseCleaned_v;
   Float_t         HLT_ZnnHbbAll;
   Float_t         HLT_BIT_HLT_QuadPFJet_DoubleBTagCSV_VBF_Mqq200_v;
   Float_t         HLT_BIT_HLT_QuadPFJet_SingleBTagCSV_VBF_Mqq460_v;
   Float_t         HLT_VBFHbbLowLumi;
   Float_t         HLT_BIT_HLT_PFHT750_4Jet_v;
   Float_t         HLT_BIT_HLT_PFHT900_v;
   Float_t         HLT_BIT_HLT_PFJet40_v;
   Float_t         HLT_BIT_HLT_PFJet60_v;
   Float_t         HLT_BIT_HLT_PFJet80_v;
   Float_t         HLT_BIT_HLT_PFJet140_v;
   Float_t         HLT_BIT_HLT_PFJet200_v;
   Float_t         HLT_BIT_HLT_PFJet260_v;
   Float_t         HLT_BIT_HLT_PFJet320_v;
   Float_t         HLT_BIT_HLT_PFJet400_v;
   Float_t         HLT_BIT_HLT_PFJet450_v;
   Float_t         HLT_hadronic;
   Float_t         HLT_BIT_HLT_PFHT400_SixJet30_BTagCSV0p5_2PFBTagCSV_v;
   Float_t         HLT_BIT_HLT_PFHT450_SixJet40_PFBTagCSV_v;
   Float_t         HLT_ttHhardonicLowLumi;
   Float_t         HLT_BIT_HLT_QuadJet45_TripleCSV0p5_v;
   Float_t         HLT_BIT_HLT_QuadJet45_DoubleCSV0p5_v;
   Float_t         HLT_BIT_HLT_DoubleJet90_Double30_TripleCSV0p5_v;
   Float_t         HLT_BIT_HLT_DoubleJet90_Double30_DoubleCSV0p5_v;
   Float_t         HLT_HH4bAll;
   Float_t         HLT_BIT_HLT_LooseIsoPFTau50_Trk30_eta2p1_MET80_v;
   Float_t         HLT_WtaunHbbLowLumi;
   Float_t         HLT_BIT_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_v;
   Float_t         HLT_BIT_HLT_DoubleEle24_22_eta2p1_WP75_Gsf_v;
   Float_t         HLT_ZeeHbbHighLumi;
   Float_t         HLT_HH4bHighLumi;
   Float_t         HLT_ZnnHbbHighLumi;
   Float_t         HLT_BIT_HLT_QuadPFJet_DoubleBTagCSV_VBF_Mqq240_v;
   Float_t         HLT_BIT_HLT_QuadPFJet_SingleBTagCSV_VBF_Mqq500_v;
   Float_t         HLT_BIT_HLT_QuadPFJet_VBF_v;
   Float_t         HLT_BIT_HLT_L1_TripleJet_VBF_v;
   Float_t         HLT_BIT_HLT_PFHT650_WideJetMJJ900DEtaJJ1p5_v;
   Float_t         HLT_BIT_HLT_PFHT650_WideJetMJJ950DEtaJJ1p5_v;
   Float_t         HLT_VBFHbbAll;
   Float_t         HLT_BIT_HLT_Ele27_eta2p1_WP75_Gsf_v;
   Float_t         HLT_BIT_HLT_Ele27_eta2p1_WP85_Gsf_HT200_v;
   Float_t         HLT_WenHbbLowLumi;
   Float_t         HLT_BIT_HLT_Ele32_eta2p1_WP75_Gsf_v;
   Float_t         HLT_BIT_HLT_Ele32_eta2p1_WP75_Gsf_CentralPFJet30_BTagCSV07_v;
   Float_t         HLT_BIT_HLT_Ele27_WP85_Gsf_v;
   Float_t         HLT_BIT_HLT_Ele27_eta2p1_WP75_Gsf_CentralPFJet30_BTagCSV07_v;
   Float_t         HLT_BIT_HLT_Ele105_CaloIdVT_GsfTrkIdT_v;
   Float_t         HLT_BIT_HLT_Ele45_CaloIdVT_GsfTrkIdT_PFJet200_PFJet50_v;
   Float_t         HLT_WenHbbAll;
   Float_t         HLT_BIT_HLT_Ele17_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_v;
   Float_t         HLT_ZeeHbbLowLumi;
   Float_t         HLT_BIT_HLT_IsoMu24_eta2p1_v;
   Float_t         HLT_BIT_HLT_IsoMu24_eta2p1_CentralPFJet30_BTagCSV07_v;
   Float_t         HLT_BIT_HLT_Mu24_eta2p1_v;
   Float_t         HLT_BIT_HLT_TkMu24_eta2p1_v;
   Float_t         HLT_BIT_HLT_Mu24_v;
   Float_t         HLT_BIT_HLT_IsoMu27_v;
   Float_t         HLT_BIT_HLT_IsoTkMu27_v;
   Float_t         HLT_BIT_HLT_TkMu27_v;
   Float_t         HLT_BIT_HLT_Mu27_v;
   Float_t         HLT_BIT_HLT_IsoMu20_eta2p1_v;
   Float_t         HLT_BIT_HLT_IsoMu20_eta2p1_CentralPFJet30_BTagCSV07_v;
   Float_t         HLT_BIT_HLT_Mu20_v;
   Float_t         HLT_BIT_HLT_TkMu20_v;
   Float_t         HLT_BIT_HLT_IsoMu20_v;
   Float_t         HLT_BIT_HLT_IsoTkMu20_v;
   Float_t         HLT_BIT_HLT_Mu40_eta2p1_PFJet200_PFJet50_v;
   Float_t         HLT_BIT_HLT_IsoMu16_eta2p1_CaloMET30_v;
   Float_t         HLT_BIT_HLT_Mu16_eta2p1_CaloMET30_v;
   Float_t         HLT_BIT_HLT_PFMET120_NoiseCleaned_Mu5_v;
   Float_t         HLT_BIT_HLT_MonoCentralPFJet80_PFMETNoMu120_NoiseCleaned_PFMHTNoMu120_IDTight_v;
   Float_t         HLT_BIT_HLT_MonoCentralPFJet80_PFMETNoMu90_NoiseCleaned_PFMHTNoMu90_IDTight_v;
   Float_t         HLT_BIT_HLT_PFMETNoMu120_NoiseCleaned_PFMHTNoMu120_IDTight_v;
   Float_t         HLT_BIT_HLT_PFMETNoMu90_NoiseCleaned_PFMHTNoMu90_IDTight_v;
   Float_t         HLT_WmnHbbAll;
   Float_t         HLT_BIT_HLT_LooseIsoPFTau50_Trk30_eta2p1_MET120_v;
   Float_t         HLT_BIT_HLT_LooseIsoPFTau50_Trk30_eta2p1_v;
   Float_t         HLT_WtaunHbbAll;
   Float_t         HLT_BIT_HLT_PFHT450_SixJet40_v;
   Float_t         HLT_BIT_HLT_PFHT400_SixJet30_v;
   Float_t         HLT_ttHhardonicAll;
   Float_t         HLT_BIT_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_v;
   Float_t         HLT_BIT_HLT_Ele23_CaloIdL_TrackIdL_IsoVL_v;
   Float_t         HLT_BIT_HLT_Ele17_Ele12_CaloIdL_TrackIdL_IsoVL_v;
   Float_t         HLT_BIT_HLT_Ele12_CaloIdL_TrackIdL_IsoVL_v;
   Float_t         HLT_ZeeHbbAll;
   Float_t         HLT_WmnHbbLowLumi;
   Float_t         HLT_BIT_HLT_Mu17_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_v;
   Float_t         HLT_BIT_HLT_Mu8_TrkIsoVVL_Ele17_CaloIdL_TrackIdL_IsoVL_v;
   Float_t         HLT_ttHleptonic;
   Float_t         HLT_VBFHbbHighLumi;
   Float_t         HLT_BIT_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_v;
   Float_t         HLT_BIT_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_v;
   Float_t         HLT_ZmmHbbLowLumi;
   Float_t         HLT_WmnHbbHighLumi;
   Float_t         HLT_BIT_HLT_Mu17_TkMu8_DZ_v;
   Float_t         HLT_BIT_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_v;
   Float_t         HLT_BIT_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_v;
   Float_t         HLT_BIT_HLT_DoubleIsoMu17_eta2p1_v;
   Float_t         HLT_ZmmHbbAll;
   Float_t         HLT_ZnnHbbLowLumi;
   Float_t         HLT_WenHbbHighLumi;
   Float_t         HLT_HH4bLowLumi;
   Float_t         HLT_ZmmHbbHighLumi;
   Float_t         HLT_ttHhardonicHighLumi;
   Float_t         HLT_WtaunHbbHighLumi;
   Float_t         V_pt;
   Float_t         V_eta;
   Float_t         V_phi;
   Float_t         V_mass;
   Float_t         HaddJetsdR08_pt;
   Float_t         HaddJetsdR08_eta;
   Float_t         HaddJetsdR08_phi;
   Float_t         HaddJetsdR08_mass;
   Float_t         H_pt;
   Float_t         H_eta;
   Float_t         H_phi;
   Float_t         H_mass;
   Int_t           softActivityVH_njets2;
   Int_t           softActivityVH_njets5;
   Int_t           softActivityVH_njets10;
   Float_t         softActivityVH_HT;
   Float_t         met_shifted_JetResUp_pt;
   Float_t         met_shifted_JetResUp_phi;
   Float_t         met_shifted_JetResUp_sumEt;
   Float_t         met_pt;
   Float_t         met_eta;
   Float_t         met_phi;
   Float_t         met_mass;
   Float_t         met_sumEt;
   Float_t         met_genPt;
   Float_t         met_genPhi;
   Float_t         met_genEta;
   Float_t         H_reg_pt;
   Float_t         H_reg_eta;
   Float_t         H_reg_phi;
   Float_t         H_reg_mass;
   Float_t         met_shifted_JetEnDown_pt;
   Float_t         met_shifted_JetEnDown_phi;
   Float_t         met_shifted_JetEnDown_sumEt;
   Float_t         HCSV_pt;
   Float_t         HCSV_eta;
   Float_t         HCSV_phi;
   Float_t         HCSV_mass;
   Float_t         met_shifted_MuonEnDown_pt;
   Float_t         met_shifted_MuonEnDown_phi;
   Float_t         met_shifted_MuonEnDown_sumEt;
   Float_t         met_shifted_ElectronEnUp_pt;
   Float_t         met_shifted_ElectronEnUp_phi;
   Float_t         met_shifted_ElectronEnUp_sumEt;
   Float_t         met_shifted_ElectronEnDown_pt;
   Float_t         met_shifted_ElectronEnDown_phi;
   Float_t         met_shifted_ElectronEnDown_sumEt;
   Float_t         fakeMET_pt;
   Float_t         fakeMET_eta;
   Float_t         fakeMET_phi;
   Float_t         fakeMET_mass;
   Float_t         met_shifted_TauEnDown_pt;
   Float_t         met_shifted_TauEnDown_phi;
   Float_t         met_shifted_TauEnDown_sumEt;
   Float_t         met_shifted_TauEnUp_pt;
   Float_t         met_shifted_TauEnUp_phi;
   Float_t         met_shifted_TauEnUp_sumEt;
   Float_t         HCSV_reg_pt;
   Float_t         HCSV_reg_eta;
   Float_t         HCSV_reg_phi;
   Float_t         HCSV_reg_mass;
   Float_t         met_shifted_UnclusteredEnUp_pt;
   Float_t         met_shifted_UnclusteredEnUp_phi;
   Float_t         met_shifted_UnclusteredEnUp_sumEt;
   Float_t         met_shifted_UnclusteredEnDown_pt;
   Float_t         met_shifted_UnclusteredEnDown_phi;
   Float_t         met_shifted_UnclusteredEnDown_sumEt;
   Float_t         met_shifted_JetEnUp_pt;
   Float_t         met_shifted_JetEnUp_phi;
   Float_t         met_shifted_JetEnUp_sumEt;
   Float_t         met_shifted_JetResDown_pt;
   Float_t         met_shifted_JetResDown_phi;
   Float_t         met_shifted_JetResDown_sumEt;
   Int_t           softActivity_njets2;
   Int_t           softActivity_njets5;
   Int_t           softActivity_njets10;
   Float_t         softActivity_HT;
   Float_t         met_shifted_MuonEnUp_pt;
   Float_t         met_shifted_MuonEnUp_phi;
   Float_t         met_shifted_MuonEnUp_sumEt;
   Int_t           nGenBQuarkFromHafterISR;
   Int_t           GenBQuarkFromHafterISR_pdgId[1];   //[nGenBQuarkFromHafterISR]
   Float_t         GenBQuarkFromHafterISR_pt[1];   //[nGenBQuarkFromHafterISR]
   Float_t         GenBQuarkFromHafterISR_eta[1];   //[nGenBQuarkFromHafterISR]
   Float_t         GenBQuarkFromHafterISR_phi[1];   //[nGenBQuarkFromHafterISR]
   Float_t         GenBQuarkFromHafterISR_mass[1];   //[nGenBQuarkFromHafterISR]
   Float_t         GenBQuarkFromHafterISR_charge[1];   //[nGenBQuarkFromHafterISR]
   Int_t           GenBQuarkFromHafterISR_status[1];   //[nGenBQuarkFromHafterISR]
   Int_t           npileUpVertex_ptHat;
   Float_t         pileUpVertex_ptHat[5];   //[npileUpVertex_ptHat]
   Int_t           nGenHiggsBoson;
   Int_t           GenHiggsBoson_pdgId[1];   //[nGenHiggsBoson]
   Float_t         GenHiggsBoson_pt[1];   //[nGenHiggsBoson]
   Float_t         GenHiggsBoson_eta[1];   //[nGenHiggsBoson]
   Float_t         GenHiggsBoson_phi[1];   //[nGenHiggsBoson]
   Float_t         GenHiggsBoson_mass[1];   //[nGenHiggsBoson]
   Float_t         GenHiggsBoson_charge[1];   //[nGenHiggsBoson]
   Int_t           GenHiggsBoson_status[1];   //[nGenHiggsBoson]
   Int_t           nhJidx_sortcsv;
   Int_t           hJidx_sortcsv[2];   //[nhJidx_sortcsv]
   Int_t           naJCidx;
   Int_t           aJCidx[8];   //[naJCidx]
   Int_t           nFatjetCA15pruned;
   Float_t         FatjetCA15pruned_pt[6];   //[nFatjetCA15pruned]
   Float_t         FatjetCA15pruned_eta[6];   //[nFatjetCA15pruned]
   Float_t         FatjetCA15pruned_phi[6];   //[nFatjetCA15pruned]
   Float_t         FatjetCA15pruned_mass[6];   //[nFatjetCA15pruned]
   Int_t           nGenLepFromTop;
   Int_t           GenLepFromTop_pdgId[1];   //[nGenLepFromTop]
   Float_t         GenLepFromTop_pt[1];   //[nGenLepFromTop]
   Float_t         GenLepFromTop_eta[1];   //[nGenLepFromTop]
   Float_t         GenLepFromTop_phi[1];   //[nGenLepFromTop]
   Float_t         GenLepFromTop_mass[1];   //[nGenLepFromTop]
   Float_t         GenLepFromTop_charge[1];   //[nGenLepFromTop]
   Int_t           GenLepFromTop_status[1];   //[nGenLepFromTop]
   Int_t           nGenVbosons;
   Int_t           GenVbosons_pdgId[1];   //[nGenVbosons]
   Float_t         GenVbosons_pt[1];   //[nGenVbosons]
   Float_t         GenVbosons_eta[1];   //[nGenVbosons]
   Float_t         GenVbosons_phi[1];   //[nGenVbosons]
   Float_t         GenVbosons_mass[1];   //[nGenVbosons]
   Float_t         GenVbosons_charge[1];   //[nGenVbosons]
   Int_t           GenVbosons_status[1];   //[nGenVbosons]
   Int_t           najidxaddJetsdR08;
   Int_t           ajidxaddJetsdR08[8];   //[najidxaddJetsdR08]
   Int_t           nFatjetAK08pruned;
   Float_t         FatjetAK08pruned_pt[5];   //[nFatjetAK08pruned]
   Float_t         FatjetAK08pruned_eta[5];   //[nFatjetAK08pruned]
   Float_t         FatjetAK08pruned_phi[5];   //[nFatjetAK08pruned]
   Float_t         FatjetAK08pruned_mass[5];   //[nFatjetAK08pruned]
   Int_t           nGenJet;
   Float_t         GenJet_charge[15];   //[nGenJet]
   Int_t           GenJet_status[15];   //[nGenJet]
   Int_t           GenJet_pdgId[15];   //[nGenJet]
   Float_t         GenJet_pt[15];   //[nGenJet]
   Float_t         GenJet_eta[15];   //[nGenJet]
   Float_t         GenJet_phi[15];   //[nGenJet]
   Float_t         GenJet_mass[15];   //[nGenJet]
   Int_t           GenJet_numBHadrons[15];   //[nGenJet]
   Int_t           GenJet_numCHadrons[15];   //[nGenJet]
   Int_t           GenJet_numBHadronsFromTop[15];   //[nGenJet]
   Int_t           GenJet_numCHadronsFromTop[15];   //[nGenJet]
   Int_t           GenJet_numBHadronsAfterTop[15];   //[nGenJet]
   Int_t           GenJet_numCHadronsAfterTop[15];   //[nGenJet]
   Float_t         GenJet_wNuPt[15];   //[nGenJet]
   Float_t         GenJet_wNuEta[15];   //[nGenJet]
   Float_t         GenJet_wNuPhi[15];   //[nGenJet]
   Float_t         GenJet_wNuM[15];   //[nGenJet]
   Int_t           nSubjetCA15pruned;
   Float_t         SubjetCA15pruned_pt[10];   //[nSubjetCA15pruned]
   Float_t         SubjetCA15pruned_eta[10];   //[nSubjetCA15pruned]
   Float_t         SubjetCA15pruned_phi[10];   //[nSubjetCA15pruned]
   Float_t         SubjetCA15pruned_mass[10];   //[nSubjetCA15pruned]
   Float_t         SubjetCA15pruned_btag[10];   //[nSubjetCA15pruned]
   Int_t           nFatjetCA15ungroomed;
   Float_t         FatjetCA15ungroomed_pt[6];   //[nFatjetCA15ungroomed]
   Float_t         FatjetCA15ungroomed_eta[6];   //[nFatjetCA15ungroomed]
   Float_t         FatjetCA15ungroomed_phi[6];   //[nFatjetCA15ungroomed]
   Float_t         FatjetCA15ungroomed_mass[6];   //[nFatjetCA15ungroomed]
   Float_t         FatjetCA15ungroomed_tau1[6];   //[nFatjetCA15ungroomed]
   Float_t         FatjetCA15ungroomed_tau2[6];   //[nFatjetCA15ungroomed]
   Float_t         FatjetCA15ungroomed_tau3[6];   //[nFatjetCA15ungroomed]
   Float_t         FatjetCA15ungroomed_bbtag[6];   //[nFatjetCA15ungroomed]
   Float_t         FatjetCA15ungroomed_PFLepton_ptrel[6];   //[nFatjetCA15ungroomed]
   Float_t         FatjetCA15ungroomed_z_ratio[6];   //[nFatjetCA15ungroomed]
   Float_t         FatjetCA15ungroomed_tau_dot[6];   //[nFatjetCA15ungroomed]
   Float_t         FatjetCA15ungroomed_SV_mass_0[6];   //[nFatjetCA15ungroomed]
   Float_t         FatjetCA15ungroomed_SV_EnergyRatio_0[6];   //[nFatjetCA15ungroomed]
   Float_t         FatjetCA15ungroomed_SV_EnergyRatio_1[6];   //[nFatjetCA15ungroomed]
   Float_t         FatjetCA15ungroomed_PFLepton_IP2D[6];   //[nFatjetCA15ungroomed]
   Float_t         FatjetCA15ungroomed_tau_21[6];   //[nFatjetCA15ungroomed]
   Float_t         FatjetCA15ungroomed_nSL[6];   //[nFatjetCA15ungroomed]
   Float_t         FatjetCA15ungroomed_vertexNTracks[6];   //[nFatjetCA15ungroomed]
   Int_t           ndRaddJetsdR08;
   Float_t         dRaddJetsdR08[5];   //[ndRaddJetsdR08]
   Int_t           nGenBQuarkFromH;
   Int_t           GenBQuarkFromH_pdgId[2];   //[nGenBQuarkFromH]
   Float_t         GenBQuarkFromH_pt[2];   //[nGenBQuarkFromH]
   Float_t         GenBQuarkFromH_eta[2];   //[nGenBQuarkFromH]
   Float_t         GenBQuarkFromH_phi[2];   //[nGenBQuarkFromH]
   Float_t         GenBQuarkFromH_mass[2];   //[nGenBQuarkFromH]
   Float_t         GenBQuarkFromH_charge[2];   //[nGenBQuarkFromH]
   Int_t           GenBQuarkFromH_status[2];   //[nGenBQuarkFromH]
   Int_t           nGenStatus2bHad;
   Int_t           GenStatus2bHad_pdgId[1];   //[nGenStatus2bHad]
   Float_t         GenStatus2bHad_pt[1];   //[nGenStatus2bHad]
   Float_t         GenStatus2bHad_eta[1];   //[nGenStatus2bHad]
   Float_t         GenStatus2bHad_phi[1];   //[nGenStatus2bHad]
   Float_t         GenStatus2bHad_mass[1];   //[nGenStatus2bHad]
   Float_t         GenStatus2bHad_charge[1];   //[nGenStatus2bHad]
   Int_t           GenStatus2bHad_status[1];   //[nGenStatus2bHad]
   Int_t           nhJCidx;
   Int_t           hJCidx[2];   //[nhJCidx]
   Int_t           nGenTop;
   Int_t           GenTop_pdgId[1];   //[nGenTop]
   Float_t         GenTop_pt[1];   //[nGenTop]
   Float_t         GenTop_eta[1];   //[nGenTop]
   Float_t         GenTop_phi[1];   //[nGenTop]
   Float_t         GenTop_mass[1];   //[nGenTop]
   Float_t         GenTop_charge[1];   //[nGenTop]
   Int_t           GenTop_status[1];   //[nGenTop]
   Int_t           naJidx;
   Int_t           aJidx[8];   //[naJidx]
   Int_t           nFatjetCA15trimmed;
   Float_t         FatjetCA15trimmed_pt[6];   //[nFatjetCA15trimmed]
   Float_t         FatjetCA15trimmed_eta[6];   //[nFatjetCA15trimmed]
   Float_t         FatjetCA15trimmed_phi[6];   //[nFatjetCA15trimmed]
   Float_t         FatjetCA15trimmed_mass[6];   //[nFatjetCA15trimmed]
   Int_t           nGenLepFromTau;
   Int_t           GenLepFromTau_pdgId[1];   //[nGenLepFromTau]
   Float_t         GenLepFromTau_pt[1];   //[nGenLepFromTau]
   Float_t         GenLepFromTau_eta[1];   //[nGenLepFromTau]
   Float_t         GenLepFromTau_phi[1];   //[nGenLepFromTau]
   Float_t         GenLepFromTau_mass[1];   //[nGenLepFromTau]
   Float_t         GenLepFromTau_charge[1];   //[nGenLepFromTau]
   Int_t           GenLepFromTau_status[1];   //[nGenLepFromTau]
   Int_t           naLeptons;
   Int_t           aLeptons_charge[8];   //[naLeptons]
   Int_t           aLeptons_tightId[8];   //[naLeptons]
   Int_t           aLeptons_eleCutIdCSA14_25ns_v1[8];   //[naLeptons]
   Int_t           aLeptons_eleCutIdCSA14_50ns_v1[8];   //[naLeptons]
   Int_t           aLeptons_eleCutIdSpring15_25ns_v1[8];   //[naLeptons]
   Float_t         aLeptons_dxy[8];   //[naLeptons]
   Float_t         aLeptons_dz[8];   //[naLeptons]
   Float_t         aLeptons_edxy[8];   //[naLeptons]
   Float_t         aLeptons_edz[8];   //[naLeptons]
   Float_t         aLeptons_ip3d[8];   //[naLeptons]
   Float_t         aLeptons_sip3d[8];   //[naLeptons]
   Int_t           aLeptons_convVeto[8];   //[naLeptons]
   Int_t           aLeptons_lostHits[8];   //[naLeptons]
   Float_t         aLeptons_relIso03[8];   //[naLeptons]
   Float_t         aLeptons_relIso04[8];   //[naLeptons]
   Float_t         aLeptons_miniRelIso[8];   //[naLeptons]
   Int_t           aLeptons_tightCharge[8];   //[naLeptons]
   Int_t           aLeptons_mcMatchId[8];   //[naLeptons]
   Int_t           aLeptons_mcMatchAny[8];   //[naLeptons]
   Int_t           aLeptons_mcMatchTau[8];   //[naLeptons]
   Float_t         aLeptons_mcPt[8];   //[naLeptons]
   Int_t           aLeptons_mediumMuonId[8];   //[naLeptons]
   Int_t           aLeptons_pdgId[8];   //[naLeptons]
   Float_t         aLeptons_pt[8];   //[naLeptons]
   Float_t         aLeptons_eta[8];   //[naLeptons]
   Float_t         aLeptons_phi[8];   //[naLeptons]
   Float_t         aLeptons_mass[8];   //[naLeptons]
   Int_t           aLeptons_looseIdSusy[8];   //[naLeptons]
   Int_t           aLeptons_looseIdPOG[8];   //[naLeptons]
   Float_t         aLeptons_chargedHadRelIso03[8];   //[naLeptons]
   Float_t         aLeptons_chargedHadRelIso04[8];   //[naLeptons]
   Float_t         aLeptons_eleSieie[8];   //[naLeptons]
   Float_t         aLeptons_eleDEta[8];   //[naLeptons]
   Float_t         aLeptons_eleDPhi[8];   //[naLeptons]
   Float_t         aLeptons_eleHoE[8];   //[naLeptons]
   Float_t         aLeptons_eleMissingHits[8];   //[naLeptons]
   Float_t         aLeptons_eleChi2[8];   //[naLeptons]
   Float_t         aLeptons_nStations[8];   //[naLeptons]
   Float_t         aLeptons_trkKink[8];   //[naLeptons]
   Float_t         aLeptons_caloCompatibility[8];   //[naLeptons]
   Float_t         aLeptons_globalTrackChi2[8];   //[naLeptons]
   Float_t         aLeptons_nChamberHits[8];   //[naLeptons]
   Float_t         aLeptons_isPFMuon[8];   //[naLeptons]
   Float_t         aLeptons_isGlobalMuon[8];   //[naLeptons]
   Float_t         aLeptons_isTrackerMuon[8];   //[naLeptons]
   Float_t         aLeptons_pixelHits[8];   //[naLeptons]
   Int_t           aLeptons_trackerLayers[8];   //[naLeptons]
   Int_t           aLeptons_pixelLayers[8];   //[naLeptons]
   Float_t         aLeptons_mvaTTH[8];   //[naLeptons]
   Int_t           aLeptons_jetOverlapIdx[8];   //[naLeptons]
   Float_t         aLeptons_jetPtRatio[8];   //[naLeptons]
   Float_t         aLeptons_jetBTagCSV[8];   //[naLeptons]
   Float_t         aLeptons_jetDR[8];   //[naLeptons]
   Float_t         aLeptons_pfRelIso03[8];   //[naLeptons]
   Float_t         aLeptons_pfRelIso04[8];   //[naLeptons]
   Float_t         aLeptons_etaSc[8];   //[naLeptons]
   Float_t         aLeptons_eleExpMissingInnerHits[8];   //[naLeptons]
   Float_t         aLeptons_eleooEmooP[8];   //[naLeptons]
   Int_t           nGenNuFromTop;
   Int_t           GenNuFromTop_pdgId[1];   //[nGenNuFromTop]
   Float_t         GenNuFromTop_pt[1];   //[nGenNuFromTop]
   Float_t         GenNuFromTop_eta[1];   //[nGenNuFromTop]
   Float_t         GenNuFromTop_phi[1];   //[nGenNuFromTop]
   Float_t         GenNuFromTop_mass[1];   //[nGenNuFromTop]
   Float_t         GenNuFromTop_charge[1];   //[nGenNuFromTop]
   Int_t           GenNuFromTop_status[1];   //[nGenNuFromTop]
   Int_t           nFatjetAK08ungroomed;
   Float_t         FatjetAK08ungroomed_pt[6];   //[nFatjetAK08ungroomed]
   Float_t         FatjetAK08ungroomed_eta[6];   //[nFatjetAK08ungroomed]
   Float_t         FatjetAK08ungroomed_phi[6];   //[nFatjetAK08ungroomed]
   Float_t         FatjetAK08ungroomed_mass[6];   //[nFatjetAK08ungroomed]
   Float_t         FatjetAK08ungroomed_tau1[6];   //[nFatjetAK08ungroomed]
   Float_t         FatjetAK08ungroomed_tau2[6];   //[nFatjetAK08ungroomed]
   Float_t         FatjetAK08ungroomed_tau3[6];   //[nFatjetAK08ungroomed]
   Float_t         FatjetAK08ungroomed_msoftdrop[6];   //[nFatjetAK08ungroomed]
   Float_t         FatjetAK08ungroomed_mpruned[6];   //[nFatjetAK08ungroomed]
   Float_t         FatjetAK08ungroomed_mtrimmed[6];   //[nFatjetAK08ungroomed]
   Float_t         FatjetAK08ungroomed_mfiltered[6];   //[nFatjetAK08ungroomed]
   Float_t         FatjetAK08ungroomed_bbtag[6];   //[nFatjetAK08ungroomed]
   Float_t         FatjetAK08ungroomed_PFLepton_ptrel[6];   //[nFatjetAK08ungroomed]
   Float_t         FatjetAK08ungroomed_z_ratio[6];   //[nFatjetAK08ungroomed]
   Float_t         FatjetAK08ungroomed_tau_dot[6];   //[nFatjetAK08ungroomed]
   Float_t         FatjetAK08ungroomed_SV_mass_0[6];   //[nFatjetAK08ungroomed]
   Float_t         FatjetAK08ungroomed_SV_EnergyRatio_0[6];   //[nFatjetAK08ungroomed]
   Float_t         FatjetAK08ungroomed_SV_EnergyRatio_1[6];   //[nFatjetAK08ungroomed]
   Float_t         FatjetAK08ungroomed_PFLepton_IP2D[6];   //[nFatjetAK08ungroomed]
   Float_t         FatjetAK08ungroomed_tau_21[6];   //[nFatjetAK08ungroomed]
   Float_t         FatjetAK08ungroomed_nSL[6];   //[nFatjetAK08ungroomed]
   Float_t         FatjetAK08ungroomed_vertexNTracks[6];   //[nFatjetAK08ungroomed]
   Int_t           nselLeptons;
   Int_t           selLeptons_charge[5];   //[nselLeptons]
   Int_t           selLeptons_tightId[5];   //[nselLeptons]
   Int_t           selLeptons_eleCutIdCSA14_25ns_v1[5];   //[nselLeptons]
   Int_t           selLeptons_eleCutIdCSA14_50ns_v1[5];   //[nselLeptons]
   Int_t           selLeptons_eleCutIdSpring15_25ns_v1[5];   //[nselLeptons]
   Float_t         selLeptons_dxy[5];   //[nselLeptons]
   Float_t         selLeptons_dz[5];   //[nselLeptons]
   Float_t         selLeptons_edxy[5];   //[nselLeptons]
   Float_t         selLeptons_edz[5];   //[nselLeptons]
   Float_t         selLeptons_ip3d[5];   //[nselLeptons]
   Float_t         selLeptons_sip3d[5];   //[nselLeptons]
   Int_t           selLeptons_convVeto[5];   //[nselLeptons]
   Int_t           selLeptons_lostHits[5];   //[nselLeptons]
   Float_t         selLeptons_relIso03[5];   //[nselLeptons]
   Float_t         selLeptons_relIso04[5];   //[nselLeptons]
   Float_t         selLeptons_miniRelIso[5];   //[nselLeptons]
   Int_t           selLeptons_tightCharge[5];   //[nselLeptons]
   Int_t           selLeptons_mcMatchId[5];   //[nselLeptons]
   Int_t           selLeptons_mcMatchAny[5];   //[nselLeptons]
   Int_t           selLeptons_mcMatchTau[5];   //[nselLeptons]
   Float_t         selLeptons_mcPt[5];   //[nselLeptons]
   Int_t           selLeptons_mediumMuonId[5];   //[nselLeptons]
   Int_t           selLeptons_pdgId[5];   //[nselLeptons]
   Float_t         selLeptons_pt[5];   //[nselLeptons]
   Float_t         selLeptons_eta[5];   //[nselLeptons]
   Float_t         selLeptons_phi[5];   //[nselLeptons]
   Float_t         selLeptons_mass[5];   //[nselLeptons]
   Int_t           selLeptons_looseIdSusy[5];   //[nselLeptons]
   Int_t           selLeptons_looseIdPOG[5];   //[nselLeptons]
   Float_t         selLeptons_chargedHadRelIso03[5];   //[nselLeptons]
   Float_t         selLeptons_chargedHadRelIso04[5];   //[nselLeptons]
   Float_t         selLeptons_eleSieie[5];   //[nselLeptons]
   Float_t         selLeptons_eleDEta[5];   //[nselLeptons]
   Float_t         selLeptons_eleDPhi[5];   //[nselLeptons]
   Float_t         selLeptons_eleHoE[5];   //[nselLeptons]
   Float_t         selLeptons_eleMissingHits[5];   //[nselLeptons]
   Float_t         selLeptons_eleChi2[5];   //[nselLeptons]
   Float_t         selLeptons_nStations[5];   //[nselLeptons]
   Float_t         selLeptons_trkKink[5];   //[nselLeptons]
   Float_t         selLeptons_caloCompatibility[5];   //[nselLeptons]
   Float_t         selLeptons_globalTrackChi2[5];   //[nselLeptons]
   Float_t         selLeptons_nChamberHits[5];   //[nselLeptons]
   Float_t         selLeptons_isPFMuon[5];   //[nselLeptons]
   Float_t         selLeptons_isGlobalMuon[5];   //[nselLeptons]
   Float_t         selLeptons_isTrackerMuon[5];   //[nselLeptons]
   Float_t         selLeptons_pixelHits[5];   //[nselLeptons]
   Int_t           selLeptons_trackerLayers[5];   //[nselLeptons]
   Int_t           selLeptons_pixelLayers[5];   //[nselLeptons]
   Float_t         selLeptons_mvaTTH[5];   //[nselLeptons]
   Int_t           selLeptons_jetOverlapIdx[5];   //[nselLeptons]
   Float_t         selLeptons_jetPtRatio[5];   //[nselLeptons]
   Float_t         selLeptons_jetBTagCSV[5];   //[nselLeptons]
   Float_t         selLeptons_jetDR[5];   //[nselLeptons]
   Float_t         selLeptons_pfRelIso03[5];   //[nselLeptons]
   Float_t         selLeptons_pfRelIso04[5];   //[nselLeptons]
   Float_t         selLeptons_etaSc[5];   //[nselLeptons]
   Float_t         selLeptons_eleExpMissingInnerHits[5];   //[nselLeptons]
   Float_t         selLeptons_eleooEmooP[5];   //[nselLeptons]
   Int_t           nGenHiggsSisters;
   Int_t           GenHiggsSisters_pdgId[4];   //[nGenHiggsSisters]
   Float_t         GenHiggsSisters_pt[4];   //[nGenHiggsSisters]
   Float_t         GenHiggsSisters_eta[4];   //[nGenHiggsSisters]
   Float_t         GenHiggsSisters_phi[4];   //[nGenHiggsSisters]
   Float_t         GenHiggsSisters_mass[4];   //[nGenHiggsSisters]
   Float_t         GenHiggsSisters_charge[4];   //[nGenHiggsSisters]
   Int_t           GenHiggsSisters_status[4];   //[nGenHiggsSisters]
   Int_t           nhjidxaddJetsdR08;
   Int_t           hjidxaddJetsdR08[5];   //[nhjidxaddJetsdR08]
   Int_t           nsoftActivityVHJets;
   Float_t         softActivityVHJets_pt[5];   //[nsoftActivityVHJets]
   Float_t         softActivityVHJets_eta[5];   //[nsoftActivityVHJets]
   Float_t         softActivityVHJets_phi[5];   //[nsoftActivityVHJets]
   Float_t         softActivityVHJets_mass[5];   //[nsoftActivityVHJets]
   Int_t           nDiscardedJet;
   Int_t           DiscardedJet_id[15];   //[nDiscardedJet]
   Int_t           DiscardedJet_puId[15];   //[nDiscardedJet]
   Float_t         DiscardedJet_btagCSV[15];   //[nDiscardedJet]
   Float_t         DiscardedJet_btagCMVA[15];   //[nDiscardedJet]
   Float_t         DiscardedJet_rawPt[15];   //[nDiscardedJet]
   Float_t         DiscardedJet_mcPt[15];   //[nDiscardedJet]
   Int_t           DiscardedJet_mcFlavour[15];   //[nDiscardedJet]
   Int_t           DiscardedJet_mcMatchId[15];   //[nDiscardedJet]
   Float_t         DiscardedJet_corr_JECUp[15];   //[nDiscardedJet]
   Float_t         DiscardedJet_corr_JECDown[15];   //[nDiscardedJet]
   Float_t         DiscardedJet_corr[15];   //[nDiscardedJet]
   Float_t         DiscardedJet_corr_JERUp[15];   //[nDiscardedJet]
   Float_t         DiscardedJet_corr_JERDown[15];   //[nDiscardedJet]
   Float_t         DiscardedJet_corr_JER[15];   //[nDiscardedJet]
   Float_t         DiscardedJet_pt[15];   //[nDiscardedJet]
   Float_t         DiscardedJet_eta[15];   //[nDiscardedJet]
   Float_t         DiscardedJet_phi[15];   //[nDiscardedJet]
   Float_t         DiscardedJet_mass[15];   //[nDiscardedJet]
   Int_t           DiscardedJet_idxFirstTauMatch[15];   //[nDiscardedJet]
   Int_t           DiscardedJet_hadronFlavour[15];   //[nDiscardedJet]
   Float_t         DiscardedJet_btagBDT[15];   //[nDiscardedJet]
   Float_t         DiscardedJet_btagProb[15];   //[nDiscardedJet]
   Float_t         DiscardedJet_btagBProb[15];   //[nDiscardedJet]
   Float_t         DiscardedJet_btagSoftEl[15];   //[nDiscardedJet]
   Float_t         DiscardedJet_btagSoftMu[15];   //[nDiscardedJet]
   Float_t         DiscardedJet_btagnew[15];   //[nDiscardedJet]
   Float_t         DiscardedJet_btagCSVV0[15];   //[nDiscardedJet]
   Float_t         DiscardedJet_chHEF[15];   //[nDiscardedJet]
   Float_t         DiscardedJet_neHEF[15];   //[nDiscardedJet]
   Float_t         DiscardedJet_chEmEF[15];   //[nDiscardedJet]
   Float_t         DiscardedJet_neEmEF[15];   //[nDiscardedJet]
   Int_t           DiscardedJet_chMult[15];   //[nDiscardedJet]
   Float_t         DiscardedJet_leadTrackPt[15];   //[nDiscardedJet]
   Float_t         DiscardedJet_mcEta[15];   //[nDiscardedJet]
   Float_t         DiscardedJet_mcPhi[15];   //[nDiscardedJet]
   Float_t         DiscardedJet_mcM[15];   //[nDiscardedJet]
   Float_t         DiscardedJet_leptonPdgId[15];   //[nDiscardedJet]
   Float_t         DiscardedJet_leptonPt[15];   //[nDiscardedJet]
   Float_t         DiscardedJet_leptonPtRel[15];   //[nDiscardedJet]
   Float_t         DiscardedJet_leptonPtRelInv[15];   //[nDiscardedJet]
   Float_t         DiscardedJet_leptonDeltaR[15];   //[nDiscardedJet]
   Float_t         DiscardedJet_vtxMass[15];   //[nDiscardedJet]
   Float_t         DiscardedJet_vtxNtracks[15];   //[nDiscardedJet]
   Float_t         DiscardedJet_vtxPt[15];   //[nDiscardedJet]
   Float_t         DiscardedJet_vtx3DSig[15];   //[nDiscardedJet]
   Float_t         DiscardedJet_vtx3DVal[15];   //[nDiscardedJet]
   Float_t         DiscardedJet_vtxPosX[15];   //[nDiscardedJet]
   Float_t         DiscardedJet_vtxPosY[15];   //[nDiscardedJet]
   Float_t         DiscardedJet_vtxPosZ[15];   //[nDiscardedJet]
   Float_t         DiscardedJet_qgl[15];   //[nDiscardedJet]
   Float_t         DiscardedJet_ptd[15];   //[nDiscardedJet]
   Float_t         DiscardedJet_axis2[15];   //[nDiscardedJet]
   Int_t           DiscardedJet_mult[15];   //[nDiscardedJet]
   Int_t           DiscardedJet_numberOfDaughters[15];   //[nDiscardedJet]
   Int_t           DiscardedJet_btagIdx[15];   //[nDiscardedJet]
   Int_t           DiscardedJet_mcIdx[15];   //[nDiscardedJet]
   Float_t         DiscardedJet_pt_reg[15];   //[nDiscardedJet]
   Float_t         DiscardedJet_pt_regVBF[15];   //[nDiscardedJet]
   Float_t         DiscardedJet_blike_VBF[15];   //[nDiscardedJet]
   Float_t         DiscardedJet_bTagWeightJESUp[15];   //[nDiscardedJet]
   Float_t         DiscardedJet_bTagWeightJESDown[15];   //[nDiscardedJet]
   Float_t         DiscardedJet_bTagWeightLFUp[15];   //[nDiscardedJet]
   Float_t         DiscardedJet_bTagWeightLFDown[15];   //[nDiscardedJet]
   Float_t         DiscardedJet_bTagWeightHFUp[15];   //[nDiscardedJet]
   Float_t         DiscardedJet_bTagWeightHFDown[15];   //[nDiscardedJet]
   Float_t         DiscardedJet_bTagWeightStats1Up[15];   //[nDiscardedJet]
   Float_t         DiscardedJet_bTagWeightStats1Down[15];   //[nDiscardedJet]
   Float_t         DiscardedJet_bTagWeightStats2Up[15];   //[nDiscardedJet]
   Float_t         DiscardedJet_bTagWeightStats2Down[15];   //[nDiscardedJet]
   Float_t         DiscardedJet_bTagWeight[15];   //[nDiscardedJet]
   Int_t           nSubjetAK08pruned;
   Float_t         SubjetAK08pruned_pt[10];   //[nSubjetAK08pruned]
   Float_t         SubjetAK08pruned_eta[10];   //[nSubjetAK08pruned]
   Float_t         SubjetAK08pruned_phi[10];   //[nSubjetAK08pruned]
   Float_t         SubjetAK08pruned_mass[10];   //[nSubjetAK08pruned]
   Float_t         SubjetAK08pruned_btag[10];   //[nSubjetAK08pruned]
   Int_t           nTauGood;
   Int_t           TauGood_charge[11];   //[nTauGood]
   Int_t           TauGood_decayMode[11];   //[nTauGood]
   Int_t           TauGood_idDecayMode[11];   //[nTauGood]
   Int_t           TauGood_idDecayModeNewDMs[11];   //[nTauGood]
   Float_t         TauGood_dxy[11];   //[nTauGood]
   Float_t         TauGood_dz[11];   //[nTauGood]
   Int_t           TauGood_idMVA[11];   //[nTauGood]
   Int_t           TauGood_idMVANewDM[11];   //[nTauGood]
   Int_t           TauGood_idCI3hit[11];   //[nTauGood]
   Int_t           TauGood_idAntiMu[11];   //[nTauGood]
   Int_t           TauGood_idAntiE[11];   //[nTauGood]
   Float_t         TauGood_isoCI3hit[11];   //[nTauGood]
   Int_t           TauGood_mcMatchId[11];   //[nTauGood]
   Int_t           TauGood_pdgId[11];   //[nTauGood]
   Float_t         TauGood_pt[11];   //[nTauGood]
   Float_t         TauGood_eta[11];   //[nTauGood]
   Float_t         TauGood_phi[11];   //[nTauGood]
   Float_t         TauGood_mass[11];   //[nTauGood]
   Int_t           TauGood_idxJetMatch[11];   //[nTauGood]
   Int_t           TauGood_genMatchType[11];   //[nTauGood]
   Int_t           nhJidx;
   Int_t           hJidx[2];   //[nhJidx]
   Int_t           nGenLep;
   Int_t           GenLep_pdgId[1];   //[nGenLep]
   Float_t         GenLep_pt[1];   //[nGenLep]
   Float_t         GenLep_eta[1];   //[nGenLep]
   Float_t         GenLep_phi[1];   //[nGenLep]
   Float_t         GenLep_mass[1];   //[nGenLep]
   Float_t         GenLep_charge[1];   //[nGenLep]
   Int_t           GenLep_status[1];   //[nGenLep]
   Int_t           nSubjetAK08softdrop;
   Float_t         SubjetAK08softdrop_pt[10];   //[nSubjetAK08softdrop]
   Float_t         SubjetAK08softdrop_eta[10];   //[nSubjetAK08softdrop]
   Float_t         SubjetAK08softdrop_phi[10];   //[nSubjetAK08softdrop]
   Float_t         SubjetAK08softdrop_mass[10];   //[nSubjetAK08softdrop]
   Float_t         SubjetAK08softdrop_btag[10];   //[nSubjetAK08softdrop]
   Int_t           nGenHadTaus;
   Float_t         GenHadTaus_charge[4];   //[nGenHadTaus]
   Int_t           GenHadTaus_status[4];   //[nGenHadTaus]
   Int_t           GenHadTaus_pdgId[4];   //[nGenHadTaus]
   Float_t         GenHadTaus_pt[4];   //[nGenHadTaus]
   Float_t         GenHadTaus_eta[4];   //[nGenHadTaus]
   Float_t         GenHadTaus_phi[4];   //[nGenHadTaus]
   Float_t         GenHadTaus_mass[4];   //[nGenHadTaus]
   Int_t           GenHadTaus_decayMode[4];   //[nGenHadTaus]
   Int_t           nhttCandidates;
   Float_t         httCandidates_pt[3];   //[nhttCandidates]
   Float_t         httCandidates_eta[3];   //[nhttCandidates]
   Float_t         httCandidates_phi[3];   //[nhttCandidates]
   Float_t         httCandidates_mass[3];   //[nhttCandidates]
   Float_t         httCandidates_fRec[3];   //[nhttCandidates]
   Float_t         httCandidates_Ropt[3];   //[nhttCandidates]
   Float_t         httCandidates_RoptCalc[3];   //[nhttCandidates]
   Float_t         httCandidates_ptForRoptCalc[3];   //[nhttCandidates]
   Float_t         httCandidates_sjW1pt[3];   //[nhttCandidates]
   Float_t         httCandidates_sjW1eta[3];   //[nhttCandidates]
   Float_t         httCandidates_sjW1phi[3];   //[nhttCandidates]
   Float_t         httCandidates_sjW1mass[3];   //[nhttCandidates]
   Float_t         httCandidates_sjW1btag[3];   //[nhttCandidates]
   Float_t         httCandidates_sjW2pt[3];   //[nhttCandidates]
   Float_t         httCandidates_sjW2eta[3];   //[nhttCandidates]
   Float_t         httCandidates_sjW2phi[3];   //[nhttCandidates]
   Float_t         httCandidates_sjW2mass[3];   //[nhttCandidates]
   Float_t         httCandidates_sjW2btag[3];   //[nhttCandidates]
   Float_t         httCandidates_sjNonWpt[3];   //[nhttCandidates]
   Float_t         httCandidates_sjNonWeta[3];   //[nhttCandidates]
   Float_t         httCandidates_sjNonWphi[3];   //[nhttCandidates]
   Float_t         httCandidates_sjNonWmass[3];   //[nhttCandidates]
   Float_t         httCandidates_sjNonWbtag[3];   //[nhttCandidates]
   Int_t           nJet;
   Int_t           Jet_id[30];   //[nJet]
   Int_t           Jet_puId[30];   //[nJet]
   Float_t         Jet_btagCSV[30];   //[nJet]
   Float_t         Jet_btagCMVA[30];   //[nJet]
   Float_t         Jet_rawPt[30];   //[nJet]
   Float_t         Jet_mcPt[30];   //[nJet]
   Int_t           Jet_mcFlavour[30];   //[nJet]
   Int_t           Jet_mcMatchId[30];   //[nJet]
   Float_t         Jet_corr_JECUp[30];   //[nJet]
   Float_t         Jet_corr_JECDown[30];   //[nJet]
   Float_t         Jet_corr[30];   //[nJet]
   Float_t         Jet_corr_JERUp[30];   //[nJet]
   Float_t         Jet_corr_JERDown[30];   //[nJet]
   Float_t         Jet_corr_JER[30];   //[nJet]
   Float_t         Jet_pt[30];   //[nJet]
   Float_t         Jet_eta[30];   //[nJet]
   Float_t         Jet_phi[30];   //[nJet]
   Float_t         Jet_mass[30];   //[nJet]
   Int_t           Jet_idxFirstTauMatch[30];   //[nJet]
   Int_t           Jet_hadronFlavour[30];   //[nJet]
   Float_t         Jet_btagBDT[30];   //[nJet]
   Float_t         Jet_btagProb[30];   //[nJet]
   Float_t         Jet_btagBProb[30];   //[nJet]
   Float_t         Jet_btagSoftEl[30];   //[nJet]
   Float_t         Jet_btagSoftMu[30];   //[nJet]
   Float_t         Jet_btagnew[30];   //[nJet]
   Float_t         Jet_btagCSVV0[30];   //[nJet]
   Float_t         Jet_chHEF[30];   //[nJet]
   Float_t         Jet_neHEF[30];   //[nJet]
   Float_t         Jet_chEmEF[30];   //[nJet]
   Float_t         Jet_neEmEF[30];   //[nJet]
   Int_t           Jet_chMult[30];   //[nJet]
   Float_t         Jet_leadTrackPt[30];   //[nJet]
   Float_t         Jet_mcEta[30];   //[nJet]
   Float_t         Jet_mcPhi[30];   //[nJet]
   Float_t         Jet_mcM[30];   //[nJet]
   Float_t         Jet_leptonPdgId[30];   //[nJet]
   Float_t         Jet_leptonPt[30];   //[nJet]
   Float_t         Jet_leptonPtRel[30];   //[nJet]
   Float_t         Jet_leptonPtRelInv[30];   //[nJet]
   Float_t         Jet_leptonDeltaR[30];   //[nJet]
   Float_t         Jet_vtxMass[30];   //[nJet]
   Float_t         Jet_vtxNtracks[30];   //[nJet]
   Float_t         Jet_vtxPt[30];   //[nJet]
   Float_t         Jet_vtx3DSig[30];   //[nJet]
   Float_t         Jet_vtx3DVal[30];   //[nJet]
   Float_t         Jet_vtxPosX[30];   //[nJet]
   Float_t         Jet_vtxPosY[30];   //[nJet]
   Float_t         Jet_vtxPosZ[30];   //[nJet]
   Float_t         Jet_qgl[30];   //[nJet]
   Float_t         Jet_ptd[30];   //[nJet]
   Float_t         Jet_axis2[30];   //[nJet]
   Int_t           Jet_mult[30];   //[nJet]
   Int_t           Jet_numberOfDaughters[30];   //[nJet]
   Int_t           Jet_btagIdx[30];   //[nJet]
   Int_t           Jet_mcIdx[30];   //[nJet]
   Float_t         Jet_pt_reg[30];   //[nJet]
   Float_t         Jet_pt_regVBF[30];   //[nJet]
   Float_t         Jet_blike_VBF[30];   //[nJet]
   Float_t         Jet_bTagWeightJESUp[30];   //[nJet]
   Float_t         Jet_bTagWeightJESDown[30];   //[nJet]
   Float_t         Jet_bTagWeightLFUp[30];   //[nJet]
   Float_t         Jet_bTagWeightLFDown[30];   //[nJet]
   Float_t         Jet_bTagWeightHFUp[30];   //[nJet]
   Float_t         Jet_bTagWeightHFDown[30];   //[nJet]
   Float_t         Jet_bTagWeightStats1Up[30];   //[nJet]
   Float_t         Jet_bTagWeightStats1Down[30];   //[nJet]
   Float_t         Jet_bTagWeightStats2Up[30];   //[nJet]
   Float_t         Jet_bTagWeightStats2Down[30];   //[nJet]
   Float_t         Jet_bTagWeight[30];   //[nJet]
   Int_t           nFatjetCA15softdrop;
   Float_t         FatjetCA15softdrop_pt[6];   //[nFatjetCA15softdrop]
   Float_t         FatjetCA15softdrop_eta[6];   //[nFatjetCA15softdrop]
   Float_t         FatjetCA15softdrop_phi[6];   //[nFatjetCA15softdrop]
   Float_t         FatjetCA15softdrop_mass[6];   //[nFatjetCA15softdrop]
   Int_t           nvLeptons;
   Int_t           vLeptons_charge[2];   //[nvLeptons]
   Int_t           vLeptons_tightId[2];   //[nvLeptons]
   Int_t           vLeptons_eleCutIdCSA14_25ns_v1[2];   //[nvLeptons]
   Int_t           vLeptons_eleCutIdCSA14_50ns_v1[2];   //[nvLeptons]
   Int_t           vLeptons_eleCutIdSpring15_25ns_v1[2];   //[nvLeptons]
   Float_t         vLeptons_dxy[2];   //[nvLeptons]
   Float_t         vLeptons_dz[2];   //[nvLeptons]
   Float_t         vLeptons_edxy[2];   //[nvLeptons]
   Float_t         vLeptons_edz[2];   //[nvLeptons]
   Float_t         vLeptons_ip3d[2];   //[nvLeptons]
   Float_t         vLeptons_sip3d[2];   //[nvLeptons]
   Int_t           vLeptons_convVeto[2];   //[nvLeptons]
   Int_t           vLeptons_lostHits[2];   //[nvLeptons]
   Float_t         vLeptons_relIso03[2];   //[nvLeptons]
   Float_t         vLeptons_relIso04[2];   //[nvLeptons]
   Float_t         vLeptons_miniRelIso[2];   //[nvLeptons]
   Int_t           vLeptons_tightCharge[2];   //[nvLeptons]
   Int_t           vLeptons_mcMatchId[2];   //[nvLeptons]
   Int_t           vLeptons_mcMatchAny[2];   //[nvLeptons]
   Int_t           vLeptons_mcMatchTau[2];   //[nvLeptons]
   Float_t         vLeptons_mcPt[2];   //[nvLeptons]
   Int_t           vLeptons_mediumMuonId[2];   //[nvLeptons]
   Int_t           vLeptons_pdgId[2];   //[nvLeptons]
   Float_t         vLeptons_pt[2];   //[nvLeptons]
   Float_t         vLeptons_eta[2];   //[nvLeptons]
   Float_t         vLeptons_phi[2];   //[nvLeptons]
   Float_t         vLeptons_mass[2];   //[nvLeptons]
   Int_t           vLeptons_looseIdSusy[2];   //[nvLeptons]
   Int_t           vLeptons_looseIdPOG[2];   //[nvLeptons]
   Float_t         vLeptons_chargedHadRelIso03[2];   //[nvLeptons]
   Float_t         vLeptons_chargedHadRelIso04[2];   //[nvLeptons]
   Float_t         vLeptons_eleSieie[2];   //[nvLeptons]
   Float_t         vLeptons_eleDEta[2];   //[nvLeptons]
   Float_t         vLeptons_eleDPhi[2];   //[nvLeptons]
   Float_t         vLeptons_eleHoE[2];   //[nvLeptons]
   Float_t         vLeptons_eleMissingHits[2];   //[nvLeptons]
   Float_t         vLeptons_eleChi2[2];   //[nvLeptons]
   Float_t         vLeptons_nStations[2];   //[nvLeptons]
   Float_t         vLeptons_trkKink[2];   //[nvLeptons]
   Float_t         vLeptons_caloCompatibility[2];   //[nvLeptons]
   Float_t         vLeptons_globalTrackChi2[2];   //[nvLeptons]
   Float_t         vLeptons_nChamberHits[2];   //[nvLeptons]
   Float_t         vLeptons_isPFMuon[2];   //[nvLeptons]
   Float_t         vLeptons_isGlobalMuon[2];   //[nvLeptons]
   Float_t         vLeptons_isTrackerMuon[2];   //[nvLeptons]
   Float_t         vLeptons_pixelHits[2];   //[nvLeptons]
   Int_t           vLeptons_trackerLayers[2];   //[nvLeptons]
   Int_t           vLeptons_pixelLayers[2];   //[nvLeptons]
   Float_t         vLeptons_mvaTTH[2];   //[nvLeptons]
   Int_t           vLeptons_jetOverlapIdx[2];   //[nvLeptons]
   Float_t         vLeptons_jetPtRatio[2];   //[nvLeptons]
   Float_t         vLeptons_jetBTagCSV[2];   //[nvLeptons]
   Float_t         vLeptons_jetDR[2];   //[nvLeptons]
   Float_t         vLeptons_pfRelIso03[2];   //[nvLeptons]
   Float_t         vLeptons_pfRelIso04[2];   //[nvLeptons]
   Float_t         vLeptons_etaSc[2];   //[nvLeptons]
   Float_t         vLeptons_eleExpMissingInnerHits[2];   //[nvLeptons]
   Float_t         vLeptons_eleooEmooP[2];   //[nvLeptons]
   Int_t           npileUpVertex_z;
   Float_t         pileUpVertex_z[5];   //[npileUpVertex_z]
   Int_t           nprimaryVertices;
   Float_t         primaryVertices_x[4];   //[nprimaryVertices]
   Float_t         primaryVertices_y[4];   //[nprimaryVertices]
   Float_t         primaryVertices_z[4];   //[nprimaryVertices]
   Float_t         primaryVertices_isFake[4];   //[nprimaryVertices]
   Float_t         primaryVertices_ndof[4];   //[nprimaryVertices]
   Float_t         primaryVertices_Rho[4];   //[nprimaryVertices]
   Int_t           nsoftActivityJets;
   Float_t         softActivityJets_pt[5];   //[nsoftActivityJets]
   Float_t         softActivityJets_eta[5];   //[nsoftActivityJets]
   Float_t         softActivityJets_phi[5];   //[nsoftActivityJets]
   Float_t         softActivityJets_mass[5];   //[nsoftActivityJets]
   Int_t           nFatjetCA15softdropz2b1;
   Float_t         FatjetCA15softdropz2b1_pt[6];   //[nFatjetCA15softdropz2b1]
   Float_t         FatjetCA15softdropz2b1_eta[6];   //[nFatjetCA15softdropz2b1]
   Float_t         FatjetCA15softdropz2b1_phi[6];   //[nFatjetCA15softdropz2b1]
   Float_t         FatjetCA15softdropz2b1_mass[6];   //[nFatjetCA15softdropz2b1]
   Float_t         FatjetCA15softdropz2b1_tau1[6];   //[nFatjetCA15softdropz2b1]
   Float_t         FatjetCA15softdropz2b1_tau2[6];   //[nFatjetCA15softdropz2b1]
   Float_t         FatjetCA15softdropz2b1_tau3[6];   //[nFatjetCA15softdropz2b1]
   Int_t           nGenWZQuark;
   Int_t           GenWZQuark_pdgId[1];   //[nGenWZQuark]
   Float_t         GenWZQuark_pt[1];   //[nGenWZQuark]
   Float_t         GenWZQuark_eta[1];   //[nGenWZQuark]
   Float_t         GenWZQuark_phi[1];   //[nGenWZQuark]
   Float_t         GenWZQuark_mass[1];   //[nGenWZQuark]
   Float_t         GenWZQuark_charge[1];   //[nGenWZQuark]
   Int_t           GenWZQuark_status[1];   //[nGenWZQuark]
   Int_t           nGenBQuarkFromTop;
   Int_t           GenBQuarkFromTop_pdgId[1];   //[nGenBQuarkFromTop]
   Float_t         GenBQuarkFromTop_pt[1];   //[nGenBQuarkFromTop]
   Float_t         GenBQuarkFromTop_eta[1];   //[nGenBQuarkFromTop]
   Float_t         GenBQuarkFromTop_phi[1];   //[nGenBQuarkFromTop]
   Float_t         GenBQuarkFromTop_mass[1];   //[nGenBQuarkFromTop]
   Float_t         GenBQuarkFromTop_charge[1];   //[nGenBQuarkFromTop]
   Int_t           GenBQuarkFromTop_status[1];   //[nGenBQuarkFromTop]

   // List of branches
   TBranch        *b_run;   //!
   TBranch        *b_lumi;   //!
   TBranch        *b_evt;   //!
   TBranch        *b_isData;   //!
   TBranch        *b_xsec;   //!
   TBranch        *b_puWeight;   //!
   TBranch        *b_nTrueInt;   //!
   TBranch        *b_genWeight;   //!
   TBranch        *b_json;   //!
   TBranch        *b_nPU0;   //!
   TBranch        *b_nPVs;   //!
   TBranch        *b_Vtype;   //!
   TBranch        *b_VtypeSim;   //!
   TBranch        *b_VMt;   //!
   TBranch        *b_HVdPhi;   //!
   TBranch        *b_fakeMET_sumet;   //!
   TBranch        *b_rho;   //!
   TBranch        *b_deltaR_jj;   //!
   TBranch        *b_lheNj;   //!
   TBranch        *b_lheNb;   //!
   TBranch        *b_lheNc;   //!
   TBranch        *b_lheNg;   //!
   TBranch        *b_lheNl;   //!
   TBranch        *b_lheV_pt;   //!
   TBranch        *b_lheHT;   //!
   TBranch        *b_genTTHtoTauTauDecayMode;   //!
   TBranch        *b_ttCls;   //!
   TBranch        *b_mhtJet30;   //!
   TBranch        *b_mhtPhiJet30;   //!
   TBranch        *b_htJet30;   //!
   TBranch        *b_met_rawpt;   //!
   TBranch        *b_metPuppi_pt;   //!
   TBranch        *b_metPuppi_phi;   //!
   TBranch        *b_metPuppi_rawpt;   //!
   TBranch        *b_metNoHF_pt;   //!
   TBranch        *b_metNoHF_phi;   //!
   TBranch        *b_metNoHF_rawpt;   //!
   TBranch        *b_metType1p2_pt;   //!
   TBranch        *b_metNoPU_pt;   //!
   TBranch        *b_metNoPU_phi;   //!
   TBranch        *b_tkMet_pt;   //!
   TBranch        *b_tkMet_phi;   //!
   TBranch        *b_tkMetPVchs_pt;   //!
   TBranch        *b_tkMetPVchs_phi;   //!
   TBranch        *b_isrJetVH;   //!
   TBranch        *b_simPrimaryVertex_z;   //!
   TBranch        *b_bTagWeight_LFUp;   //!
   TBranch        *b_bTagWeight_Stats2Down;   //!
   TBranch        *b_bTagWeight_LFDown;   //!
   TBranch        *b_bTagWeight_HFUp;   //!
   TBranch        *b_bTagWeight_JESDown;   //!
   TBranch        *b_bTagWeight;   //!
   TBranch        *b_bTagWeight_HFDown;   //!
   TBranch        *b_bTagWeight_Stats2Up;   //!
   TBranch        *b_bTagWeight_JESUp;   //!
   TBranch        *b_bTagWeight_Stats1Up;   //!
   TBranch        *b_bTagWeight_Stats1Down;   //!
   TBranch        *b_Flag_EcalDeadCellTriggerPrimitiveFilter;   //!
   TBranch        *b_Flag_trkPOG_manystripclus53X;   //!
   TBranch        *b_Flag_ecalLaserCorrFilter;   //!
   TBranch        *b_Flag_trkPOG_toomanystripclus53X;   //!
   TBranch        *b_Flag_hcalLaserEventFilter;   //!
   TBranch        *b_Flag_trkPOG_logErrorTooManyClusters;   //!
   TBranch        *b_Flag_trkPOGFilters;   //!
   TBranch        *b_Flag_trackingFailureFilter;   //!
   TBranch        *b_Flag_CSCTightHaloFilter;   //!
   TBranch        *b_Flag_HBHENoiseFilter;   //!
   TBranch        *b_Flag_goodVertices;   //!
   TBranch        *b_Flag_METFilters;   //!
   TBranch        *b_Flag_eeBadScFilter;   //!
   TBranch        *b_HLT_BIT_HLT_CaloMHTNoPU90_PFMET90_PFMHT90_IDLoose_BTagCSV0p7_v;   //!
   TBranch        *b_HLT_BIT_HLT_CaloMHTNoPU90_PFMET90_PFMHT90_IDLoose_v;   //!
   TBranch        *b_HLT_BIT_HLT_PFMET90_PFMHT90_IDLoose_v;   //!
   TBranch        *b_HLT_BIT_HLT_PFMET100_PFMHT100_IDLoose_v;   //!
   TBranch        *b_HLT_BIT_HLT_PFMET110_PFMHT110_IDLoose_v;   //!
   TBranch        *b_HLT_BIT_HLT_PFMET120_PFMHT120_IDLoose_v;   //!
   TBranch        *b_HLT_BIT_HLT_PFMET170_NoiseCleaned_v;   //!
   TBranch        *b_HLT_BIT_HLT_DiCentralPFJet70_PFMET120_NoiseCleaned_v;   //!
   TBranch        *b_HLT_BIT_HLT_PFHT350_PFMET120_NoiseCleaned_v;   //!
   TBranch        *b_HLT_ZnnHbbAll;   //!
   TBranch        *b_HLT_BIT_HLT_QuadPFJet_DoubleBTagCSV_VBF_Mqq200_v;   //!
   TBranch        *b_HLT_BIT_HLT_QuadPFJet_SingleBTagCSV_VBF_Mqq460_v;   //!
   TBranch        *b_HLT_VBFHbbLowLumi;   //!
   TBranch        *b_HLT_BIT_HLT_PFHT750_4Jet_v;   //!
   TBranch        *b_HLT_BIT_HLT_PFHT900_v;   //!
   TBranch        *b_HLT_BIT_HLT_PFJet40_v;   //!
   TBranch        *b_HLT_BIT_HLT_PFJet60_v;   //!
   TBranch        *b_HLT_BIT_HLT_PFJet80_v;   //!
   TBranch        *b_HLT_BIT_HLT_PFJet140_v;   //!
   TBranch        *b_HLT_BIT_HLT_PFJet200_v;   //!
   TBranch        *b_HLT_BIT_HLT_PFJet260_v;   //!
   TBranch        *b_HLT_BIT_HLT_PFJet320_v;   //!
   TBranch        *b_HLT_BIT_HLT_PFJet400_v;   //!
   TBranch        *b_HLT_BIT_HLT_PFJet450_v;   //!
   TBranch        *b_HLT_hadronic;   //!
   TBranch        *b_HLT_BIT_HLT_PFHT400_SixJet30_BTagCSV0p5_2PFBTagCSV_v;   //!
   TBranch        *b_HLT_BIT_HLT_PFHT450_SixJet40_PFBTagCSV_v;   //!
   TBranch        *b_HLT_ttHhardonicLowLumi;   //!
   TBranch        *b_HLT_BIT_HLT_QuadJet45_TripleCSV0p5_v;   //!
   TBranch        *b_HLT_BIT_HLT_QuadJet45_DoubleCSV0p5_v;   //!
   TBranch        *b_HLT_BIT_HLT_DoubleJet90_Double30_TripleCSV0p5_v;   //!
   TBranch        *b_HLT_BIT_HLT_DoubleJet90_Double30_DoubleCSV0p5_v;   //!
   TBranch        *b_HLT_HH4bAll;   //!
   TBranch        *b_HLT_BIT_HLT_LooseIsoPFTau50_Trk30_eta2p1_MET80_v;   //!
   TBranch        *b_HLT_WtaunHbbLowLumi;   //!
   TBranch        *b_HLT_BIT_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_v;   //!
   TBranch        *b_HLT_BIT_HLT_DoubleEle24_22_eta2p1_WP75_Gsf_v;   //!
   TBranch        *b_HLT_ZeeHbbHighLumi;   //!
   TBranch        *b_HLT_HH4bHighLumi;   //!
   TBranch        *b_HLT_ZnnHbbHighLumi;   //!
   TBranch        *b_HLT_BIT_HLT_QuadPFJet_DoubleBTagCSV_VBF_Mqq240_v;   //!
   TBranch        *b_HLT_BIT_HLT_QuadPFJet_SingleBTagCSV_VBF_Mqq500_v;   //!
   TBranch        *b_HLT_BIT_HLT_QuadPFJet_VBF_v;   //!
   TBranch        *b_HLT_BIT_HLT_L1_TripleJet_VBF_v;   //!
   TBranch        *b_HLT_BIT_HLT_PFHT650_WideJetMJJ900DEtaJJ1p5_v;   //!
   TBranch        *b_HLT_BIT_HLT_PFHT650_WideJetMJJ950DEtaJJ1p5_v;   //!
   TBranch        *b_HLT_VBFHbbAll;   //!
   TBranch        *b_HLT_BIT_HLT_Ele27_eta2p1_WP75_Gsf_v;   //!
   TBranch        *b_HLT_BIT_HLT_Ele27_eta2p1_WP85_Gsf_HT200_v;   //!
   TBranch        *b_HLT_WenHbbLowLumi;   //!
   TBranch        *b_HLT_BIT_HLT_Ele32_eta2p1_WP75_Gsf_v;   //!
   TBranch        *b_HLT_BIT_HLT_Ele32_eta2p1_WP75_Gsf_CentralPFJet30_BTagCSV07_v;   //!
   TBranch        *b_HLT_BIT_HLT_Ele27_WP85_Gsf_v;   //!
   TBranch        *b_HLT_BIT_HLT_Ele27_eta2p1_WP75_Gsf_CentralPFJet30_BTagCSV07_v;   //!
   TBranch        *b_HLT_BIT_HLT_Ele105_CaloIdVT_GsfTrkIdT_v;   //!
   TBranch        *b_HLT_BIT_HLT_Ele45_CaloIdVT_GsfTrkIdT_PFJet200_PFJet50_v;   //!
   TBranch        *b_HLT_WenHbbAll;   //!
   TBranch        *b_HLT_BIT_HLT_Ele17_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_v;   //!
   TBranch        *b_HLT_ZeeHbbLowLumi;   //!
   TBranch        *b_HLT_BIT_HLT_IsoMu24_eta2p1_v;   //!
   TBranch        *b_HLT_BIT_HLT_IsoMu24_eta2p1_CentralPFJet30_BTagCSV07_v;   //!
   TBranch        *b_HLT_BIT_HLT_Mu24_eta2p1_v;   //!
   TBranch        *b_HLT_BIT_HLT_TkMu24_eta2p1_v;   //!
   TBranch        *b_HLT_BIT_HLT_Mu24_v;   //!
   TBranch        *b_HLT_BIT_HLT_IsoMu27_v;   //!
   TBranch        *b_HLT_BIT_HLT_IsoTkMu27_v;   //!
   TBranch        *b_HLT_BIT_HLT_TkMu27_v;   //!
   TBranch        *b_HLT_BIT_HLT_Mu27_v;   //!
   TBranch        *b_HLT_BIT_HLT_IsoMu20_eta2p1_v;   //!
   TBranch        *b_HLT_BIT_HLT_IsoMu20_eta2p1_CentralPFJet30_BTagCSV07_v;   //!
   TBranch        *b_HLT_BIT_HLT_Mu20_v;   //!
   TBranch        *b_HLT_BIT_HLT_TkMu20_v;   //!
   TBranch        *b_HLT_BIT_HLT_IsoMu20_v;   //!
   TBranch        *b_HLT_BIT_HLT_IsoTkMu20_v;   //!
   TBranch        *b_HLT_BIT_HLT_Mu40_eta2p1_PFJet200_PFJet50_v;   //!
   TBranch        *b_HLT_BIT_HLT_IsoMu16_eta2p1_CaloMET30_v;   //!
   TBranch        *b_HLT_BIT_HLT_Mu16_eta2p1_CaloMET30_v;   //!
   TBranch        *b_HLT_BIT_HLT_PFMET120_NoiseCleaned_Mu5_v;   //!
   TBranch        *b_HLT_BIT_HLT_MonoCentralPFJet80_PFMETNoMu120_NoiseCleaned_PFMHTNoMu120_IDTight_v;   //!
   TBranch        *b_HLT_BIT_HLT_MonoCentralPFJet80_PFMETNoMu90_NoiseCleaned_PFMHTNoMu90_IDTight_v;   //!
   TBranch        *b_HLT_BIT_HLT_PFMETNoMu120_NoiseCleaned_PFMHTNoMu120_IDTight_v;   //!
   TBranch        *b_HLT_BIT_HLT_PFMETNoMu90_NoiseCleaned_PFMHTNoMu90_IDTight_v;   //!
   TBranch        *b_HLT_WmnHbbAll;   //!
   TBranch        *b_HLT_BIT_HLT_LooseIsoPFTau50_Trk30_eta2p1_MET120_v;   //!
   TBranch        *b_HLT_BIT_HLT_LooseIsoPFTau50_Trk30_eta2p1_v;   //!
   TBranch        *b_HLT_WtaunHbbAll;   //!
   TBranch        *b_HLT_BIT_HLT_PFHT450_SixJet40_v;   //!
   TBranch        *b_HLT_BIT_HLT_PFHT400_SixJet30_v;   //!
   TBranch        *b_HLT_ttHhardonicAll;   //!
   TBranch        *b_HLT_BIT_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_v;   //!
   TBranch        *b_HLT_BIT_HLT_Ele23_CaloIdL_TrackIdL_IsoVL_v;   //!
   TBranch        *b_HLT_BIT_HLT_Ele17_Ele12_CaloIdL_TrackIdL_IsoVL_v;   //!
   TBranch        *b_HLT_BIT_HLT_Ele12_CaloIdL_TrackIdL_IsoVL_v;   //!
   TBranch        *b_HLT_ZeeHbbAll;   //!
   TBranch        *b_HLT_WmnHbbLowLumi;   //!
   TBranch        *b_HLT_BIT_HLT_Mu17_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_v;   //!
   TBranch        *b_HLT_BIT_HLT_Mu8_TrkIsoVVL_Ele17_CaloIdL_TrackIdL_IsoVL_v;   //!
   TBranch        *b_HLT_ttHleptonic;   //!
   TBranch        *b_HLT_VBFHbbHighLumi;   //!
   TBranch        *b_HLT_BIT_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_v;   //!
   TBranch        *b_HLT_BIT_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_v;   //!
   TBranch        *b_HLT_ZmmHbbLowLumi;   //!
   TBranch        *b_HLT_WmnHbbHighLumi;   //!
   TBranch        *b_HLT_BIT_HLT_Mu17_TkMu8_DZ_v;   //!
   TBranch        *b_HLT_BIT_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_v;   //!
   TBranch        *b_HLT_BIT_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_v;   //!
   TBranch        *b_HLT_BIT_HLT_DoubleIsoMu17_eta2p1_v;   //!
   TBranch        *b_HLT_ZmmHbbAll;   //!
   TBranch        *b_HLT_ZnnHbbLowLumi;   //!
   TBranch        *b_HLT_WenHbbHighLumi;   //!
   TBranch        *b_HLT_HH4bLowLumi;   //!
   TBranch        *b_HLT_ZmmHbbHighLumi;   //!
   TBranch        *b_HLT_ttHhardonicHighLumi;   //!
   TBranch        *b_HLT_WtaunHbbHighLumi;   //!
   TBranch        *b_V_pt;   //!
   TBranch        *b_V_eta;   //!
   TBranch        *b_V_phi;   //!
   TBranch        *b_V_mass;   //!
   TBranch        *b_HaddJetsdR08_pt;   //!
   TBranch        *b_HaddJetsdR08_eta;   //!
   TBranch        *b_HaddJetsdR08_phi;   //!
   TBranch        *b_HaddJetsdR08_mass;   //!
   TBranch        *b_H_pt;   //!
   TBranch        *b_H_eta;   //!
   TBranch        *b_H_phi;   //!
   TBranch        *b_H_mass;   //!
   TBranch        *b_softActivityVH_njets2;   //!
   TBranch        *b_softActivityVH_njets5;   //!
   TBranch        *b_softActivityVH_njets10;   //!
   TBranch        *b_softActivityVH_HT;   //!
   TBranch        *b_met_shifted_JetResUp_pt;   //!
   TBranch        *b_met_shifted_JetResUp_phi;   //!
   TBranch        *b_met_shifted_JetResUp_sumEt;   //!
   TBranch        *b_met_pt;   //!
   TBranch        *b_met_eta;   //!
   TBranch        *b_met_phi;   //!
   TBranch        *b_met_mass;   //!
   TBranch        *b_met_sumEt;   //!
   TBranch        *b_met_genPt;   //!
   TBranch        *b_met_genPhi;   //!
   TBranch        *b_met_genEta;   //!
   TBranch        *b_H_reg_pt;   //!
   TBranch        *b_H_reg_eta;   //!
   TBranch        *b_H_reg_phi;   //!
   TBranch        *b_H_reg_mass;   //!
   TBranch        *b_met_shifted_JetEnDown_pt;   //!
   TBranch        *b_met_shifted_JetEnDown_phi;   //!
   TBranch        *b_met_shifted_JetEnDown_sumEt;   //!
   TBranch        *b_HCSV_pt;   //!
   TBranch        *b_HCSV_eta;   //!
   TBranch        *b_HCSV_phi;   //!
   TBranch        *b_HCSV_mass;   //!
   TBranch        *b_met_shifted_MuonEnDown_pt;   //!
   TBranch        *b_met_shifted_MuonEnDown_phi;   //!
   TBranch        *b_met_shifted_MuonEnDown_sumEt;   //!
   TBranch        *b_met_shifted_ElectronEnUp_pt;   //!
   TBranch        *b_met_shifted_ElectronEnUp_phi;   //!
   TBranch        *b_met_shifted_ElectronEnUp_sumEt;   //!
   TBranch        *b_met_shifted_ElectronEnDown_pt;   //!
   TBranch        *b_met_shifted_ElectronEnDown_phi;   //!
   TBranch        *b_met_shifted_ElectronEnDown_sumEt;   //!
   TBranch        *b_fakeMET_pt;   //!
   TBranch        *b_fakeMET_eta;   //!
   TBranch        *b_fakeMET_phi;   //!
   TBranch        *b_fakeMET_mass;   //!
   TBranch        *b_met_shifted_TauEnDown_pt;   //!
   TBranch        *b_met_shifted_TauEnDown_phi;   //!
   TBranch        *b_met_shifted_TauEnDown_sumEt;   //!
   TBranch        *b_met_shifted_TauEnUp_pt;   //!
   TBranch        *b_met_shifted_TauEnUp_phi;   //!
   TBranch        *b_met_shifted_TauEnUp_sumEt;   //!
   TBranch        *b_HCSV_reg_pt;   //!
   TBranch        *b_HCSV_reg_eta;   //!
   TBranch        *b_HCSV_reg_phi;   //!
   TBranch        *b_HCSV_reg_mass;   //!
   TBranch        *b_met_shifted_UnclusteredEnUp_pt;   //!
   TBranch        *b_met_shifted_UnclusteredEnUp_phi;   //!
   TBranch        *b_met_shifted_UnclusteredEnUp_sumEt;   //!
   TBranch        *b_met_shifted_UnclusteredEnDown_pt;   //!
   TBranch        *b_met_shifted_UnclusteredEnDown_phi;   //!
   TBranch        *b_met_shifted_UnclusteredEnDown_sumEt;   //!
   TBranch        *b_met_shifted_JetEnUp_pt;   //!
   TBranch        *b_met_shifted_JetEnUp_phi;   //!
   TBranch        *b_met_shifted_JetEnUp_sumEt;   //!
   TBranch        *b_met_shifted_JetResDown_pt;   //!
   TBranch        *b_met_shifted_JetResDown_phi;   //!
   TBranch        *b_met_shifted_JetResDown_sumEt;   //!
   TBranch        *b_softActivity_njets2;   //!
   TBranch        *b_softActivity_njets5;   //!
   TBranch        *b_softActivity_njets10;   //!
   TBranch        *b_softActivity_HT;   //!
   TBranch        *b_met_shifted_MuonEnUp_pt;   //!
   TBranch        *b_met_shifted_MuonEnUp_phi;   //!
   TBranch        *b_met_shifted_MuonEnUp_sumEt;   //!
   TBranch        *b_nGenBQuarkFromHafterISR;   //!
   TBranch        *b_GenBQuarkFromHafterISR_pdgId;   //!
   TBranch        *b_GenBQuarkFromHafterISR_pt;   //!
   TBranch        *b_GenBQuarkFromHafterISR_eta;   //!
   TBranch        *b_GenBQuarkFromHafterISR_phi;   //!
   TBranch        *b_GenBQuarkFromHafterISR_mass;   //!
   TBranch        *b_GenBQuarkFromHafterISR_charge;   //!
   TBranch        *b_GenBQuarkFromHafterISR_status;   //!
   TBranch        *b_npileUpVertex_ptHat;   //!
   TBranch        *b_pileUpVertex_ptHat;   //!
   TBranch        *b_nGenHiggsBoson;   //!
   TBranch        *b_GenHiggsBoson_pdgId;   //!
   TBranch        *b_GenHiggsBoson_pt;   //!
   TBranch        *b_GenHiggsBoson_eta;   //!
   TBranch        *b_GenHiggsBoson_phi;   //!
   TBranch        *b_GenHiggsBoson_mass;   //!
   TBranch        *b_GenHiggsBoson_charge;   //!
   TBranch        *b_GenHiggsBoson_status;   //!
   TBranch        *b_nhJidx_sortcsv;   //!
   TBranch        *b_hJidx_sortcsv;   //!
   TBranch        *b_naJCidx;   //!
   TBranch        *b_aJCidx;   //!
   TBranch        *b_nFatjetCA15pruned;   //!
   TBranch        *b_FatjetCA15pruned_pt;   //!
   TBranch        *b_FatjetCA15pruned_eta;   //!
   TBranch        *b_FatjetCA15pruned_phi;   //!
   TBranch        *b_FatjetCA15pruned_mass;   //!
   TBranch        *b_nGenLepFromTop;   //!
   TBranch        *b_GenLepFromTop_pdgId;   //!
   TBranch        *b_GenLepFromTop_pt;   //!
   TBranch        *b_GenLepFromTop_eta;   //!
   TBranch        *b_GenLepFromTop_phi;   //!
   TBranch        *b_GenLepFromTop_mass;   //!
   TBranch        *b_GenLepFromTop_charge;   //!
   TBranch        *b_GenLepFromTop_status;   //!
   TBranch        *b_nGenVbosons;   //!
   TBranch        *b_GenVbosons_pdgId;   //!
   TBranch        *b_GenVbosons_pt;   //!
   TBranch        *b_GenVbosons_eta;   //!
   TBranch        *b_GenVbosons_phi;   //!
   TBranch        *b_GenVbosons_mass;   //!
   TBranch        *b_GenVbosons_charge;   //!
   TBranch        *b_GenVbosons_status;   //!
   TBranch        *b_najidxaddJetsdR08;   //!
   TBranch        *b_ajidxaddJetsdR08;   //!
   TBranch        *b_nFatjetAK08pruned;   //!
   TBranch        *b_FatjetAK08pruned_pt;   //!
   TBranch        *b_FatjetAK08pruned_eta;   //!
   TBranch        *b_FatjetAK08pruned_phi;   //!
   TBranch        *b_FatjetAK08pruned_mass;   //!
   TBranch        *b_nGenJet;   //!
   TBranch        *b_GenJet_charge;   //!
   TBranch        *b_GenJet_status;   //!
   TBranch        *b_GenJet_pdgId;   //!
   TBranch        *b_GenJet_pt;   //!
   TBranch        *b_GenJet_eta;   //!
   TBranch        *b_GenJet_phi;   //!
   TBranch        *b_GenJet_mass;   //!
   TBranch        *b_GenJet_numBHadrons;   //!
   TBranch        *b_GenJet_numCHadrons;   //!
   TBranch        *b_GenJet_numBHadronsFromTop;   //!
   TBranch        *b_GenJet_numCHadronsFromTop;   //!
   TBranch        *b_GenJet_numBHadronsAfterTop;   //!
   TBranch        *b_GenJet_numCHadronsAfterTop;   //!
   TBranch        *b_GenJet_wNuPt;   //!
   TBranch        *b_GenJet_wNuEta;   //!
   TBranch        *b_GenJet_wNuPhi;   //!
   TBranch        *b_GenJet_wNuM;   //!
   TBranch        *b_nSubjetCA15pruned;   //!
   TBranch        *b_SubjetCA15pruned_pt;   //!
   TBranch        *b_SubjetCA15pruned_eta;   //!
   TBranch        *b_SubjetCA15pruned_phi;   //!
   TBranch        *b_SubjetCA15pruned_mass;   //!
   TBranch        *b_SubjetCA15pruned_btag;   //!
   TBranch        *b_nFatjetCA15ungroomed;   //!
   TBranch        *b_FatjetCA15ungroomed_pt;   //!
   TBranch        *b_FatjetCA15ungroomed_eta;   //!
   TBranch        *b_FatjetCA15ungroomed_phi;   //!
   TBranch        *b_FatjetCA15ungroomed_mass;   //!
   TBranch        *b_FatjetCA15ungroomed_tau1;   //!
   TBranch        *b_FatjetCA15ungroomed_tau2;   //!
   TBranch        *b_FatjetCA15ungroomed_tau3;   //!
   TBranch        *b_FatjetCA15ungroomed_bbtag;   //!
   TBranch        *b_FatjetCA15ungroomed_PFLepton_ptrel;   //!
   TBranch        *b_FatjetCA15ungroomed_z_ratio;   //!
   TBranch        *b_FatjetCA15ungroomed_tau_dot;   //!
   TBranch        *b_FatjetCA15ungroomed_SV_mass_0;   //!
   TBranch        *b_FatjetCA15ungroomed_SV_EnergyRatio_0;   //!
   TBranch        *b_FatjetCA15ungroomed_SV_EnergyRatio_1;   //!
   TBranch        *b_FatjetCA15ungroomed_PFLepton_IP2D;   //!
   TBranch        *b_FatjetCA15ungroomed_tau_21;   //!
   TBranch        *b_FatjetCA15ungroomed_nSL;   //!
   TBranch        *b_FatjetCA15ungroomed_vertexNTracks;   //!
   TBranch        *b_ndRaddJetsdR08;   //!
   TBranch        *b_dRaddJetsdR08;   //!
   TBranch        *b_nGenBQuarkFromH;   //!
   TBranch        *b_GenBQuarkFromH_pdgId;   //!
   TBranch        *b_GenBQuarkFromH_pt;   //!
   TBranch        *b_GenBQuarkFromH_eta;   //!
   TBranch        *b_GenBQuarkFromH_phi;   //!
   TBranch        *b_GenBQuarkFromH_mass;   //!
   TBranch        *b_GenBQuarkFromH_charge;   //!
   TBranch        *b_GenBQuarkFromH_status;   //!
   TBranch        *b_nGenStatus2bHad;   //!
   TBranch        *b_GenStatus2bHad_pdgId;   //!
   TBranch        *b_GenStatus2bHad_pt;   //!
   TBranch        *b_GenStatus2bHad_eta;   //!
   TBranch        *b_GenStatus2bHad_phi;   //!
   TBranch        *b_GenStatus2bHad_mass;   //!
   TBranch        *b_GenStatus2bHad_charge;   //!
   TBranch        *b_GenStatus2bHad_status;   //!
   TBranch        *b_nhJCidx;   //!
   TBranch        *b_hJCidx;   //!
   TBranch        *b_nGenTop;   //!
   TBranch        *b_GenTop_pdgId;   //!
   TBranch        *b_GenTop_pt;   //!
   TBranch        *b_GenTop_eta;   //!
   TBranch        *b_GenTop_phi;   //!
   TBranch        *b_GenTop_mass;   //!
   TBranch        *b_GenTop_charge;   //!
   TBranch        *b_GenTop_status;   //!
   TBranch        *b_naJidx;   //!
   TBranch        *b_aJidx;   //!
   TBranch        *b_nFatjetCA15trimmed;   //!
   TBranch        *b_FatjetCA15trimmed_pt;   //!
   TBranch        *b_FatjetCA15trimmed_eta;   //!
   TBranch        *b_FatjetCA15trimmed_phi;   //!
   TBranch        *b_FatjetCA15trimmed_mass;   //!
   TBranch        *b_nGenLepFromTau;   //!
   TBranch        *b_GenLepFromTau_pdgId;   //!
   TBranch        *b_GenLepFromTau_pt;   //!
   TBranch        *b_GenLepFromTau_eta;   //!
   TBranch        *b_GenLepFromTau_phi;   //!
   TBranch        *b_GenLepFromTau_mass;   //!
   TBranch        *b_GenLepFromTau_charge;   //!
   TBranch        *b_GenLepFromTau_status;   //!
   TBranch        *b_naLeptons;   //!
   TBranch        *b_aLeptons_charge;   //!
   TBranch        *b_aLeptons_tightId;   //!
   TBranch        *b_aLeptons_eleCutIdCSA14_25ns_v1;   //!
   TBranch        *b_aLeptons_eleCutIdCSA14_50ns_v1;   //!
   TBranch        *b_aLeptons_eleCutIdSpring15_25ns_v1;   //!
   TBranch        *b_aLeptons_dxy;   //!
   TBranch        *b_aLeptons_dz;   //!
   TBranch        *b_aLeptons_edxy;   //!
   TBranch        *b_aLeptons_edz;   //!
   TBranch        *b_aLeptons_ip3d;   //!
   TBranch        *b_aLeptons_sip3d;   //!
   TBranch        *b_aLeptons_convVeto;   //!
   TBranch        *b_aLeptons_lostHits;   //!
   TBranch        *b_aLeptons_relIso03;   //!
   TBranch        *b_aLeptons_relIso04;   //!
   TBranch        *b_aLeptons_miniRelIso;   //!
   TBranch        *b_aLeptons_tightCharge;   //!
   TBranch        *b_aLeptons_mcMatchId;   //!
   TBranch        *b_aLeptons_mcMatchAny;   //!
   TBranch        *b_aLeptons_mcMatchTau;   //!
   TBranch        *b_aLeptons_mcPt;   //!
   TBranch        *b_aLeptons_mediumMuonId;   //!
   TBranch        *b_aLeptons_pdgId;   //!
   TBranch        *b_aLeptons_pt;   //!
   TBranch        *b_aLeptons_eta;   //!
   TBranch        *b_aLeptons_phi;   //!
   TBranch        *b_aLeptons_mass;   //!
   TBranch        *b_aLeptons_looseIdSusy;   //!
   TBranch        *b_aLeptons_looseIdPOG;   //!
   TBranch        *b_aLeptons_chargedHadRelIso03;   //!
   TBranch        *b_aLeptons_chargedHadRelIso04;   //!
   TBranch        *b_aLeptons_eleSieie;   //!
   TBranch        *b_aLeptons_eleDEta;   //!
   TBranch        *b_aLeptons_eleDPhi;   //!
   TBranch        *b_aLeptons_eleHoE;   //!
   TBranch        *b_aLeptons_eleMissingHits;   //!
   TBranch        *b_aLeptons_eleChi2;   //!
   TBranch        *b_aLeptons_nStations;   //!
   TBranch        *b_aLeptons_trkKink;   //!
   TBranch        *b_aLeptons_caloCompatibility;   //!
   TBranch        *b_aLeptons_globalTrackChi2;   //!
   TBranch        *b_aLeptons_nChamberHits;   //!
   TBranch        *b_aLeptons_isPFMuon;   //!
   TBranch        *b_aLeptons_isGlobalMuon;   //!
   TBranch        *b_aLeptons_isTrackerMuon;   //!
   TBranch        *b_aLeptons_pixelHits;   //!
   TBranch        *b_aLeptons_trackerLayers;   //!
   TBranch        *b_aLeptons_pixelLayers;   //!
   TBranch        *b_aLeptons_mvaTTH;   //!
   TBranch        *b_aLeptons_jetOverlapIdx;   //!
   TBranch        *b_aLeptons_jetPtRatio;   //!
   TBranch        *b_aLeptons_jetBTagCSV;   //!
   TBranch        *b_aLeptons_jetDR;   //!
   TBranch        *b_aLeptons_pfRelIso03;   //!
   TBranch        *b_aLeptons_pfRelIso04;   //!
   TBranch        *b_aLeptons_etaSc;   //!
   TBranch        *b_aLeptons_eleExpMissingInnerHits;   //!
   TBranch        *b_aLeptons_eleooEmooP;   //!
   TBranch        *b_nGenNuFromTop;   //!
   TBranch        *b_GenNuFromTop_pdgId;   //!
   TBranch        *b_GenNuFromTop_pt;   //!
   TBranch        *b_GenNuFromTop_eta;   //!
   TBranch        *b_GenNuFromTop_phi;   //!
   TBranch        *b_GenNuFromTop_mass;   //!
   TBranch        *b_GenNuFromTop_charge;   //!
   TBranch        *b_GenNuFromTop_status;   //!
   TBranch        *b_nFatjetAK08ungroomed;   //!
   TBranch        *b_FatjetAK08ungroomed_pt;   //!
   TBranch        *b_FatjetAK08ungroomed_eta;   //!
   TBranch        *b_FatjetAK08ungroomed_phi;   //!
   TBranch        *b_FatjetAK08ungroomed_mass;   //!
   TBranch        *b_FatjetAK08ungroomed_tau1;   //!
   TBranch        *b_FatjetAK08ungroomed_tau2;   //!
   TBranch        *b_FatjetAK08ungroomed_tau3;   //!
   TBranch        *b_FatjetAK08ungroomed_msoftdrop;   //!
   TBranch        *b_FatjetAK08ungroomed_mpruned;   //!
   TBranch        *b_FatjetAK08ungroomed_mtrimmed;   //!
   TBranch        *b_FatjetAK08ungroomed_mfiltered;   //!
   TBranch        *b_FatjetAK08ungroomed_bbtag;   //!
   TBranch        *b_FatjetAK08ungroomed_PFLepton_ptrel;   //!
   TBranch        *b_FatjetAK08ungroomed_z_ratio;   //!
   TBranch        *b_FatjetAK08ungroomed_tau_dot;   //!
   TBranch        *b_FatjetAK08ungroomed_SV_mass_0;   //!
   TBranch        *b_FatjetAK08ungroomed_SV_EnergyRatio_0;   //!
   TBranch        *b_FatjetAK08ungroomed_SV_EnergyRatio_1;   //!
   TBranch        *b_FatjetAK08ungroomed_PFLepton_IP2D;   //!
   TBranch        *b_FatjetAK08ungroomed_tau_21;   //!
   TBranch        *b_FatjetAK08ungroomed_nSL;   //!
   TBranch        *b_FatjetAK08ungroomed_vertexNTracks;   //!
   TBranch        *b_nselLeptons;   //!
   TBranch        *b_selLeptons_charge;   //!
   TBranch        *b_selLeptons_tightId;   //!
   TBranch        *b_selLeptons_eleCutIdCSA14_25ns_v1;   //!
   TBranch        *b_selLeptons_eleCutIdCSA14_50ns_v1;   //!
   TBranch        *b_selLeptons_eleCutIdSpring15_25ns_v1;   //!
   TBranch        *b_selLeptons_dxy;   //!
   TBranch        *b_selLeptons_dz;   //!
   TBranch        *b_selLeptons_edxy;   //!
   TBranch        *b_selLeptons_edz;   //!
   TBranch        *b_selLeptons_ip3d;   //!
   TBranch        *b_selLeptons_sip3d;   //!
   TBranch        *b_selLeptons_convVeto;   //!
   TBranch        *b_selLeptons_lostHits;   //!
   TBranch        *b_selLeptons_relIso03;   //!
   TBranch        *b_selLeptons_relIso04;   //!
   TBranch        *b_selLeptons_miniRelIso;   //!
   TBranch        *b_selLeptons_tightCharge;   //!
   TBranch        *b_selLeptons_mcMatchId;   //!
   TBranch        *b_selLeptons_mcMatchAny;   //!
   TBranch        *b_selLeptons_mcMatchTau;   //!
   TBranch        *b_selLeptons_mcPt;   //!
   TBranch        *b_selLeptons_mediumMuonId;   //!
   TBranch        *b_selLeptons_pdgId;   //!
   TBranch        *b_selLeptons_pt;   //!
   TBranch        *b_selLeptons_eta;   //!
   TBranch        *b_selLeptons_phi;   //!
   TBranch        *b_selLeptons_mass;   //!
   TBranch        *b_selLeptons_looseIdSusy;   //!
   TBranch        *b_selLeptons_looseIdPOG;   //!
   TBranch        *b_selLeptons_chargedHadRelIso03;   //!
   TBranch        *b_selLeptons_chargedHadRelIso04;   //!
   TBranch        *b_selLeptons_eleSieie;   //!
   TBranch        *b_selLeptons_eleDEta;   //!
   TBranch        *b_selLeptons_eleDPhi;   //!
   TBranch        *b_selLeptons_eleHoE;   //!
   TBranch        *b_selLeptons_eleMissingHits;   //!
   TBranch        *b_selLeptons_eleChi2;   //!
   TBranch        *b_selLeptons_nStations;   //!
   TBranch        *b_selLeptons_trkKink;   //!
   TBranch        *b_selLeptons_caloCompatibility;   //!
   TBranch        *b_selLeptons_globalTrackChi2;   //!
   TBranch        *b_selLeptons_nChamberHits;   //!
   TBranch        *b_selLeptons_isPFMuon;   //!
   TBranch        *b_selLeptons_isGlobalMuon;   //!
   TBranch        *b_selLeptons_isTrackerMuon;   //!
   TBranch        *b_selLeptons_pixelHits;   //!
   TBranch        *b_selLeptons_trackerLayers;   //!
   TBranch        *b_selLeptons_pixelLayers;   //!
   TBranch        *b_selLeptons_mvaTTH;   //!
   TBranch        *b_selLeptons_jetOverlapIdx;   //!
   TBranch        *b_selLeptons_jetPtRatio;   //!
   TBranch        *b_selLeptons_jetBTagCSV;   //!
   TBranch        *b_selLeptons_jetDR;   //!
   TBranch        *b_selLeptons_pfRelIso03;   //!
   TBranch        *b_selLeptons_pfRelIso04;   //!
   TBranch        *b_selLeptons_etaSc;   //!
   TBranch        *b_selLeptons_eleExpMissingInnerHits;   //!
   TBranch        *b_selLeptons_eleooEmooP;   //!
   TBranch        *b_nGenHiggsSisters;   //!
   TBranch        *b_GenHiggsSisters_pdgId;   //!
   TBranch        *b_GenHiggsSisters_pt;   //!
   TBranch        *b_GenHiggsSisters_eta;   //!
   TBranch        *b_GenHiggsSisters_phi;   //!
   TBranch        *b_GenHiggsSisters_mass;   //!
   TBranch        *b_GenHiggsSisters_charge;   //!
   TBranch        *b_GenHiggsSisters_status;   //!
   TBranch        *b_nhjidxaddJetsdR08;   //!
   TBranch        *b_hjidxaddJetsdR08;   //!
   TBranch        *b_nsoftActivityVHJets;   //!
   TBranch        *b_softActivityVHJets_pt;   //!
   TBranch        *b_softActivityVHJets_eta;   //!
   TBranch        *b_softActivityVHJets_phi;   //!
   TBranch        *b_softActivityVHJets_mass;   //!
   TBranch        *b_nDiscardedJet;   //!
   TBranch        *b_DiscardedJet_id;   //!
   TBranch        *b_DiscardedJet_puId;   //!
   TBranch        *b_DiscardedJet_btagCSV;   //!
   TBranch        *b_DiscardedJet_btagCMVA;   //!
   TBranch        *b_DiscardedJet_rawPt;   //!
   TBranch        *b_DiscardedJet_mcPt;   //!
   TBranch        *b_DiscardedJet_mcFlavour;   //!
   TBranch        *b_DiscardedJet_mcMatchId;   //!
   TBranch        *b_DiscardedJet_corr_JECUp;   //!
   TBranch        *b_DiscardedJet_corr_JECDown;   //!
   TBranch        *b_DiscardedJet_corr;   //!
   TBranch        *b_DiscardedJet_corr_JERUp;   //!
   TBranch        *b_DiscardedJet_corr_JERDown;   //!
   TBranch        *b_DiscardedJet_corr_JER;   //!
   TBranch        *b_DiscardedJet_pt;   //!
   TBranch        *b_DiscardedJet_eta;   //!
   TBranch        *b_DiscardedJet_phi;   //!
   TBranch        *b_DiscardedJet_mass;   //!
   TBranch        *b_DiscardedJet_idxFirstTauMatch;   //!
   TBranch        *b_DiscardedJet_hadronFlavour;   //!
   TBranch        *b_DiscardedJet_btagBDT;   //!
   TBranch        *b_DiscardedJet_btagProb;   //!
   TBranch        *b_DiscardedJet_btagBProb;   //!
   TBranch        *b_DiscardedJet_btagSoftEl;   //!
   TBranch        *b_DiscardedJet_btagSoftMu;   //!
   TBranch        *b_DiscardedJet_btagnew;   //!
   TBranch        *b_DiscardedJet_btagCSVV0;   //!
   TBranch        *b_DiscardedJet_chHEF;   //!
   TBranch        *b_DiscardedJet_neHEF;   //!
   TBranch        *b_DiscardedJet_chEmEF;   //!
   TBranch        *b_DiscardedJet_neEmEF;   //!
   TBranch        *b_DiscardedJet_chMult;   //!
   TBranch        *b_DiscardedJet_leadTrackPt;   //!
   TBranch        *b_DiscardedJet_mcEta;   //!
   TBranch        *b_DiscardedJet_mcPhi;   //!
   TBranch        *b_DiscardedJet_mcM;   //!
   TBranch        *b_DiscardedJet_leptonPdgId;   //!
   TBranch        *b_DiscardedJet_leptonPt;   //!
   TBranch        *b_DiscardedJet_leptonPtRel;   //!
   TBranch        *b_DiscardedJet_leptonPtRelInv;   //!
   TBranch        *b_DiscardedJet_leptonDeltaR;   //!
   TBranch        *b_DiscardedJet_vtxMass;   //!
   TBranch        *b_DiscardedJet_vtxNtracks;   //!
   TBranch        *b_DiscardedJet_vtxPt;   //!
   TBranch        *b_DiscardedJet_vtx3DSig;   //!
   TBranch        *b_DiscardedJet_vtx3DVal;   //!
   TBranch        *b_DiscardedJet_vtxPosX;   //!
   TBranch        *b_DiscardedJet_vtxPosY;   //!
   TBranch        *b_DiscardedJet_vtxPosZ;   //!
   TBranch        *b_DiscardedJet_qgl;   //!
   TBranch        *b_DiscardedJet_ptd;   //!
   TBranch        *b_DiscardedJet_axis2;   //!
   TBranch        *b_DiscardedJet_mult;   //!
   TBranch        *b_DiscardedJet_numberOfDaughters;   //!
   TBranch        *b_DiscardedJet_btagIdx;   //!
   TBranch        *b_DiscardedJet_mcIdx;   //!
   TBranch        *b_DiscardedJet_pt_reg;   //!
   TBranch        *b_DiscardedJet_pt_regVBF;   //!
   TBranch        *b_DiscardedJet_blike_VBF;   //!
   TBranch        *b_DiscardedJet_bTagWeightJESUp;   //!
   TBranch        *b_DiscardedJet_bTagWeightJESDown;   //!
   TBranch        *b_DiscardedJet_bTagWeightLFUp;   //!
   TBranch        *b_DiscardedJet_bTagWeightLFDown;   //!
   TBranch        *b_DiscardedJet_bTagWeightHFUp;   //!
   TBranch        *b_DiscardedJet_bTagWeightHFDown;   //!
   TBranch        *b_DiscardedJet_bTagWeightStats1Up;   //!
   TBranch        *b_DiscardedJet_bTagWeightStats1Down;   //!
   TBranch        *b_DiscardedJet_bTagWeightStats2Up;   //!
   TBranch        *b_DiscardedJet_bTagWeightStats2Down;   //!
   TBranch        *b_DiscardedJet_bTagWeight;   //!
   TBranch        *b_nSubjetAK08pruned;   //!
   TBranch        *b_SubjetAK08pruned_pt;   //!
   TBranch        *b_SubjetAK08pruned_eta;   //!
   TBranch        *b_SubjetAK08pruned_phi;   //!
   TBranch        *b_SubjetAK08pruned_mass;   //!
   TBranch        *b_SubjetAK08pruned_btag;   //!
   TBranch        *b_nTauGood;   //!
   TBranch        *b_TauGood_charge;   //!
   TBranch        *b_TauGood_decayMode;   //!
   TBranch        *b_TauGood_idDecayMode;   //!
   TBranch        *b_TauGood_idDecayModeNewDMs;   //!
   TBranch        *b_TauGood_dxy;   //!
   TBranch        *b_TauGood_dz;   //!
   TBranch        *b_TauGood_idMVA;   //!
   TBranch        *b_TauGood_idMVANewDM;   //!
   TBranch        *b_TauGood_idCI3hit;   //!
   TBranch        *b_TauGood_idAntiMu;   //!
   TBranch        *b_TauGood_idAntiE;   //!
   TBranch        *b_TauGood_isoCI3hit;   //!
   TBranch        *b_TauGood_mcMatchId;   //!
   TBranch        *b_TauGood_pdgId;   //!
   TBranch        *b_TauGood_pt;   //!
   TBranch        *b_TauGood_eta;   //!
   TBranch        *b_TauGood_phi;   //!
   TBranch        *b_TauGood_mass;   //!
   TBranch        *b_TauGood_idxJetMatch;   //!
   TBranch        *b_TauGood_genMatchType;   //!
   TBranch        *b_nhJidx;   //!
   TBranch        *b_hJidx;   //!
   TBranch        *b_nGenLep;   //!
   TBranch        *b_GenLep_pdgId;   //!
   TBranch        *b_GenLep_pt;   //!
   TBranch        *b_GenLep_eta;   //!
   TBranch        *b_GenLep_phi;   //!
   TBranch        *b_GenLep_mass;   //!
   TBranch        *b_GenLep_charge;   //!
   TBranch        *b_GenLep_status;   //!
   TBranch        *b_nSubjetAK08softdrop;   //!
   TBranch        *b_SubjetAK08softdrop_pt;   //!
   TBranch        *b_SubjetAK08softdrop_eta;   //!
   TBranch        *b_SubjetAK08softdrop_phi;   //!
   TBranch        *b_SubjetAK08softdrop_mass;   //!
   TBranch        *b_SubjetAK08softdrop_btag;   //!
   TBranch        *b_nGenHadTaus;   //!
   TBranch        *b_GenHadTaus_charge;   //!
   TBranch        *b_GenHadTaus_status;   //!
   TBranch        *b_GenHadTaus_pdgId;   //!
   TBranch        *b_GenHadTaus_pt;   //!
   TBranch        *b_GenHadTaus_eta;   //!
   TBranch        *b_GenHadTaus_phi;   //!
   TBranch        *b_GenHadTaus_mass;   //!
   TBranch        *b_GenHadTaus_decayMode;   //!
   TBranch        *b_nhttCandidates;   //!
   TBranch        *b_httCandidates_pt;   //!
   TBranch        *b_httCandidates_eta;   //!
   TBranch        *b_httCandidates_phi;   //!
   TBranch        *b_httCandidates_mass;   //!
   TBranch        *b_httCandidates_fRec;   //!
   TBranch        *b_httCandidates_Ropt;   //!
   TBranch        *b_httCandidates_RoptCalc;   //!
   TBranch        *b_httCandidates_ptForRoptCalc;   //!
   TBranch        *b_httCandidates_sjW1pt;   //!
   TBranch        *b_httCandidates_sjW1eta;   //!
   TBranch        *b_httCandidates_sjW1phi;   //!
   TBranch        *b_httCandidates_sjW1mass;   //!
   TBranch        *b_httCandidates_sjW1btag;   //!
   TBranch        *b_httCandidates_sjW2pt;   //!
   TBranch        *b_httCandidates_sjW2eta;   //!
   TBranch        *b_httCandidates_sjW2phi;   //!
   TBranch        *b_httCandidates_sjW2mass;   //!
   TBranch        *b_httCandidates_sjW2btag;   //!
   TBranch        *b_httCandidates_sjNonWpt;   //!
   TBranch        *b_httCandidates_sjNonWeta;   //!
   TBranch        *b_httCandidates_sjNonWphi;   //!
   TBranch        *b_httCandidates_sjNonWmass;   //!
   TBranch        *b_httCandidates_sjNonWbtag;   //!
   TBranch        *b_nJet;   //!
   TBranch        *b_Jet_id;   //!
   TBranch        *b_Jet_puId;   //!
   TBranch        *b_Jet_btagCSV;   //!
   TBranch        *b_Jet_btagCMVA;   //!
   TBranch        *b_Jet_rawPt;   //!
   TBranch        *b_Jet_mcPt;   //!
   TBranch        *b_Jet_mcFlavour;   //!
   TBranch        *b_Jet_mcMatchId;   //!
   TBranch        *b_Jet_corr_JECUp;   //!
   TBranch        *b_Jet_corr_JECDown;   //!
   TBranch        *b_Jet_corr;   //!
   TBranch        *b_Jet_corr_JERUp;   //!
   TBranch        *b_Jet_corr_JERDown;   //!
   TBranch        *b_Jet_corr_JER;   //!
   TBranch        *b_Jet_pt;   //!
   TBranch        *b_Jet_eta;   //!
   TBranch        *b_Jet_phi;   //!
   TBranch        *b_Jet_mass;   //!
   TBranch        *b_Jet_idxFirstTauMatch;   //!
   TBranch        *b_Jet_hadronFlavour;   //!
   TBranch        *b_Jet_btagBDT;   //!
   TBranch        *b_Jet_btagProb;   //!
   TBranch        *b_Jet_btagBProb;   //!
   TBranch        *b_Jet_btagSoftEl;   //!
   TBranch        *b_Jet_btagSoftMu;   //!
   TBranch        *b_Jet_btagnew;   //!
   TBranch        *b_Jet_btagCSVV0;   //!
   TBranch        *b_Jet_chHEF;   //!
   TBranch        *b_Jet_neHEF;   //!
   TBranch        *b_Jet_chEmEF;   //!
   TBranch        *b_Jet_neEmEF;   //!
   TBranch        *b_Jet_chMult;   //!
   TBranch        *b_Jet_leadTrackPt;   //!
   TBranch        *b_Jet_mcEta;   //!
   TBranch        *b_Jet_mcPhi;   //!
   TBranch        *b_Jet_mcM;   //!
   TBranch        *b_Jet_leptonPdgId;   //!
   TBranch        *b_Jet_leptonPt;   //!
   TBranch        *b_Jet_leptonPtRel;   //!
   TBranch        *b_Jet_leptonPtRelInv;   //!
   TBranch        *b_Jet_leptonDeltaR;   //!
   TBranch        *b_Jet_vtxMass;   //!
   TBranch        *b_Jet_vtxNtracks;   //!
   TBranch        *b_Jet_vtxPt;   //!
   TBranch        *b_Jet_vtx3DSig;   //!
   TBranch        *b_Jet_vtx3DVal;   //!
   TBranch        *b_Jet_vtxPosX;   //!
   TBranch        *b_Jet_vtxPosY;   //!
   TBranch        *b_Jet_vtxPosZ;   //!
   TBranch        *b_Jet_qgl;   //!
   TBranch        *b_Jet_ptd;   //!
   TBranch        *b_Jet_axis2;   //!
   TBranch        *b_Jet_mult;   //!
   TBranch        *b_Jet_numberOfDaughters;   //!
   TBranch        *b_Jet_btagIdx;   //!
   TBranch        *b_Jet_mcIdx;   //!
   TBranch        *b_Jet_pt_reg;   //!
   TBranch        *b_Jet_pt_regVBF;   //!
   TBranch        *b_Jet_blike_VBF;   //!
   TBranch        *b_Jet_bTagWeightJESUp;   //!
   TBranch        *b_Jet_bTagWeightJESDown;   //!
   TBranch        *b_Jet_bTagWeightLFUp;   //!
   TBranch        *b_Jet_bTagWeightLFDown;   //!
   TBranch        *b_Jet_bTagWeightHFUp;   //!
   TBranch        *b_Jet_bTagWeightHFDown;   //!
   TBranch        *b_Jet_bTagWeightStats1Up;   //!
   TBranch        *b_Jet_bTagWeightStats1Down;   //!
   TBranch        *b_Jet_bTagWeightStats2Up;   //!
   TBranch        *b_Jet_bTagWeightStats2Down;   //!
   TBranch        *b_Jet_bTagWeight;   //!
   TBranch        *b_nFatjetCA15softdrop;   //!
   TBranch        *b_FatjetCA15softdrop_pt;   //!
   TBranch        *b_FatjetCA15softdrop_eta;   //!
   TBranch        *b_FatjetCA15softdrop_phi;   //!
   TBranch        *b_FatjetCA15softdrop_mass;   //!
   TBranch        *b_nvLeptons;   //!
   TBranch        *b_vLeptons_charge;   //!
   TBranch        *b_vLeptons_tightId;   //!
   TBranch        *b_vLeptons_eleCutIdCSA14_25ns_v1;   //!
   TBranch        *b_vLeptons_eleCutIdCSA14_50ns_v1;   //!
   TBranch        *b_vLeptons_eleCutIdSpring15_25ns_v1;   //!
   TBranch        *b_vLeptons_dxy;   //!
   TBranch        *b_vLeptons_dz;   //!
   TBranch        *b_vLeptons_edxy;   //!
   TBranch        *b_vLeptons_edz;   //!
   TBranch        *b_vLeptons_ip3d;   //!
   TBranch        *b_vLeptons_sip3d;   //!
   TBranch        *b_vLeptons_convVeto;   //!
   TBranch        *b_vLeptons_lostHits;   //!
   TBranch        *b_vLeptons_relIso03;   //!
   TBranch        *b_vLeptons_relIso04;   //!
   TBranch        *b_vLeptons_miniRelIso;   //!
   TBranch        *b_vLeptons_tightCharge;   //!
   TBranch        *b_vLeptons_mcMatchId;   //!
   TBranch        *b_vLeptons_mcMatchAny;   //!
   TBranch        *b_vLeptons_mcMatchTau;   //!
   TBranch        *b_vLeptons_mcPt;   //!
   TBranch        *b_vLeptons_mediumMuonId;   //!
   TBranch        *b_vLeptons_pdgId;   //!
   TBranch        *b_vLeptons_pt;   //!
   TBranch        *b_vLeptons_eta;   //!
   TBranch        *b_vLeptons_phi;   //!
   TBranch        *b_vLeptons_mass;   //!
   TBranch        *b_vLeptons_looseIdSusy;   //!
   TBranch        *b_vLeptons_looseIdPOG;   //!
   TBranch        *b_vLeptons_chargedHadRelIso03;   //!
   TBranch        *b_vLeptons_chargedHadRelIso04;   //!
   TBranch        *b_vLeptons_eleSieie;   //!
   TBranch        *b_vLeptons_eleDEta;   //!
   TBranch        *b_vLeptons_eleDPhi;   //!
   TBranch        *b_vLeptons_eleHoE;   //!
   TBranch        *b_vLeptons_eleMissingHits;   //!
   TBranch        *b_vLeptons_eleChi2;   //!
   TBranch        *b_vLeptons_nStations;   //!
   TBranch        *b_vLeptons_trkKink;   //!
   TBranch        *b_vLeptons_caloCompatibility;   //!
   TBranch        *b_vLeptons_globalTrackChi2;   //!
   TBranch        *b_vLeptons_nChamberHits;   //!
   TBranch        *b_vLeptons_isPFMuon;   //!
   TBranch        *b_vLeptons_isGlobalMuon;   //!
   TBranch        *b_vLeptons_isTrackerMuon;   //!
   TBranch        *b_vLeptons_pixelHits;   //!
   TBranch        *b_vLeptons_trackerLayers;   //!
   TBranch        *b_vLeptons_pixelLayers;   //!
   TBranch        *b_vLeptons_mvaTTH;   //!
   TBranch        *b_vLeptons_jetOverlapIdx;   //!
   TBranch        *b_vLeptons_jetPtRatio;   //!
   TBranch        *b_vLeptons_jetBTagCSV;   //!
   TBranch        *b_vLeptons_jetDR;   //!
   TBranch        *b_vLeptons_pfRelIso03;   //!
   TBranch        *b_vLeptons_pfRelIso04;   //!
   TBranch        *b_vLeptons_etaSc;   //!
   TBranch        *b_vLeptons_eleExpMissingInnerHits;   //!
   TBranch        *b_vLeptons_eleooEmooP;   //!
   TBranch        *b_npileUpVertex_z;   //!
   TBranch        *b_pileUpVertex_z;   //!
   TBranch        *b_nprimaryVertices;   //!
   TBranch        *b_primaryVertices_x;   //!
   TBranch        *b_primaryVertices_y;   //!
   TBranch        *b_primaryVertices_z;   //!
   TBranch        *b_primaryVertices_isFake;   //!
   TBranch        *b_primaryVertices_ndof;   //!
   TBranch        *b_primaryVertices_Rho;   //!
   TBranch        *b_nsoftActivityJets;   //!
   TBranch        *b_softActivityJets_pt;   //!
   TBranch        *b_softActivityJets_eta;   //!
   TBranch        *b_softActivityJets_phi;   //!
   TBranch        *b_softActivityJets_mass;   //!
   TBranch        *b_nFatjetCA15softdropz2b1;   //!
   TBranch        *b_FatjetCA15softdropz2b1_pt;   //!
   TBranch        *b_FatjetCA15softdropz2b1_eta;   //!
   TBranch        *b_FatjetCA15softdropz2b1_phi;   //!
   TBranch        *b_FatjetCA15softdropz2b1_mass;   //!
   TBranch        *b_FatjetCA15softdropz2b1_tau1;   //!
   TBranch        *b_FatjetCA15softdropz2b1_tau2;   //!
   TBranch        *b_FatjetCA15softdropz2b1_tau3;   //!
   TBranch        *b_nGenWZQuark;   //!
   TBranch        *b_GenWZQuark_pdgId;   //!
   TBranch        *b_GenWZQuark_pt;   //!
   TBranch        *b_GenWZQuark_eta;   //!
   TBranch        *b_GenWZQuark_phi;   //!
   TBranch        *b_GenWZQuark_mass;   //!
   TBranch        *b_GenWZQuark_charge;   //!
   TBranch        *b_GenWZQuark_status;   //!
   TBranch        *b_nGenBQuarkFromTop;   //!
   TBranch        *b_GenBQuarkFromTop_pdgId;   //!
   TBranch        *b_GenBQuarkFromTop_pt;   //!
   TBranch        *b_GenBQuarkFromTop_eta;   //!
   TBranch        *b_GenBQuarkFromTop_phi;   //!
   TBranch        *b_GenBQuarkFromTop_mass;   //!
   TBranch        *b_GenBQuarkFromTop_charge;   //!
   TBranch        *b_GenBQuarkFromTop_status;   //!

   treeForRegression_Wln(TTree *tree=0);
   virtual ~treeForRegression_Wln();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef treeForRegression_Wln_cxx
treeForRegression_Wln::treeForRegression_Wln(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile* f = (TFile*)gROOT->GetListOfFiles()->FindObject("/eos/uscms/store/group/lpchbb/HeppyNtuples/V14/ZH_HToBB_ZToLL_M125_13TeV_powheg_pythia8.root ");///eos/uscms/store/user/cvernier/ttbar-v14.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("/eos/uscms/store/group/lpchbb/HeppyNtuples/V14/ZH_HToBB_ZToLL_M125_13TeV_powheg_pythia8.root ");///eos/uscms/store/user/cvernier/ttbar-v14.root");
      }
      f->GetObject("tree",tree);

   }
   Init(tree);
}

treeForRegression_Wln::~treeForRegression_Wln()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t treeForRegression_Wln::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t treeForRegression_Wln::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void treeForRegression_Wln::Init(TTree *tree)
{
   // The Init() function is called zllen the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times zllen running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("run", &run, &b_run);
   fChain->SetBranchAddress("lumi", &lumi, &b_lumi);
   fChain->SetBranchAddress("evt", &evt, &b_evt);
   fChain->SetBranchAddress("isData", &isData, &b_isData);
   fChain->SetBranchAddress("xsec", &xsec, &b_xsec);
   fChain->SetBranchAddress("puWeight", &puWeight, &b_puWeight);
   fChain->SetBranchAddress("nTrueInt", &nTrueInt, &b_nTrueInt);
   fChain->SetBranchAddress("genWeight", &genWeight, &b_genWeight);
   fChain->SetBranchAddress("json", &json, &b_json);
   fChain->SetBranchAddress("nPU0", &nPU0, &b_nPU0);
   fChain->SetBranchAddress("nPVs", &nPVs, &b_nPVs);
   fChain->SetBranchAddress("Vtype", &Vtype, &b_Vtype);
   fChain->SetBranchAddress("VtypeSim", &VtypeSim, &b_VtypeSim);
   fChain->SetBranchAddress("VMt", &VMt, &b_VMt);
   fChain->SetBranchAddress("HVdPhi", &HVdPhi, &b_HVdPhi);
   fChain->SetBranchAddress("fakeMET_sumet", &fakeMET_sumet, &b_fakeMET_sumet);
   fChain->SetBranchAddress("rho", &rho, &b_rho);
   fChain->SetBranchAddress("deltaR_jj", &deltaR_jj, &b_deltaR_jj);
   fChain->SetBranchAddress("lheNj", &lheNj, &b_lheNj);
   fChain->SetBranchAddress("lheNb", &lheNb, &b_lheNb);
   fChain->SetBranchAddress("lheNc", &lheNc, &b_lheNc);
   fChain->SetBranchAddress("lheNg", &lheNg, &b_lheNg);
   fChain->SetBranchAddress("lheNl", &lheNl, &b_lheNl);
   fChain->SetBranchAddress("lheV_pt", &lheV_pt, &b_lheV_pt);
   fChain->SetBranchAddress("lheHT", &lheHT, &b_lheHT);
   fChain->SetBranchAddress("genTTHtoTauTauDecayMode", &genTTHtoTauTauDecayMode, &b_genTTHtoTauTauDecayMode);
   fChain->SetBranchAddress("ttCls", &ttCls, &b_ttCls);
   fChain->SetBranchAddress("mhtJet30", &mhtJet30, &b_mhtJet30);
   fChain->SetBranchAddress("mhtPhiJet30", &mhtPhiJet30, &b_mhtPhiJet30);
   fChain->SetBranchAddress("htJet30", &htJet30, &b_htJet30);
   fChain->SetBranchAddress("met_rawpt", &met_rawpt, &b_met_rawpt);
   fChain->SetBranchAddress("metPuppi_pt", &metPuppi_pt, &b_metPuppi_pt);
   fChain->SetBranchAddress("metPuppi_phi", &metPuppi_phi, &b_metPuppi_phi);
   fChain->SetBranchAddress("metPuppi_rawpt", &metPuppi_rawpt, &b_metPuppi_rawpt);
   fChain->SetBranchAddress("metNoHF_pt", &metNoHF_pt, &b_metNoHF_pt);
   fChain->SetBranchAddress("metNoHF_phi", &metNoHF_phi, &b_metNoHF_phi);
   fChain->SetBranchAddress("metNoHF_rawpt", &metNoHF_rawpt, &b_metNoHF_rawpt);
   fChain->SetBranchAddress("metType1p2_pt", &metType1p2_pt, &b_metType1p2_pt);
   fChain->SetBranchAddress("metNoPU_pt", &metNoPU_pt, &b_metNoPU_pt);
   fChain->SetBranchAddress("metNoPU_phi", &metNoPU_phi, &b_metNoPU_phi);
   fChain->SetBranchAddress("tkMet_pt", &tkMet_pt, &b_tkMet_pt);
   fChain->SetBranchAddress("tkMet_phi", &tkMet_phi, &b_tkMet_phi);
   fChain->SetBranchAddress("tkMetPVchs_pt", &tkMetPVchs_pt, &b_tkMetPVchs_pt);
   fChain->SetBranchAddress("tkMetPVchs_phi", &tkMetPVchs_phi, &b_tkMetPVchs_phi);
   fChain->SetBranchAddress("isrJetVH", &isrJetVH, &b_isrJetVH);
   fChain->SetBranchAddress("simPrimaryVertex_z", &simPrimaryVertex_z, &b_simPrimaryVertex_z);
   fChain->SetBranchAddress("bTagWeight_LFUp", &bTagWeight_LFUp, &b_bTagWeight_LFUp);
   fChain->SetBranchAddress("bTagWeight_Stats2Down", &bTagWeight_Stats2Down, &b_bTagWeight_Stats2Down);
   fChain->SetBranchAddress("bTagWeight_LFDown", &bTagWeight_LFDown, &b_bTagWeight_LFDown);
   fChain->SetBranchAddress("bTagWeight_HFUp", &bTagWeight_HFUp, &b_bTagWeight_HFUp);
   fChain->SetBranchAddress("bTagWeight_JESDown", &bTagWeight_JESDown, &b_bTagWeight_JESDown);
   fChain->SetBranchAddress("bTagWeight", &bTagWeight, &b_bTagWeight);
   fChain->SetBranchAddress("bTagWeight_HFDown", &bTagWeight_HFDown, &b_bTagWeight_HFDown);
   fChain->SetBranchAddress("bTagWeight_Stats2Up", &bTagWeight_Stats2Up, &b_bTagWeight_Stats2Up);
   fChain->SetBranchAddress("bTagWeight_JESUp", &bTagWeight_JESUp, &b_bTagWeight_JESUp);
   fChain->SetBranchAddress("bTagWeight_Stats1Up", &bTagWeight_Stats1Up, &b_bTagWeight_Stats1Up);
   fChain->SetBranchAddress("bTagWeight_Stats1Down", &bTagWeight_Stats1Down, &b_bTagWeight_Stats1Down);
   fChain->SetBranchAddress("Flag_EcalDeadCellTriggerPrimitiveFilter", &Flag_EcalDeadCellTriggerPrimitiveFilter, &b_Flag_EcalDeadCellTriggerPrimitiveFilter);
   fChain->SetBranchAddress("Flag_trkPOG_manystripclus53X", &Flag_trkPOG_manystripclus53X, &b_Flag_trkPOG_manystripclus53X);
   fChain->SetBranchAddress("Flag_ecalLaserCorrFilter", &Flag_ecalLaserCorrFilter, &b_Flag_ecalLaserCorrFilter);
   fChain->SetBranchAddress("Flag_trkPOG_toomanystripclus53X", &Flag_trkPOG_toomanystripclus53X, &b_Flag_trkPOG_toomanystripclus53X);
   fChain->SetBranchAddress("Flag_hcalLaserEventFilter", &Flag_hcalLaserEventFilter, &b_Flag_hcalLaserEventFilter);
   fChain->SetBranchAddress("Flag_trkPOG_logErrorTooManyClusters", &Flag_trkPOG_logErrorTooManyClusters, &b_Flag_trkPOG_logErrorTooManyClusters);
   fChain->SetBranchAddress("Flag_trkPOGFilters", &Flag_trkPOGFilters, &b_Flag_trkPOGFilters);
   fChain->SetBranchAddress("Flag_trackingFailureFilter", &Flag_trackingFailureFilter, &b_Flag_trackingFailureFilter);
   fChain->SetBranchAddress("Flag_CSCTightHaloFilter", &Flag_CSCTightHaloFilter, &b_Flag_CSCTightHaloFilter);
   fChain->SetBranchAddress("Flag_HBHENoiseFilter", &Flag_HBHENoiseFilter, &b_Flag_HBHENoiseFilter);
   fChain->SetBranchAddress("Flag_goodVertices", &Flag_goodVertices, &b_Flag_goodVertices);
   fChain->SetBranchAddress("Flag_METFilters", &Flag_METFilters, &b_Flag_METFilters);
   fChain->SetBranchAddress("Flag_eeBadScFilter", &Flag_eeBadScFilter, &b_Flag_eeBadScFilter);
   fChain->SetBranchAddress("HLT_BIT_HLT_CaloMHTNoPU90_PFMET90_PFMHT90_IDLoose_BTagCSV0p7_v", &HLT_BIT_HLT_CaloMHTNoPU90_PFMET90_PFMHT90_IDLoose_BTagCSV0p7_v, &b_HLT_BIT_HLT_CaloMHTNoPU90_PFMET90_PFMHT90_IDLoose_BTagCSV0p7_v);
   fChain->SetBranchAddress("HLT_BIT_HLT_CaloMHTNoPU90_PFMET90_PFMHT90_IDLoose_v", &HLT_BIT_HLT_CaloMHTNoPU90_PFMET90_PFMHT90_IDLoose_v, &b_HLT_BIT_HLT_CaloMHTNoPU90_PFMET90_PFMHT90_IDLoose_v);
   fChain->SetBranchAddress("HLT_BIT_HLT_PFMET90_PFMHT90_IDLoose_v", &HLT_BIT_HLT_PFMET90_PFMHT90_IDLoose_v, &b_HLT_BIT_HLT_PFMET90_PFMHT90_IDLoose_v);
   fChain->SetBranchAddress("HLT_BIT_HLT_PFMET100_PFMHT100_IDLoose_v", &HLT_BIT_HLT_PFMET100_PFMHT100_IDLoose_v, &b_HLT_BIT_HLT_PFMET100_PFMHT100_IDLoose_v);
   fChain->SetBranchAddress("HLT_BIT_HLT_PFMET110_PFMHT110_IDLoose_v", &HLT_BIT_HLT_PFMET110_PFMHT110_IDLoose_v, &b_HLT_BIT_HLT_PFMET110_PFMHT110_IDLoose_v);
   fChain->SetBranchAddress("HLT_BIT_HLT_PFMET120_PFMHT120_IDLoose_v", &HLT_BIT_HLT_PFMET120_PFMHT120_IDLoose_v, &b_HLT_BIT_HLT_PFMET120_PFMHT120_IDLoose_v);
   fChain->SetBranchAddress("HLT_BIT_HLT_PFMET170_NoiseCleaned_v", &HLT_BIT_HLT_PFMET170_NoiseCleaned_v, &b_HLT_BIT_HLT_PFMET170_NoiseCleaned_v);
   fChain->SetBranchAddress("HLT_BIT_HLT_DiCentralPFJet70_PFMET120_NoiseCleaned_v", &HLT_BIT_HLT_DiCentralPFJet70_PFMET120_NoiseCleaned_v, &b_HLT_BIT_HLT_DiCentralPFJet70_PFMET120_NoiseCleaned_v);
   fChain->SetBranchAddress("HLT_BIT_HLT_PFHT350_PFMET120_NoiseCleaned_v", &HLT_BIT_HLT_PFHT350_PFMET120_NoiseCleaned_v, &b_HLT_BIT_HLT_PFHT350_PFMET120_NoiseCleaned_v);
   fChain->SetBranchAddress("HLT_ZnnHbbAll", &HLT_ZnnHbbAll, &b_HLT_ZnnHbbAll);
   fChain->SetBranchAddress("HLT_BIT_HLT_QuadPFJet_DoubleBTagCSV_VBF_Mqq200_v", &HLT_BIT_HLT_QuadPFJet_DoubleBTagCSV_VBF_Mqq200_v, &b_HLT_BIT_HLT_QuadPFJet_DoubleBTagCSV_VBF_Mqq200_v);
   fChain->SetBranchAddress("HLT_BIT_HLT_QuadPFJet_SingleBTagCSV_VBF_Mqq460_v", &HLT_BIT_HLT_QuadPFJet_SingleBTagCSV_VBF_Mqq460_v, &b_HLT_BIT_HLT_QuadPFJet_SingleBTagCSV_VBF_Mqq460_v);
   fChain->SetBranchAddress("HLT_VBFHbbLowLumi", &HLT_VBFHbbLowLumi, &b_HLT_VBFHbbLowLumi);
   fChain->SetBranchAddress("HLT_BIT_HLT_PFHT750_4Jet_v", &HLT_BIT_HLT_PFHT750_4Jet_v, &b_HLT_BIT_HLT_PFHT750_4Jet_v);
   fChain->SetBranchAddress("HLT_BIT_HLT_PFHT900_v", &HLT_BIT_HLT_PFHT900_v, &b_HLT_BIT_HLT_PFHT900_v);
   fChain->SetBranchAddress("HLT_BIT_HLT_PFJet40_v", &HLT_BIT_HLT_PFJet40_v, &b_HLT_BIT_HLT_PFJet40_v);
   fChain->SetBranchAddress("HLT_BIT_HLT_PFJet60_v", &HLT_BIT_HLT_PFJet60_v, &b_HLT_BIT_HLT_PFJet60_v);
   fChain->SetBranchAddress("HLT_BIT_HLT_PFJet80_v", &HLT_BIT_HLT_PFJet80_v, &b_HLT_BIT_HLT_PFJet80_v);
   fChain->SetBranchAddress("HLT_BIT_HLT_PFJet140_v", &HLT_BIT_HLT_PFJet140_v, &b_HLT_BIT_HLT_PFJet140_v);
   fChain->SetBranchAddress("HLT_BIT_HLT_PFJet200_v", &HLT_BIT_HLT_PFJet200_v, &b_HLT_BIT_HLT_PFJet200_v);
   fChain->SetBranchAddress("HLT_BIT_HLT_PFJet260_v", &HLT_BIT_HLT_PFJet260_v, &b_HLT_BIT_HLT_PFJet260_v);
   fChain->SetBranchAddress("HLT_BIT_HLT_PFJet320_v", &HLT_BIT_HLT_PFJet320_v, &b_HLT_BIT_HLT_PFJet320_v);
   fChain->SetBranchAddress("HLT_BIT_HLT_PFJet400_v", &HLT_BIT_HLT_PFJet400_v, &b_HLT_BIT_HLT_PFJet400_v);
   fChain->SetBranchAddress("HLT_BIT_HLT_PFJet450_v", &HLT_BIT_HLT_PFJet450_v, &b_HLT_BIT_HLT_PFJet450_v);
   fChain->SetBranchAddress("HLT_hadronic", &HLT_hadronic, &b_HLT_hadronic);
   fChain->SetBranchAddress("HLT_BIT_HLT_PFHT400_SixJet30_BTagCSV0p5_2PFBTagCSV_v", &HLT_BIT_HLT_PFHT400_SixJet30_BTagCSV0p5_2PFBTagCSV_v, &b_HLT_BIT_HLT_PFHT400_SixJet30_BTagCSV0p5_2PFBTagCSV_v);
   fChain->SetBranchAddress("HLT_BIT_HLT_PFHT450_SixJet40_PFBTagCSV_v", &HLT_BIT_HLT_PFHT450_SixJet40_PFBTagCSV_v, &b_HLT_BIT_HLT_PFHT450_SixJet40_PFBTagCSV_v);
   fChain->SetBranchAddress("HLT_ttHhardonicLowLumi", &HLT_ttHhardonicLowLumi, &b_HLT_ttHhardonicLowLumi);
   fChain->SetBranchAddress("HLT_BIT_HLT_QuadJet45_TripleCSV0p5_v", &HLT_BIT_HLT_QuadJet45_TripleCSV0p5_v, &b_HLT_BIT_HLT_QuadJet45_TripleCSV0p5_v);
   fChain->SetBranchAddress("HLT_BIT_HLT_QuadJet45_DoubleCSV0p5_v", &HLT_BIT_HLT_QuadJet45_DoubleCSV0p5_v, &b_HLT_BIT_HLT_QuadJet45_DoubleCSV0p5_v);
   fChain->SetBranchAddress("HLT_BIT_HLT_DoubleJet90_Double30_TripleCSV0p5_v", &HLT_BIT_HLT_DoubleJet90_Double30_TripleCSV0p5_v, &b_HLT_BIT_HLT_DoubleJet90_Double30_TripleCSV0p5_v);
   fChain->SetBranchAddress("HLT_BIT_HLT_DoubleJet90_Double30_DoubleCSV0p5_v", &HLT_BIT_HLT_DoubleJet90_Double30_DoubleCSV0p5_v, &b_HLT_BIT_HLT_DoubleJet90_Double30_DoubleCSV0p5_v);
   fChain->SetBranchAddress("HLT_HH4bAll", &HLT_HH4bAll, &b_HLT_HH4bAll);
   fChain->SetBranchAddress("HLT_BIT_HLT_LooseIsoPFTau50_Trk30_eta2p1_MET80_v", &HLT_BIT_HLT_LooseIsoPFTau50_Trk30_eta2p1_MET80_v, &b_HLT_BIT_HLT_LooseIsoPFTau50_Trk30_eta2p1_MET80_v);
   fChain->SetBranchAddress("HLT_WtaunHbbLowLumi", &HLT_WtaunHbbLowLumi, &b_HLT_WtaunHbbLowLumi);
   fChain->SetBranchAddress("HLT_BIT_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_v", &HLT_BIT_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_v, &b_HLT_BIT_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_v);
   fChain->SetBranchAddress("HLT_BIT_HLT_DoubleEle24_22_eta2p1_WP75_Gsf_v", &HLT_BIT_HLT_DoubleEle24_22_eta2p1_WP75_Gsf_v, &b_HLT_BIT_HLT_DoubleEle24_22_eta2p1_WP75_Gsf_v);
   fChain->SetBranchAddress("HLT_ZeeHbbHighLumi", &HLT_ZeeHbbHighLumi, &b_HLT_ZeeHbbHighLumi);
   fChain->SetBranchAddress("HLT_HH4bHighLumi", &HLT_HH4bHighLumi, &b_HLT_HH4bHighLumi);
   fChain->SetBranchAddress("HLT_ZnnHbbHighLumi", &HLT_ZnnHbbHighLumi, &b_HLT_ZnnHbbHighLumi);
   fChain->SetBranchAddress("HLT_BIT_HLT_QuadPFJet_DoubleBTagCSV_VBF_Mqq240_v", &HLT_BIT_HLT_QuadPFJet_DoubleBTagCSV_VBF_Mqq240_v, &b_HLT_BIT_HLT_QuadPFJet_DoubleBTagCSV_VBF_Mqq240_v);
   fChain->SetBranchAddress("HLT_BIT_HLT_QuadPFJet_SingleBTagCSV_VBF_Mqq500_v", &HLT_BIT_HLT_QuadPFJet_SingleBTagCSV_VBF_Mqq500_v, &b_HLT_BIT_HLT_QuadPFJet_SingleBTagCSV_VBF_Mqq500_v);
   fChain->SetBranchAddress("HLT_BIT_HLT_QuadPFJet_VBF_v", &HLT_BIT_HLT_QuadPFJet_VBF_v, &b_HLT_BIT_HLT_QuadPFJet_VBF_v);
   fChain->SetBranchAddress("HLT_BIT_HLT_L1_TripleJet_VBF_v", &HLT_BIT_HLT_L1_TripleJet_VBF_v, &b_HLT_BIT_HLT_L1_TripleJet_VBF_v);
   fChain->SetBranchAddress("HLT_BIT_HLT_PFHT650_WideJetMJJ900DEtaJJ1p5_v", &HLT_BIT_HLT_PFHT650_WideJetMJJ900DEtaJJ1p5_v, &b_HLT_BIT_HLT_PFHT650_WideJetMJJ900DEtaJJ1p5_v);
   fChain->SetBranchAddress("HLT_BIT_HLT_PFHT650_WideJetMJJ950DEtaJJ1p5_v", &HLT_BIT_HLT_PFHT650_WideJetMJJ950DEtaJJ1p5_v, &b_HLT_BIT_HLT_PFHT650_WideJetMJJ950DEtaJJ1p5_v);
   fChain->SetBranchAddress("HLT_VBFHbbAll", &HLT_VBFHbbAll, &b_HLT_VBFHbbAll);
   fChain->SetBranchAddress("HLT_BIT_HLT_Ele27_eta2p1_WP75_Gsf_v", &HLT_BIT_HLT_Ele27_eta2p1_WP75_Gsf_v, &b_HLT_BIT_HLT_Ele27_eta2p1_WP75_Gsf_v);
   fChain->SetBranchAddress("HLT_BIT_HLT_Ele27_eta2p1_WP85_Gsf_HT200_v", &HLT_BIT_HLT_Ele27_eta2p1_WP85_Gsf_HT200_v, &b_HLT_BIT_HLT_Ele27_eta2p1_WP85_Gsf_HT200_v);
   fChain->SetBranchAddress("HLT_WenHbbLowLumi", &HLT_WenHbbLowLumi, &b_HLT_WenHbbLowLumi);
   fChain->SetBranchAddress("HLT_BIT_HLT_Ele32_eta2p1_WP75_Gsf_v", &HLT_BIT_HLT_Ele32_eta2p1_WP75_Gsf_v, &b_HLT_BIT_HLT_Ele32_eta2p1_WP75_Gsf_v);
   fChain->SetBranchAddress("HLT_BIT_HLT_Ele32_eta2p1_WP75_Gsf_CentralPFJet30_BTagCSV07_v", &HLT_BIT_HLT_Ele32_eta2p1_WP75_Gsf_CentralPFJet30_BTagCSV07_v, &b_HLT_BIT_HLT_Ele32_eta2p1_WP75_Gsf_CentralPFJet30_BTagCSV07_v);
   fChain->SetBranchAddress("HLT_BIT_HLT_Ele27_WP85_Gsf_v", &HLT_BIT_HLT_Ele27_WP85_Gsf_v, &b_HLT_BIT_HLT_Ele27_WP85_Gsf_v);
   fChain->SetBranchAddress("HLT_BIT_HLT_Ele27_eta2p1_WP75_Gsf_CentralPFJet30_BTagCSV07_v", &HLT_BIT_HLT_Ele27_eta2p1_WP75_Gsf_CentralPFJet30_BTagCSV07_v, &b_HLT_BIT_HLT_Ele27_eta2p1_WP75_Gsf_CentralPFJet30_BTagCSV07_v);
   fChain->SetBranchAddress("HLT_BIT_HLT_Ele105_CaloIdVT_GsfTrkIdT_v", &HLT_BIT_HLT_Ele105_CaloIdVT_GsfTrkIdT_v, &b_HLT_BIT_HLT_Ele105_CaloIdVT_GsfTrkIdT_v);
   fChain->SetBranchAddress("HLT_BIT_HLT_Ele45_CaloIdVT_GsfTrkIdT_PFJet200_PFJet50_v", &HLT_BIT_HLT_Ele45_CaloIdVT_GsfTrkIdT_PFJet200_PFJet50_v, &b_HLT_BIT_HLT_Ele45_CaloIdVT_GsfTrkIdT_PFJet200_PFJet50_v);
   fChain->SetBranchAddress("HLT_WenHbbAll", &HLT_WenHbbAll, &b_HLT_WenHbbAll);
   fChain->SetBranchAddress("HLT_BIT_HLT_Ele17_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_v", &HLT_BIT_HLT_Ele17_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_v, &b_HLT_BIT_HLT_Ele17_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_v);
   fChain->SetBranchAddress("HLT_ZeeHbbLowLumi", &HLT_ZeeHbbLowLumi, &b_HLT_ZeeHbbLowLumi);
   fChain->SetBranchAddress("HLT_BIT_HLT_IsoMu24_eta2p1_v", &HLT_BIT_HLT_IsoMu24_eta2p1_v, &b_HLT_BIT_HLT_IsoMu24_eta2p1_v);
   fChain->SetBranchAddress("HLT_BIT_HLT_IsoMu24_eta2p1_CentralPFJet30_BTagCSV07_v", &HLT_BIT_HLT_IsoMu24_eta2p1_CentralPFJet30_BTagCSV07_v, &b_HLT_BIT_HLT_IsoMu24_eta2p1_CentralPFJet30_BTagCSV07_v);
   fChain->SetBranchAddress("HLT_BIT_HLT_Mu24_eta2p1_v", &HLT_BIT_HLT_Mu24_eta2p1_v, &b_HLT_BIT_HLT_Mu24_eta2p1_v);
   fChain->SetBranchAddress("HLT_BIT_HLT_TkMu24_eta2p1_v", &HLT_BIT_HLT_TkMu24_eta2p1_v, &b_HLT_BIT_HLT_TkMu24_eta2p1_v);
   fChain->SetBranchAddress("HLT_BIT_HLT_Mu24_v", &HLT_BIT_HLT_Mu24_v, &b_HLT_BIT_HLT_Mu24_v);
   fChain->SetBranchAddress("HLT_BIT_HLT_IsoMu27_v", &HLT_BIT_HLT_IsoMu27_v, &b_HLT_BIT_HLT_IsoMu27_v);
   fChain->SetBranchAddress("HLT_BIT_HLT_IsoTkMu27_v", &HLT_BIT_HLT_IsoTkMu27_v, &b_HLT_BIT_HLT_IsoTkMu27_v);
   fChain->SetBranchAddress("HLT_BIT_HLT_TkMu27_v", &HLT_BIT_HLT_TkMu27_v, &b_HLT_BIT_HLT_TkMu27_v);
   fChain->SetBranchAddress("HLT_BIT_HLT_Mu27_v", &HLT_BIT_HLT_Mu27_v, &b_HLT_BIT_HLT_Mu27_v);
   fChain->SetBranchAddress("HLT_BIT_HLT_IsoMu20_eta2p1_v", &HLT_BIT_HLT_IsoMu20_eta2p1_v, &b_HLT_BIT_HLT_IsoMu20_eta2p1_v);
   fChain->SetBranchAddress("HLT_BIT_HLT_IsoMu20_eta2p1_CentralPFJet30_BTagCSV07_v", &HLT_BIT_HLT_IsoMu20_eta2p1_CentralPFJet30_BTagCSV07_v, &b_HLT_BIT_HLT_IsoMu20_eta2p1_CentralPFJet30_BTagCSV07_v);
   fChain->SetBranchAddress("HLT_BIT_HLT_Mu20_v", &HLT_BIT_HLT_Mu20_v, &b_HLT_BIT_HLT_Mu20_v);
   fChain->SetBranchAddress("HLT_BIT_HLT_TkMu20_v", &HLT_BIT_HLT_TkMu20_v, &b_HLT_BIT_HLT_TkMu20_v);
   fChain->SetBranchAddress("HLT_BIT_HLT_IsoMu20_v", &HLT_BIT_HLT_IsoMu20_v, &b_HLT_BIT_HLT_IsoMu20_v);
   fChain->SetBranchAddress("HLT_BIT_HLT_IsoTkMu20_v", &HLT_BIT_HLT_IsoTkMu20_v, &b_HLT_BIT_HLT_IsoTkMu20_v);
   fChain->SetBranchAddress("HLT_BIT_HLT_Mu40_eta2p1_PFJet200_PFJet50_v", &HLT_BIT_HLT_Mu40_eta2p1_PFJet200_PFJet50_v, &b_HLT_BIT_HLT_Mu40_eta2p1_PFJet200_PFJet50_v);
   fChain->SetBranchAddress("HLT_BIT_HLT_IsoMu16_eta2p1_CaloMET30_v", &HLT_BIT_HLT_IsoMu16_eta2p1_CaloMET30_v, &b_HLT_BIT_HLT_IsoMu16_eta2p1_CaloMET30_v);
   fChain->SetBranchAddress("HLT_BIT_HLT_Mu16_eta2p1_CaloMET30_v", &HLT_BIT_HLT_Mu16_eta2p1_CaloMET30_v, &b_HLT_BIT_HLT_Mu16_eta2p1_CaloMET30_v);
   fChain->SetBranchAddress("HLT_BIT_HLT_PFMET120_NoiseCleaned_Mu5_v", &HLT_BIT_HLT_PFMET120_NoiseCleaned_Mu5_v, &b_HLT_BIT_HLT_PFMET120_NoiseCleaned_Mu5_v);
   fChain->SetBranchAddress("HLT_BIT_HLT_MonoCentralPFJet80_PFMETNoMu120_NoiseCleaned_PFMHTNoMu120_IDTight_v", &HLT_BIT_HLT_MonoCentralPFJet80_PFMETNoMu120_NoiseCleaned_PFMHTNoMu120_IDTight_v, &b_HLT_BIT_HLT_MonoCentralPFJet80_PFMETNoMu120_NoiseCleaned_PFMHTNoMu120_IDTight_v);
   fChain->SetBranchAddress("HLT_BIT_HLT_MonoCentralPFJet80_PFMETNoMu90_NoiseCleaned_PFMHTNoMu90_IDTight_v", &HLT_BIT_HLT_MonoCentralPFJet80_PFMETNoMu90_NoiseCleaned_PFMHTNoMu90_IDTight_v, &b_HLT_BIT_HLT_MonoCentralPFJet80_PFMETNoMu90_NoiseCleaned_PFMHTNoMu90_IDTight_v);
   fChain->SetBranchAddress("HLT_BIT_HLT_PFMETNoMu120_NoiseCleaned_PFMHTNoMu120_IDTight_v", &HLT_BIT_HLT_PFMETNoMu120_NoiseCleaned_PFMHTNoMu120_IDTight_v, &b_HLT_BIT_HLT_PFMETNoMu120_NoiseCleaned_PFMHTNoMu120_IDTight_v);
   fChain->SetBranchAddress("HLT_BIT_HLT_PFMETNoMu90_NoiseCleaned_PFMHTNoMu90_IDTight_v", &HLT_BIT_HLT_PFMETNoMu90_NoiseCleaned_PFMHTNoMu90_IDTight_v, &b_HLT_BIT_HLT_PFMETNoMu90_NoiseCleaned_PFMHTNoMu90_IDTight_v);
   fChain->SetBranchAddress("HLT_WmnHbbAll", &HLT_WmnHbbAll, &b_HLT_WmnHbbAll);
   fChain->SetBranchAddress("HLT_BIT_HLT_LooseIsoPFTau50_Trk30_eta2p1_MET120_v", &HLT_BIT_HLT_LooseIsoPFTau50_Trk30_eta2p1_MET120_v, &b_HLT_BIT_HLT_LooseIsoPFTau50_Trk30_eta2p1_MET120_v);
   fChain->SetBranchAddress("HLT_BIT_HLT_LooseIsoPFTau50_Trk30_eta2p1_v", &HLT_BIT_HLT_LooseIsoPFTau50_Trk30_eta2p1_v, &b_HLT_BIT_HLT_LooseIsoPFTau50_Trk30_eta2p1_v);
   fChain->SetBranchAddress("HLT_WtaunHbbAll", &HLT_WtaunHbbAll, &b_HLT_WtaunHbbAll);
   fChain->SetBranchAddress("HLT_BIT_HLT_PFHT450_SixJet40_v", &HLT_BIT_HLT_PFHT450_SixJet40_v, &b_HLT_BIT_HLT_PFHT450_SixJet40_v);
   fChain->SetBranchAddress("HLT_BIT_HLT_PFHT400_SixJet30_v", &HLT_BIT_HLT_PFHT400_SixJet30_v, &b_HLT_BIT_HLT_PFHT400_SixJet30_v);
   fChain->SetBranchAddress("HLT_ttHhardonicAll", &HLT_ttHhardonicAll, &b_HLT_ttHhardonicAll);
   fChain->SetBranchAddress("HLT_BIT_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_v", &HLT_BIT_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_v, &b_HLT_BIT_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_v);
   fChain->SetBranchAddress("HLT_BIT_HLT_Ele23_CaloIdL_TrackIdL_IsoVL_v", &HLT_BIT_HLT_Ele23_CaloIdL_TrackIdL_IsoVL_v, &b_HLT_BIT_HLT_Ele23_CaloIdL_TrackIdL_IsoVL_v);
   fChain->SetBranchAddress("HLT_BIT_HLT_Ele17_Ele12_CaloIdL_TrackIdL_IsoVL_v", &HLT_BIT_HLT_Ele17_Ele12_CaloIdL_TrackIdL_IsoVL_v, &b_HLT_BIT_HLT_Ele17_Ele12_CaloIdL_TrackIdL_IsoVL_v);
   fChain->SetBranchAddress("HLT_BIT_HLT_Ele12_CaloIdL_TrackIdL_IsoVL_v", &HLT_BIT_HLT_Ele12_CaloIdL_TrackIdL_IsoVL_v, &b_HLT_BIT_HLT_Ele12_CaloIdL_TrackIdL_IsoVL_v);
   fChain->SetBranchAddress("HLT_ZeeHbbAll", &HLT_ZeeHbbAll, &b_HLT_ZeeHbbAll);
   fChain->SetBranchAddress("HLT_WmnHbbLowLumi", &HLT_WmnHbbLowLumi, &b_HLT_WmnHbbLowLumi);
   fChain->SetBranchAddress("HLT_BIT_HLT_Mu17_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_v", &HLT_BIT_HLT_Mu17_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_v, &b_HLT_BIT_HLT_Mu17_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_v);
   fChain->SetBranchAddress("HLT_BIT_HLT_Mu8_TrkIsoVVL_Ele17_CaloIdL_TrackIdL_IsoVL_v", &HLT_BIT_HLT_Mu8_TrkIsoVVL_Ele17_CaloIdL_TrackIdL_IsoVL_v, &b_HLT_BIT_HLT_Mu8_TrkIsoVVL_Ele17_CaloIdL_TrackIdL_IsoVL_v);
   fChain->SetBranchAddress("HLT_ttHleptonic", &HLT_ttHleptonic, &b_HLT_ttHleptonic);
   fChain->SetBranchAddress("HLT_VBFHbbHighLumi", &HLT_VBFHbbHighLumi, &b_HLT_VBFHbbHighLumi);
   fChain->SetBranchAddress("HLT_BIT_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_v", &HLT_BIT_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_v, &b_HLT_BIT_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_v);
   fChain->SetBranchAddress("HLT_BIT_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_v", &HLT_BIT_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_v, &b_HLT_BIT_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_v);
   fChain->SetBranchAddress("HLT_ZmmHbbLowLumi", &HLT_ZmmHbbLowLumi, &b_HLT_ZmmHbbLowLumi);
   fChain->SetBranchAddress("HLT_WmnHbbHighLumi", &HLT_WmnHbbHighLumi, &b_HLT_WmnHbbHighLumi);
   fChain->SetBranchAddress("HLT_BIT_HLT_Mu17_TkMu8_DZ_v", &HLT_BIT_HLT_Mu17_TkMu8_DZ_v, &b_HLT_BIT_HLT_Mu17_TkMu8_DZ_v);
   fChain->SetBranchAddress("HLT_BIT_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_v", &HLT_BIT_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_v, &b_HLT_BIT_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_v);
   fChain->SetBranchAddress("HLT_BIT_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_v", &HLT_BIT_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_v, &b_HLT_BIT_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_v);
   fChain->SetBranchAddress("HLT_BIT_HLT_DoubleIsoMu17_eta2p1_v", &HLT_BIT_HLT_DoubleIsoMu17_eta2p1_v, &b_HLT_BIT_HLT_DoubleIsoMu17_eta2p1_v);
   fChain->SetBranchAddress("HLT_ZmmHbbAll", &HLT_ZmmHbbAll, &b_HLT_ZmmHbbAll);
   fChain->SetBranchAddress("HLT_ZnnHbbLowLumi", &HLT_ZnnHbbLowLumi, &b_HLT_ZnnHbbLowLumi);
   fChain->SetBranchAddress("HLT_WenHbbHighLumi", &HLT_WenHbbHighLumi, &b_HLT_WenHbbHighLumi);
   fChain->SetBranchAddress("HLT_HH4bLowLumi", &HLT_HH4bLowLumi, &b_HLT_HH4bLowLumi);
   fChain->SetBranchAddress("HLT_ZmmHbbHighLumi", &HLT_ZmmHbbHighLumi, &b_HLT_ZmmHbbHighLumi);
   fChain->SetBranchAddress("HLT_ttHhardonicHighLumi", &HLT_ttHhardonicHighLumi, &b_HLT_ttHhardonicHighLumi);
   fChain->SetBranchAddress("HLT_WtaunHbbHighLumi", &HLT_WtaunHbbHighLumi, &b_HLT_WtaunHbbHighLumi);
   fChain->SetBranchAddress("V_pt", &V_pt, &b_V_pt);
   fChain->SetBranchAddress("V_eta", &V_eta, &b_V_eta);
   fChain->SetBranchAddress("V_phi", &V_phi, &b_V_phi);
   fChain->SetBranchAddress("V_mass", &V_mass, &b_V_mass);
   fChain->SetBranchAddress("HaddJetsdR08_pt", &HaddJetsdR08_pt, &b_HaddJetsdR08_pt);
   fChain->SetBranchAddress("HaddJetsdR08_eta", &HaddJetsdR08_eta, &b_HaddJetsdR08_eta);
   fChain->SetBranchAddress("HaddJetsdR08_phi", &HaddJetsdR08_phi, &b_HaddJetsdR08_phi);
   fChain->SetBranchAddress("HaddJetsdR08_mass", &HaddJetsdR08_mass, &b_HaddJetsdR08_mass);
   fChain->SetBranchAddress("H_pt", &H_pt, &b_H_pt);
   fChain->SetBranchAddress("H_eta", &H_eta, &b_H_eta);
   fChain->SetBranchAddress("H_phi", &H_phi, &b_H_phi);
   fChain->SetBranchAddress("H_mass", &H_mass, &b_H_mass);
   fChain->SetBranchAddress("softActivityVH_njets2", &softActivityVH_njets2, &b_softActivityVH_njets2);
   fChain->SetBranchAddress("softActivityVH_njets5", &softActivityVH_njets5, &b_softActivityVH_njets5);
   fChain->SetBranchAddress("softActivityVH_njets10", &softActivityVH_njets10, &b_softActivityVH_njets10);
   fChain->SetBranchAddress("softActivityVH_HT", &softActivityVH_HT, &b_softActivityVH_HT);
   fChain->SetBranchAddress("met_shifted_JetResUp_pt", &met_shifted_JetResUp_pt, &b_met_shifted_JetResUp_pt);
   fChain->SetBranchAddress("met_shifted_JetResUp_phi", &met_shifted_JetResUp_phi, &b_met_shifted_JetResUp_phi);
   fChain->SetBranchAddress("met_shifted_JetResUp_sumEt", &met_shifted_JetResUp_sumEt, &b_met_shifted_JetResUp_sumEt);
   fChain->SetBranchAddress("met_pt", &met_pt, &b_met_pt);
   fChain->SetBranchAddress("met_eta", &met_eta, &b_met_eta);
   fChain->SetBranchAddress("met_phi", &met_phi, &b_met_phi);
   fChain->SetBranchAddress("met_mass", &met_mass, &b_met_mass);
   fChain->SetBranchAddress("met_sumEt", &met_sumEt, &b_met_sumEt);
   fChain->SetBranchAddress("met_genPt", &met_genPt, &b_met_genPt);
   fChain->SetBranchAddress("met_genPhi", &met_genPhi, &b_met_genPhi);
   fChain->SetBranchAddress("met_genEta", &met_genEta, &b_met_genEta);
   fChain->SetBranchAddress("H_reg_pt", &H_reg_pt, &b_H_reg_pt);
   fChain->SetBranchAddress("H_reg_eta", &H_reg_eta, &b_H_reg_eta);
   fChain->SetBranchAddress("H_reg_phi", &H_reg_phi, &b_H_reg_phi);
   fChain->SetBranchAddress("H_reg_mass", &H_reg_mass, &b_H_reg_mass);
   fChain->SetBranchAddress("met_shifted_JetEnDown_pt", &met_shifted_JetEnDown_pt, &b_met_shifted_JetEnDown_pt);
   fChain->SetBranchAddress("met_shifted_JetEnDown_phi", &met_shifted_JetEnDown_phi, &b_met_shifted_JetEnDown_phi);
   fChain->SetBranchAddress("met_shifted_JetEnDown_sumEt", &met_shifted_JetEnDown_sumEt, &b_met_shifted_JetEnDown_sumEt);
   fChain->SetBranchAddress("HCSV_pt", &HCSV_pt, &b_HCSV_pt);
   fChain->SetBranchAddress("HCSV_eta", &HCSV_eta, &b_HCSV_eta);
   fChain->SetBranchAddress("HCSV_phi", &HCSV_phi, &b_HCSV_phi);
   fChain->SetBranchAddress("HCSV_mass", &HCSV_mass, &b_HCSV_mass);
   fChain->SetBranchAddress("met_shifted_MuonEnDown_pt", &met_shifted_MuonEnDown_pt, &b_met_shifted_MuonEnDown_pt);
   fChain->SetBranchAddress("met_shifted_MuonEnDown_phi", &met_shifted_MuonEnDown_phi, &b_met_shifted_MuonEnDown_phi);
   fChain->SetBranchAddress("met_shifted_MuonEnDown_sumEt", &met_shifted_MuonEnDown_sumEt, &b_met_shifted_MuonEnDown_sumEt);
   fChain->SetBranchAddress("met_shifted_ElectronEnUp_pt", &met_shifted_ElectronEnUp_pt, &b_met_shifted_ElectronEnUp_pt);
   fChain->SetBranchAddress("met_shifted_ElectronEnUp_phi", &met_shifted_ElectronEnUp_phi, &b_met_shifted_ElectronEnUp_phi);
   fChain->SetBranchAddress("met_shifted_ElectronEnUp_sumEt", &met_shifted_ElectronEnUp_sumEt, &b_met_shifted_ElectronEnUp_sumEt);
   fChain->SetBranchAddress("met_shifted_ElectronEnDown_pt", &met_shifted_ElectronEnDown_pt, &b_met_shifted_ElectronEnDown_pt);
   fChain->SetBranchAddress("met_shifted_ElectronEnDown_phi", &met_shifted_ElectronEnDown_phi, &b_met_shifted_ElectronEnDown_phi);
   fChain->SetBranchAddress("met_shifted_ElectronEnDown_sumEt", &met_shifted_ElectronEnDown_sumEt, &b_met_shifted_ElectronEnDown_sumEt);
   fChain->SetBranchAddress("fakeMET_pt", &fakeMET_pt, &b_fakeMET_pt);
   fChain->SetBranchAddress("fakeMET_eta", &fakeMET_eta, &b_fakeMET_eta);
   fChain->SetBranchAddress("fakeMET_phi", &fakeMET_phi, &b_fakeMET_phi);
   fChain->SetBranchAddress("fakeMET_mass", &fakeMET_mass, &b_fakeMET_mass);
   fChain->SetBranchAddress("met_shifted_TauEnDown_pt", &met_shifted_TauEnDown_pt, &b_met_shifted_TauEnDown_pt);
   fChain->SetBranchAddress("met_shifted_TauEnDown_phi", &met_shifted_TauEnDown_phi, &b_met_shifted_TauEnDown_phi);
   fChain->SetBranchAddress("met_shifted_TauEnDown_sumEt", &met_shifted_TauEnDown_sumEt, &b_met_shifted_TauEnDown_sumEt);
   fChain->SetBranchAddress("met_shifted_TauEnUp_pt", &met_shifted_TauEnUp_pt, &b_met_shifted_TauEnUp_pt);
   fChain->SetBranchAddress("met_shifted_TauEnUp_phi", &met_shifted_TauEnUp_phi, &b_met_shifted_TauEnUp_phi);
   fChain->SetBranchAddress("met_shifted_TauEnUp_sumEt", &met_shifted_TauEnUp_sumEt, &b_met_shifted_TauEnUp_sumEt);
   fChain->SetBranchAddress("HCSV_reg_pt", &HCSV_reg_pt, &b_HCSV_reg_pt);
   fChain->SetBranchAddress("HCSV_reg_eta", &HCSV_reg_eta, &b_HCSV_reg_eta);
   fChain->SetBranchAddress("HCSV_reg_phi", &HCSV_reg_phi, &b_HCSV_reg_phi);
   fChain->SetBranchAddress("HCSV_reg_mass", &HCSV_reg_mass, &b_HCSV_reg_mass);
   fChain->SetBranchAddress("met_shifted_UnclusteredEnUp_pt", &met_shifted_UnclusteredEnUp_pt, &b_met_shifted_UnclusteredEnUp_pt);
   fChain->SetBranchAddress("met_shifted_UnclusteredEnUp_phi", &met_shifted_UnclusteredEnUp_phi, &b_met_shifted_UnclusteredEnUp_phi);
   fChain->SetBranchAddress("met_shifted_UnclusteredEnUp_sumEt", &met_shifted_UnclusteredEnUp_sumEt, &b_met_shifted_UnclusteredEnUp_sumEt);
   fChain->SetBranchAddress("met_shifted_UnclusteredEnDown_pt", &met_shifted_UnclusteredEnDown_pt, &b_met_shifted_UnclusteredEnDown_pt);
   fChain->SetBranchAddress("met_shifted_UnclusteredEnDown_phi", &met_shifted_UnclusteredEnDown_phi, &b_met_shifted_UnclusteredEnDown_phi);
   fChain->SetBranchAddress("met_shifted_UnclusteredEnDown_sumEt", &met_shifted_UnclusteredEnDown_sumEt, &b_met_shifted_UnclusteredEnDown_sumEt);
   fChain->SetBranchAddress("met_shifted_JetEnUp_pt", &met_shifted_JetEnUp_pt, &b_met_shifted_JetEnUp_pt);
   fChain->SetBranchAddress("met_shifted_JetEnUp_phi", &met_shifted_JetEnUp_phi, &b_met_shifted_JetEnUp_phi);
   fChain->SetBranchAddress("met_shifted_JetEnUp_sumEt", &met_shifted_JetEnUp_sumEt, &b_met_shifted_JetEnUp_sumEt);
   fChain->SetBranchAddress("met_shifted_JetResDown_pt", &met_shifted_JetResDown_pt, &b_met_shifted_JetResDown_pt);
   fChain->SetBranchAddress("met_shifted_JetResDown_phi", &met_shifted_JetResDown_phi, &b_met_shifted_JetResDown_phi);
   fChain->SetBranchAddress("met_shifted_JetResDown_sumEt", &met_shifted_JetResDown_sumEt, &b_met_shifted_JetResDown_sumEt);
   fChain->SetBranchAddress("softActivity_njets2", &softActivity_njets2, &b_softActivity_njets2);
   fChain->SetBranchAddress("softActivity_njets5", &softActivity_njets5, &b_softActivity_njets5);
   fChain->SetBranchAddress("softActivity_njets10", &softActivity_njets10, &b_softActivity_njets10);
   fChain->SetBranchAddress("softActivity_HT", &softActivity_HT, &b_softActivity_HT);
   fChain->SetBranchAddress("met_shifted_MuonEnUp_pt", &met_shifted_MuonEnUp_pt, &b_met_shifted_MuonEnUp_pt);
   fChain->SetBranchAddress("met_shifted_MuonEnUp_phi", &met_shifted_MuonEnUp_phi, &b_met_shifted_MuonEnUp_phi);
   fChain->SetBranchAddress("met_shifted_MuonEnUp_sumEt", &met_shifted_MuonEnUp_sumEt, &b_met_shifted_MuonEnUp_sumEt);
   fChain->SetBranchAddress("nGenBQuarkFromHafterISR", &nGenBQuarkFromHafterISR, &b_nGenBQuarkFromHafterISR);
   fChain->SetBranchAddress("GenBQuarkFromHafterISR_pdgId", &GenBQuarkFromHafterISR_pdgId, &b_GenBQuarkFromHafterISR_pdgId);
   fChain->SetBranchAddress("GenBQuarkFromHafterISR_pt", &GenBQuarkFromHafterISR_pt, &b_GenBQuarkFromHafterISR_pt);
   fChain->SetBranchAddress("GenBQuarkFromHafterISR_eta", &GenBQuarkFromHafterISR_eta, &b_GenBQuarkFromHafterISR_eta);
   fChain->SetBranchAddress("GenBQuarkFromHafterISR_phi", &GenBQuarkFromHafterISR_phi, &b_GenBQuarkFromHafterISR_phi);
   fChain->SetBranchAddress("GenBQuarkFromHafterISR_mass", &GenBQuarkFromHafterISR_mass, &b_GenBQuarkFromHafterISR_mass);
   fChain->SetBranchAddress("GenBQuarkFromHafterISR_charge", &GenBQuarkFromHafterISR_charge, &b_GenBQuarkFromHafterISR_charge);
   fChain->SetBranchAddress("GenBQuarkFromHafterISR_status", &GenBQuarkFromHafterISR_status, &b_GenBQuarkFromHafterISR_status);
   fChain->SetBranchAddress("npileUpVertex_ptHat", &npileUpVertex_ptHat, &b_npileUpVertex_ptHat);
   fChain->SetBranchAddress("pileUpVertex_ptHat", pileUpVertex_ptHat, &b_pileUpVertex_ptHat);
   fChain->SetBranchAddress("nGenHiggsBoson", &nGenHiggsBoson, &b_nGenHiggsBoson);
   fChain->SetBranchAddress("GenHiggsBoson_pdgId", GenHiggsBoson_pdgId, &b_GenHiggsBoson_pdgId);
   fChain->SetBranchAddress("GenHiggsBoson_pt", GenHiggsBoson_pt, &b_GenHiggsBoson_pt);
   fChain->SetBranchAddress("GenHiggsBoson_eta", GenHiggsBoson_eta, &b_GenHiggsBoson_eta);
   fChain->SetBranchAddress("GenHiggsBoson_phi", GenHiggsBoson_phi, &b_GenHiggsBoson_phi);
   fChain->SetBranchAddress("GenHiggsBoson_mass", GenHiggsBoson_mass, &b_GenHiggsBoson_mass);
   fChain->SetBranchAddress("GenHiggsBoson_charge", GenHiggsBoson_charge, &b_GenHiggsBoson_charge);
   fChain->SetBranchAddress("GenHiggsBoson_status", GenHiggsBoson_status, &b_GenHiggsBoson_status);
   fChain->SetBranchAddress("nhJidx_sortcsv", &nhJidx_sortcsv, &b_nhJidx_sortcsv);
   fChain->SetBranchAddress("hJidx_sortcsv", hJidx_sortcsv, &b_hJidx_sortcsv);
   fChain->SetBranchAddress("naJCidx", &naJCidx, &b_naJCidx);
   fChain->SetBranchAddress("aJCidx", aJCidx, &b_aJCidx);
   fChain->SetBranchAddress("nFatjetCA15pruned", &nFatjetCA15pruned, &b_nFatjetCA15pruned);
   fChain->SetBranchAddress("FatjetCA15pruned_pt", FatjetCA15pruned_pt, &b_FatjetCA15pruned_pt);
   fChain->SetBranchAddress("FatjetCA15pruned_eta", FatjetCA15pruned_eta, &b_FatjetCA15pruned_eta);
   fChain->SetBranchAddress("FatjetCA15pruned_phi", FatjetCA15pruned_phi, &b_FatjetCA15pruned_phi);
   fChain->SetBranchAddress("FatjetCA15pruned_mass", FatjetCA15pruned_mass, &b_FatjetCA15pruned_mass);
   fChain->SetBranchAddress("nGenLepFromTop", &nGenLepFromTop, &b_nGenLepFromTop);
   fChain->SetBranchAddress("GenLepFromTop_pdgId", &GenLepFromTop_pdgId, &b_GenLepFromTop_pdgId);
   fChain->SetBranchAddress("GenLepFromTop_pt", &GenLepFromTop_pt, &b_GenLepFromTop_pt);
   fChain->SetBranchAddress("GenLepFromTop_eta", &GenLepFromTop_eta, &b_GenLepFromTop_eta);
   fChain->SetBranchAddress("GenLepFromTop_phi", &GenLepFromTop_phi, &b_GenLepFromTop_phi);
   fChain->SetBranchAddress("GenLepFromTop_mass", &GenLepFromTop_mass, &b_GenLepFromTop_mass);
   fChain->SetBranchAddress("GenLepFromTop_charge", &GenLepFromTop_charge, &b_GenLepFromTop_charge);
   fChain->SetBranchAddress("GenLepFromTop_status", &GenLepFromTop_status, &b_GenLepFromTop_status);
   fChain->SetBranchAddress("nGenVbosons", &nGenVbosons, &b_nGenVbosons);
   fChain->SetBranchAddress("GenVbosons_pdgId", GenVbosons_pdgId, &b_GenVbosons_pdgId);
   fChain->SetBranchAddress("GenVbosons_pt", GenVbosons_pt, &b_GenVbosons_pt);
   fChain->SetBranchAddress("GenVbosons_eta", GenVbosons_eta, &b_GenVbosons_eta);
   fChain->SetBranchAddress("GenVbosons_phi", GenVbosons_phi, &b_GenVbosons_phi);
   fChain->SetBranchAddress("GenVbosons_mass", GenVbosons_mass, &b_GenVbosons_mass);
   fChain->SetBranchAddress("GenVbosons_charge", GenVbosons_charge, &b_GenVbosons_charge);
   fChain->SetBranchAddress("GenVbosons_status", GenVbosons_status, &b_GenVbosons_status);
   fChain->SetBranchAddress("najidxaddJetsdR08", &najidxaddJetsdR08, &b_najidxaddJetsdR08);
   fChain->SetBranchAddress("ajidxaddJetsdR08", ajidxaddJetsdR08, &b_ajidxaddJetsdR08);
   fChain->SetBranchAddress("nFatjetAK08pruned", &nFatjetAK08pruned, &b_nFatjetAK08pruned);
   fChain->SetBranchAddress("FatjetAK08pruned_pt", FatjetAK08pruned_pt, &b_FatjetAK08pruned_pt);
   fChain->SetBranchAddress("FatjetAK08pruned_eta", FatjetAK08pruned_eta, &b_FatjetAK08pruned_eta);
   fChain->SetBranchAddress("FatjetAK08pruned_phi", FatjetAK08pruned_phi, &b_FatjetAK08pruned_phi);
   fChain->SetBranchAddress("FatjetAK08pruned_mass", FatjetAK08pruned_mass, &b_FatjetAK08pruned_mass);
   fChain->SetBranchAddress("nGenJet", &nGenJet, &b_nGenJet);
   fChain->SetBranchAddress("GenJet_charge", GenJet_charge, &b_GenJet_charge);
   fChain->SetBranchAddress("GenJet_status", GenJet_status, &b_GenJet_status);
   fChain->SetBranchAddress("GenJet_pdgId", GenJet_pdgId, &b_GenJet_pdgId);
   fChain->SetBranchAddress("GenJet_pt", GenJet_pt, &b_GenJet_pt);
   fChain->SetBranchAddress("GenJet_eta", GenJet_eta, &b_GenJet_eta);
   fChain->SetBranchAddress("GenJet_phi", GenJet_phi, &b_GenJet_phi);
   fChain->SetBranchAddress("GenJet_mass", GenJet_mass, &b_GenJet_mass);
   fChain->SetBranchAddress("GenJet_numBHadrons", GenJet_numBHadrons, &b_GenJet_numBHadrons);
   fChain->SetBranchAddress("GenJet_numCHadrons", GenJet_numCHadrons, &b_GenJet_numCHadrons);
   fChain->SetBranchAddress("GenJet_numBHadronsFromTop", GenJet_numBHadronsFromTop, &b_GenJet_numBHadronsFromTop);
   fChain->SetBranchAddress("GenJet_numCHadronsFromTop", GenJet_numCHadronsFromTop, &b_GenJet_numCHadronsFromTop);
   fChain->SetBranchAddress("GenJet_numBHadronsAfterTop", GenJet_numBHadronsAfterTop, &b_GenJet_numBHadronsAfterTop);
   fChain->SetBranchAddress("GenJet_numCHadronsAfterTop", GenJet_numCHadronsAfterTop, &b_GenJet_numCHadronsAfterTop);
   fChain->SetBranchAddress("GenJet_wNuPt", GenJet_wNuPt, &b_GenJet_wNuPt);
   fChain->SetBranchAddress("GenJet_wNuEta", GenJet_wNuEta, &b_GenJet_wNuEta);
   fChain->SetBranchAddress("GenJet_wNuPhi", GenJet_wNuPhi, &b_GenJet_wNuPhi);
   fChain->SetBranchAddress("GenJet_wNuM", GenJet_wNuM, &b_GenJet_wNuM);
   fChain->SetBranchAddress("nSubjetCA15pruned", &nSubjetCA15pruned, &b_nSubjetCA15pruned);
   fChain->SetBranchAddress("SubjetCA15pruned_pt", SubjetCA15pruned_pt, &b_SubjetCA15pruned_pt);
   fChain->SetBranchAddress("SubjetCA15pruned_eta", SubjetCA15pruned_eta, &b_SubjetCA15pruned_eta);
   fChain->SetBranchAddress("SubjetCA15pruned_phi", SubjetCA15pruned_phi, &b_SubjetCA15pruned_phi);
   fChain->SetBranchAddress("SubjetCA15pruned_mass", SubjetCA15pruned_mass, &b_SubjetCA15pruned_mass);
   fChain->SetBranchAddress("SubjetCA15pruned_btag", SubjetCA15pruned_btag, &b_SubjetCA15pruned_btag);
   fChain->SetBranchAddress("nFatjetCA15ungroomed", &nFatjetCA15ungroomed, &b_nFatjetCA15ungroomed);
   fChain->SetBranchAddress("FatjetCA15ungroomed_pt", FatjetCA15ungroomed_pt, &b_FatjetCA15ungroomed_pt);
   fChain->SetBranchAddress("FatjetCA15ungroomed_eta", FatjetCA15ungroomed_eta, &b_FatjetCA15ungroomed_eta);
   fChain->SetBranchAddress("FatjetCA15ungroomed_phi", FatjetCA15ungroomed_phi, &b_FatjetCA15ungroomed_phi);
   fChain->SetBranchAddress("FatjetCA15ungroomed_mass", FatjetCA15ungroomed_mass, &b_FatjetCA15ungroomed_mass);
   fChain->SetBranchAddress("FatjetCA15ungroomed_tau1", FatjetCA15ungroomed_tau1, &b_FatjetCA15ungroomed_tau1);
   fChain->SetBranchAddress("FatjetCA15ungroomed_tau2", FatjetCA15ungroomed_tau2, &b_FatjetCA15ungroomed_tau2);
   fChain->SetBranchAddress("FatjetCA15ungroomed_tau3", FatjetCA15ungroomed_tau3, &b_FatjetCA15ungroomed_tau3);
   fChain->SetBranchAddress("FatjetCA15ungroomed_bbtag", FatjetCA15ungroomed_bbtag, &b_FatjetCA15ungroomed_bbtag);
   fChain->SetBranchAddress("FatjetCA15ungroomed_PFLepton_ptrel", FatjetCA15ungroomed_PFLepton_ptrel, &b_FatjetCA15ungroomed_PFLepton_ptrel);
   fChain->SetBranchAddress("FatjetCA15ungroomed_z_ratio", FatjetCA15ungroomed_z_ratio, &b_FatjetCA15ungroomed_z_ratio);
   fChain->SetBranchAddress("FatjetCA15ungroomed_tau_dot", FatjetCA15ungroomed_tau_dot, &b_FatjetCA15ungroomed_tau_dot);
   fChain->SetBranchAddress("FatjetCA15ungroomed_SV_mass_0", FatjetCA15ungroomed_SV_mass_0, &b_FatjetCA15ungroomed_SV_mass_0);
   fChain->SetBranchAddress("FatjetCA15ungroomed_SV_EnergyRatio_0", FatjetCA15ungroomed_SV_EnergyRatio_0, &b_FatjetCA15ungroomed_SV_EnergyRatio_0);
   fChain->SetBranchAddress("FatjetCA15ungroomed_SV_EnergyRatio_1", FatjetCA15ungroomed_SV_EnergyRatio_1, &b_FatjetCA15ungroomed_SV_EnergyRatio_1);
   fChain->SetBranchAddress("FatjetCA15ungroomed_PFLepton_IP2D", FatjetCA15ungroomed_PFLepton_IP2D, &b_FatjetCA15ungroomed_PFLepton_IP2D);
   fChain->SetBranchAddress("FatjetCA15ungroomed_tau_21", FatjetCA15ungroomed_tau_21, &b_FatjetCA15ungroomed_tau_21);
   fChain->SetBranchAddress("FatjetCA15ungroomed_nSL", FatjetCA15ungroomed_nSL, &b_FatjetCA15ungroomed_nSL);
   fChain->SetBranchAddress("FatjetCA15ungroomed_vertexNTracks", FatjetCA15ungroomed_vertexNTracks, &b_FatjetCA15ungroomed_vertexNTracks);
   fChain->SetBranchAddress("ndRaddJetsdR08", &ndRaddJetsdR08, &b_ndRaddJetsdR08);
   fChain->SetBranchAddress("dRaddJetsdR08", dRaddJetsdR08, &b_dRaddJetsdR08);
   fChain->SetBranchAddress("nGenBQuarkFromH", &nGenBQuarkFromH, &b_nGenBQuarkFromH);
   fChain->SetBranchAddress("GenBQuarkFromH_pdgId", GenBQuarkFromH_pdgId, &b_GenBQuarkFromH_pdgId);
   fChain->SetBranchAddress("GenBQuarkFromH_pt", GenBQuarkFromH_pt, &b_GenBQuarkFromH_pt);
   fChain->SetBranchAddress("GenBQuarkFromH_eta", GenBQuarkFromH_eta, &b_GenBQuarkFromH_eta);
   fChain->SetBranchAddress("GenBQuarkFromH_phi", GenBQuarkFromH_phi, &b_GenBQuarkFromH_phi);
   fChain->SetBranchAddress("GenBQuarkFromH_mass", GenBQuarkFromH_mass, &b_GenBQuarkFromH_mass);
   fChain->SetBranchAddress("GenBQuarkFromH_charge", GenBQuarkFromH_charge, &b_GenBQuarkFromH_charge);
   fChain->SetBranchAddress("GenBQuarkFromH_status", GenBQuarkFromH_status, &b_GenBQuarkFromH_status);
   fChain->SetBranchAddress("nGenStatus2bHad", &nGenStatus2bHad, &b_nGenStatus2bHad);
   fChain->SetBranchAddress("GenStatus2bHad_pdgId", &GenStatus2bHad_pdgId, &b_GenStatus2bHad_pdgId);
   fChain->SetBranchAddress("GenStatus2bHad_pt", &GenStatus2bHad_pt, &b_GenStatus2bHad_pt);
   fChain->SetBranchAddress("GenStatus2bHad_eta", &GenStatus2bHad_eta, &b_GenStatus2bHad_eta);
   fChain->SetBranchAddress("GenStatus2bHad_phi", &GenStatus2bHad_phi, &b_GenStatus2bHad_phi);
   fChain->SetBranchAddress("GenStatus2bHad_mass", &GenStatus2bHad_mass, &b_GenStatus2bHad_mass);
   fChain->SetBranchAddress("GenStatus2bHad_charge", &GenStatus2bHad_charge, &b_GenStatus2bHad_charge);
   fChain->SetBranchAddress("GenStatus2bHad_status", &GenStatus2bHad_status, &b_GenStatus2bHad_status);
   fChain->SetBranchAddress("nhJCidx", &nhJCidx, &b_nhJCidx);
   fChain->SetBranchAddress("hJCidx", hJCidx, &b_hJCidx);
   fChain->SetBranchAddress("nGenTop", &nGenTop, &b_nGenTop);
   fChain->SetBranchAddress("GenTop_pdgId", &GenTop_pdgId, &b_GenTop_pdgId);
   fChain->SetBranchAddress("GenTop_pt", &GenTop_pt, &b_GenTop_pt);
   fChain->SetBranchAddress("GenTop_eta", &GenTop_eta, &b_GenTop_eta);
   fChain->SetBranchAddress("GenTop_phi", &GenTop_phi, &b_GenTop_phi);
   fChain->SetBranchAddress("GenTop_mass", &GenTop_mass, &b_GenTop_mass);
   fChain->SetBranchAddress("GenTop_charge", &GenTop_charge, &b_GenTop_charge);
   fChain->SetBranchAddress("GenTop_status", &GenTop_status, &b_GenTop_status);
   fChain->SetBranchAddress("naJidx", &naJidx, &b_naJidx);
   fChain->SetBranchAddress("aJidx", aJidx, &b_aJidx);
   fChain->SetBranchAddress("nFatjetCA15trimmed", &nFatjetCA15trimmed, &b_nFatjetCA15trimmed);
   fChain->SetBranchAddress("FatjetCA15trimmed_pt", FatjetCA15trimmed_pt, &b_FatjetCA15trimmed_pt);
   fChain->SetBranchAddress("FatjetCA15trimmed_eta", FatjetCA15trimmed_eta, &b_FatjetCA15trimmed_eta);
   fChain->SetBranchAddress("FatjetCA15trimmed_phi", FatjetCA15trimmed_phi, &b_FatjetCA15trimmed_phi);
   fChain->SetBranchAddress("FatjetCA15trimmed_mass", FatjetCA15trimmed_mass, &b_FatjetCA15trimmed_mass);
   fChain->SetBranchAddress("nGenLepFromTau", &nGenLepFromTau, &b_nGenLepFromTau);
   fChain->SetBranchAddress("GenLepFromTau_pdgId", &GenLepFromTau_pdgId, &b_GenLepFromTau_pdgId);
   fChain->SetBranchAddress("GenLepFromTau_pt", &GenLepFromTau_pt, &b_GenLepFromTau_pt);
   fChain->SetBranchAddress("GenLepFromTau_eta", &GenLepFromTau_eta, &b_GenLepFromTau_eta);
   fChain->SetBranchAddress("GenLepFromTau_phi", &GenLepFromTau_phi, &b_GenLepFromTau_phi);
   fChain->SetBranchAddress("GenLepFromTau_mass", &GenLepFromTau_mass, &b_GenLepFromTau_mass);
   fChain->SetBranchAddress("GenLepFromTau_charge", &GenLepFromTau_charge, &b_GenLepFromTau_charge);
   fChain->SetBranchAddress("GenLepFromTau_status", &GenLepFromTau_status, &b_GenLepFromTau_status);
   fChain->SetBranchAddress("naLeptons", &naLeptons, &b_naLeptons);
   fChain->SetBranchAddress("aLeptons_charge", aLeptons_charge, &b_aLeptons_charge);
   fChain->SetBranchAddress("aLeptons_tightId", aLeptons_tightId, &b_aLeptons_tightId);
   fChain->SetBranchAddress("aLeptons_eleCutIdCSA14_25ns_v1", aLeptons_eleCutIdCSA14_25ns_v1, &b_aLeptons_eleCutIdCSA14_25ns_v1);
   fChain->SetBranchAddress("aLeptons_eleCutIdCSA14_50ns_v1", aLeptons_eleCutIdCSA14_50ns_v1, &b_aLeptons_eleCutIdCSA14_50ns_v1);
   fChain->SetBranchAddress("aLeptons_eleCutIdSpring15_25ns_v1", aLeptons_eleCutIdSpring15_25ns_v1, &b_aLeptons_eleCutIdSpring15_25ns_v1);
   fChain->SetBranchAddress("aLeptons_dxy", aLeptons_dxy, &b_aLeptons_dxy);
   fChain->SetBranchAddress("aLeptons_dz", aLeptons_dz, &b_aLeptons_dz);
   fChain->SetBranchAddress("aLeptons_edxy", aLeptons_edxy, &b_aLeptons_edxy);
   fChain->SetBranchAddress("aLeptons_edz", aLeptons_edz, &b_aLeptons_edz);
   fChain->SetBranchAddress("aLeptons_ip3d", aLeptons_ip3d, &b_aLeptons_ip3d);
   fChain->SetBranchAddress("aLeptons_sip3d", aLeptons_sip3d, &b_aLeptons_sip3d);
   fChain->SetBranchAddress("aLeptons_convVeto", aLeptons_convVeto, &b_aLeptons_convVeto);
   fChain->SetBranchAddress("aLeptons_lostHits", aLeptons_lostHits, &b_aLeptons_lostHits);
   fChain->SetBranchAddress("aLeptons_relIso03", aLeptons_relIso03, &b_aLeptons_relIso03);
   fChain->SetBranchAddress("aLeptons_relIso04", aLeptons_relIso04, &b_aLeptons_relIso04);
   fChain->SetBranchAddress("aLeptons_miniRelIso", aLeptons_miniRelIso, &b_aLeptons_miniRelIso);
   fChain->SetBranchAddress("aLeptons_tightCharge", aLeptons_tightCharge, &b_aLeptons_tightCharge);
   fChain->SetBranchAddress("aLeptons_mcMatchId", aLeptons_mcMatchId, &b_aLeptons_mcMatchId);
   fChain->SetBranchAddress("aLeptons_mcMatchAny", aLeptons_mcMatchAny, &b_aLeptons_mcMatchAny);
   fChain->SetBranchAddress("aLeptons_mcMatchTau", aLeptons_mcMatchTau, &b_aLeptons_mcMatchTau);
   fChain->SetBranchAddress("aLeptons_mcPt", aLeptons_mcPt, &b_aLeptons_mcPt);
   fChain->SetBranchAddress("aLeptons_mediumMuonId", aLeptons_mediumMuonId, &b_aLeptons_mediumMuonId);
   fChain->SetBranchAddress("aLeptons_pdgId", aLeptons_pdgId, &b_aLeptons_pdgId);
   fChain->SetBranchAddress("aLeptons_pt", aLeptons_pt, &b_aLeptons_pt);
   fChain->SetBranchAddress("aLeptons_eta", aLeptons_eta, &b_aLeptons_eta);
   fChain->SetBranchAddress("aLeptons_phi", aLeptons_phi, &b_aLeptons_phi);
   fChain->SetBranchAddress("aLeptons_mass", aLeptons_mass, &b_aLeptons_mass);
   fChain->SetBranchAddress("aLeptons_looseIdSusy", aLeptons_looseIdSusy, &b_aLeptons_looseIdSusy);
   fChain->SetBranchAddress("aLeptons_looseIdPOG", aLeptons_looseIdPOG, &b_aLeptons_looseIdPOG);
   fChain->SetBranchAddress("aLeptons_chargedHadRelIso03", aLeptons_chargedHadRelIso03, &b_aLeptons_chargedHadRelIso03);
   fChain->SetBranchAddress("aLeptons_chargedHadRelIso04", aLeptons_chargedHadRelIso04, &b_aLeptons_chargedHadRelIso04);
   fChain->SetBranchAddress("aLeptons_eleSieie", aLeptons_eleSieie, &b_aLeptons_eleSieie);
   fChain->SetBranchAddress("aLeptons_eleDEta", aLeptons_eleDEta, &b_aLeptons_eleDEta);
   fChain->SetBranchAddress("aLeptons_eleDPhi", aLeptons_eleDPhi, &b_aLeptons_eleDPhi);
   fChain->SetBranchAddress("aLeptons_eleHoE", aLeptons_eleHoE, &b_aLeptons_eleHoE);
   fChain->SetBranchAddress("aLeptons_eleMissingHits", aLeptons_eleMissingHits, &b_aLeptons_eleMissingHits);
   fChain->SetBranchAddress("aLeptons_eleChi2", aLeptons_eleChi2, &b_aLeptons_eleChi2);
   fChain->SetBranchAddress("aLeptons_nStations", aLeptons_nStations, &b_aLeptons_nStations);
   fChain->SetBranchAddress("aLeptons_trkKink", aLeptons_trkKink, &b_aLeptons_trkKink);
   fChain->SetBranchAddress("aLeptons_caloCompatibility", aLeptons_caloCompatibility, &b_aLeptons_caloCompatibility);
   fChain->SetBranchAddress("aLeptons_globalTrackChi2", aLeptons_globalTrackChi2, &b_aLeptons_globalTrackChi2);
   fChain->SetBranchAddress("aLeptons_nChamberHits", aLeptons_nChamberHits, &b_aLeptons_nChamberHits);
   fChain->SetBranchAddress("aLeptons_isPFMuon", aLeptons_isPFMuon, &b_aLeptons_isPFMuon);
   fChain->SetBranchAddress("aLeptons_isGlobalMuon", aLeptons_isGlobalMuon, &b_aLeptons_isGlobalMuon);
   fChain->SetBranchAddress("aLeptons_isTrackerMuon", aLeptons_isTrackerMuon, &b_aLeptons_isTrackerMuon);
   fChain->SetBranchAddress("aLeptons_pixelHits", aLeptons_pixelHits, &b_aLeptons_pixelHits);
   fChain->SetBranchAddress("aLeptons_trackerLayers", aLeptons_trackerLayers, &b_aLeptons_trackerLayers);
   fChain->SetBranchAddress("aLeptons_pixelLayers", aLeptons_pixelLayers, &b_aLeptons_pixelLayers);
   fChain->SetBranchAddress("aLeptons_mvaTTH", aLeptons_mvaTTH, &b_aLeptons_mvaTTH);
   fChain->SetBranchAddress("aLeptons_jetOverlapIdx", aLeptons_jetOverlapIdx, &b_aLeptons_jetOverlapIdx);
   fChain->SetBranchAddress("aLeptons_jetPtRatio", aLeptons_jetPtRatio, &b_aLeptons_jetPtRatio);
   fChain->SetBranchAddress("aLeptons_jetBTagCSV", aLeptons_jetBTagCSV, &b_aLeptons_jetBTagCSV);
   fChain->SetBranchAddress("aLeptons_jetDR", aLeptons_jetDR, &b_aLeptons_jetDR);
   fChain->SetBranchAddress("aLeptons_pfRelIso03", aLeptons_pfRelIso03, &b_aLeptons_pfRelIso03);
   fChain->SetBranchAddress("aLeptons_pfRelIso04", aLeptons_pfRelIso04, &b_aLeptons_pfRelIso04);
   fChain->SetBranchAddress("aLeptons_etaSc", aLeptons_etaSc, &b_aLeptons_etaSc);
   fChain->SetBranchAddress("aLeptons_eleExpMissingInnerHits", aLeptons_eleExpMissingInnerHits, &b_aLeptons_eleExpMissingInnerHits);
   fChain->SetBranchAddress("aLeptons_eleooEmooP", aLeptons_eleooEmooP, &b_aLeptons_eleooEmooP);
   fChain->SetBranchAddress("nGenNuFromTop", &nGenNuFromTop, &b_nGenNuFromTop);
   fChain->SetBranchAddress("GenNuFromTop_pdgId", &GenNuFromTop_pdgId, &b_GenNuFromTop_pdgId);
   fChain->SetBranchAddress("GenNuFromTop_pt", &GenNuFromTop_pt, &b_GenNuFromTop_pt);
   fChain->SetBranchAddress("GenNuFromTop_eta", &GenNuFromTop_eta, &b_GenNuFromTop_eta);
   fChain->SetBranchAddress("GenNuFromTop_phi", &GenNuFromTop_phi, &b_GenNuFromTop_phi);
   fChain->SetBranchAddress("GenNuFromTop_mass", &GenNuFromTop_mass, &b_GenNuFromTop_mass);
   fChain->SetBranchAddress("GenNuFromTop_charge", &GenNuFromTop_charge, &b_GenNuFromTop_charge);
   fChain->SetBranchAddress("GenNuFromTop_status", &GenNuFromTop_status, &b_GenNuFromTop_status);
   fChain->SetBranchAddress("nFatjetAK08ungroomed", &nFatjetAK08ungroomed, &b_nFatjetAK08ungroomed);
   fChain->SetBranchAddress("FatjetAK08ungroomed_pt", FatjetAK08ungroomed_pt, &b_FatjetAK08ungroomed_pt);
   fChain->SetBranchAddress("FatjetAK08ungroomed_eta", FatjetAK08ungroomed_eta, &b_FatjetAK08ungroomed_eta);
   fChain->SetBranchAddress("FatjetAK08ungroomed_phi", FatjetAK08ungroomed_phi, &b_FatjetAK08ungroomed_phi);
   fChain->SetBranchAddress("FatjetAK08ungroomed_mass", FatjetAK08ungroomed_mass, &b_FatjetAK08ungroomed_mass);
   fChain->SetBranchAddress("FatjetAK08ungroomed_tau1", FatjetAK08ungroomed_tau1, &b_FatjetAK08ungroomed_tau1);
   fChain->SetBranchAddress("FatjetAK08ungroomed_tau2", FatjetAK08ungroomed_tau2, &b_FatjetAK08ungroomed_tau2);
   fChain->SetBranchAddress("FatjetAK08ungroomed_tau3", FatjetAK08ungroomed_tau3, &b_FatjetAK08ungroomed_tau3);
   fChain->SetBranchAddress("FatjetAK08ungroomed_msoftdrop", FatjetAK08ungroomed_msoftdrop, &b_FatjetAK08ungroomed_msoftdrop);
   fChain->SetBranchAddress("FatjetAK08ungroomed_mpruned", FatjetAK08ungroomed_mpruned, &b_FatjetAK08ungroomed_mpruned);
   fChain->SetBranchAddress("FatjetAK08ungroomed_mtrimmed", FatjetAK08ungroomed_mtrimmed, &b_FatjetAK08ungroomed_mtrimmed);
   fChain->SetBranchAddress("FatjetAK08ungroomed_mfiltered", FatjetAK08ungroomed_mfiltered, &b_FatjetAK08ungroomed_mfiltered);
   fChain->SetBranchAddress("FatjetAK08ungroomed_bbtag", FatjetAK08ungroomed_bbtag, &b_FatjetAK08ungroomed_bbtag);
   fChain->SetBranchAddress("FatjetAK08ungroomed_PFLepton_ptrel", FatjetAK08ungroomed_PFLepton_ptrel, &b_FatjetAK08ungroomed_PFLepton_ptrel);
   fChain->SetBranchAddress("FatjetAK08ungroomed_z_ratio", FatjetAK08ungroomed_z_ratio, &b_FatjetAK08ungroomed_z_ratio);
   fChain->SetBranchAddress("FatjetAK08ungroomed_tau_dot", FatjetAK08ungroomed_tau_dot, &b_FatjetAK08ungroomed_tau_dot);
   fChain->SetBranchAddress("FatjetAK08ungroomed_SV_mass_0", FatjetAK08ungroomed_SV_mass_0, &b_FatjetAK08ungroomed_SV_mass_0);
   fChain->SetBranchAddress("FatjetAK08ungroomed_SV_EnergyRatio_0", FatjetAK08ungroomed_SV_EnergyRatio_0, &b_FatjetAK08ungroomed_SV_EnergyRatio_0);
   fChain->SetBranchAddress("FatjetAK08ungroomed_SV_EnergyRatio_1", FatjetAK08ungroomed_SV_EnergyRatio_1, &b_FatjetAK08ungroomed_SV_EnergyRatio_1);
   fChain->SetBranchAddress("FatjetAK08ungroomed_PFLepton_IP2D", FatjetAK08ungroomed_PFLepton_IP2D, &b_FatjetAK08ungroomed_PFLepton_IP2D);
   fChain->SetBranchAddress("FatjetAK08ungroomed_tau_21", FatjetAK08ungroomed_tau_21, &b_FatjetAK08ungroomed_tau_21);
   fChain->SetBranchAddress("FatjetAK08ungroomed_nSL", FatjetAK08ungroomed_nSL, &b_FatjetAK08ungroomed_nSL);
   fChain->SetBranchAddress("FatjetAK08ungroomed_vertexNTracks", FatjetAK08ungroomed_vertexNTracks, &b_FatjetAK08ungroomed_vertexNTracks);
   fChain->SetBranchAddress("nselLeptons", &nselLeptons, &b_nselLeptons);
   fChain->SetBranchAddress("selLeptons_charge", selLeptons_charge, &b_selLeptons_charge);
   fChain->SetBranchAddress("selLeptons_tightId", selLeptons_tightId, &b_selLeptons_tightId);
   fChain->SetBranchAddress("selLeptons_eleCutIdCSA14_25ns_v1", selLeptons_eleCutIdCSA14_25ns_v1, &b_selLeptons_eleCutIdCSA14_25ns_v1);
   fChain->SetBranchAddress("selLeptons_eleCutIdCSA14_50ns_v1", selLeptons_eleCutIdCSA14_50ns_v1, &b_selLeptons_eleCutIdCSA14_50ns_v1);
   fChain->SetBranchAddress("selLeptons_eleCutIdSpring15_25ns_v1", selLeptons_eleCutIdSpring15_25ns_v1, &b_selLeptons_eleCutIdSpring15_25ns_v1);
   fChain->SetBranchAddress("selLeptons_dxy", selLeptons_dxy, &b_selLeptons_dxy);
   fChain->SetBranchAddress("selLeptons_dz", selLeptons_dz, &b_selLeptons_dz);
   fChain->SetBranchAddress("selLeptons_edxy", selLeptons_edxy, &b_selLeptons_edxy);
   fChain->SetBranchAddress("selLeptons_edz", selLeptons_edz, &b_selLeptons_edz);
   fChain->SetBranchAddress("selLeptons_ip3d", selLeptons_ip3d, &b_selLeptons_ip3d);
   fChain->SetBranchAddress("selLeptons_sip3d", selLeptons_sip3d, &b_selLeptons_sip3d);
   fChain->SetBranchAddress("selLeptons_convVeto", selLeptons_convVeto, &b_selLeptons_convVeto);
   fChain->SetBranchAddress("selLeptons_lostHits", selLeptons_lostHits, &b_selLeptons_lostHits);
   fChain->SetBranchAddress("selLeptons_relIso03", selLeptons_relIso03, &b_selLeptons_relIso03);
   fChain->SetBranchAddress("selLeptons_relIso04", selLeptons_relIso04, &b_selLeptons_relIso04);
   fChain->SetBranchAddress("selLeptons_miniRelIso", selLeptons_miniRelIso, &b_selLeptons_miniRelIso);
   fChain->SetBranchAddress("selLeptons_tightCharge", selLeptons_tightCharge, &b_selLeptons_tightCharge);
   fChain->SetBranchAddress("selLeptons_mcMatchId", selLeptons_mcMatchId, &b_selLeptons_mcMatchId);
   fChain->SetBranchAddress("selLeptons_mcMatchAny", selLeptons_mcMatchAny, &b_selLeptons_mcMatchAny);
   fChain->SetBranchAddress("selLeptons_mcMatchTau", selLeptons_mcMatchTau, &b_selLeptons_mcMatchTau);
   fChain->SetBranchAddress("selLeptons_mcPt", selLeptons_mcPt, &b_selLeptons_mcPt);
   fChain->SetBranchAddress("selLeptons_mediumMuonId", selLeptons_mediumMuonId, &b_selLeptons_mediumMuonId);
   fChain->SetBranchAddress("selLeptons_pdgId", selLeptons_pdgId, &b_selLeptons_pdgId);
   fChain->SetBranchAddress("selLeptons_pt", selLeptons_pt, &b_selLeptons_pt);
   fChain->SetBranchAddress("selLeptons_eta", selLeptons_eta, &b_selLeptons_eta);
   fChain->SetBranchAddress("selLeptons_phi", selLeptons_phi, &b_selLeptons_phi);
   fChain->SetBranchAddress("selLeptons_mass", selLeptons_mass, &b_selLeptons_mass);
   fChain->SetBranchAddress("selLeptons_looseIdSusy", selLeptons_looseIdSusy, &b_selLeptons_looseIdSusy);
   fChain->SetBranchAddress("selLeptons_looseIdPOG", selLeptons_looseIdPOG, &b_selLeptons_looseIdPOG);
   fChain->SetBranchAddress("selLeptons_chargedHadRelIso03", selLeptons_chargedHadRelIso03, &b_selLeptons_chargedHadRelIso03);
   fChain->SetBranchAddress("selLeptons_chargedHadRelIso04", selLeptons_chargedHadRelIso04, &b_selLeptons_chargedHadRelIso04);
   fChain->SetBranchAddress("selLeptons_eleSieie", selLeptons_eleSieie, &b_selLeptons_eleSieie);
   fChain->SetBranchAddress("selLeptons_eleDEta", selLeptons_eleDEta, &b_selLeptons_eleDEta);
   fChain->SetBranchAddress("selLeptons_eleDPhi", selLeptons_eleDPhi, &b_selLeptons_eleDPhi);
   fChain->SetBranchAddress("selLeptons_eleHoE", selLeptons_eleHoE, &b_selLeptons_eleHoE);
   fChain->SetBranchAddress("selLeptons_eleMissingHits", selLeptons_eleMissingHits, &b_selLeptons_eleMissingHits);
   fChain->SetBranchAddress("selLeptons_eleChi2", selLeptons_eleChi2, &b_selLeptons_eleChi2);
   fChain->SetBranchAddress("selLeptons_nStations", selLeptons_nStations, &b_selLeptons_nStations);
   fChain->SetBranchAddress("selLeptons_trkKink", selLeptons_trkKink, &b_selLeptons_trkKink);
   fChain->SetBranchAddress("selLeptons_caloCompatibility", selLeptons_caloCompatibility, &b_selLeptons_caloCompatibility);
   fChain->SetBranchAddress("selLeptons_globalTrackChi2", selLeptons_globalTrackChi2, &b_selLeptons_globalTrackChi2);
   fChain->SetBranchAddress("selLeptons_nChamberHits", selLeptons_nChamberHits, &b_selLeptons_nChamberHits);
   fChain->SetBranchAddress("selLeptons_isPFMuon", selLeptons_isPFMuon, &b_selLeptons_isPFMuon);
   fChain->SetBranchAddress("selLeptons_isGlobalMuon", selLeptons_isGlobalMuon, &b_selLeptons_isGlobalMuon);
   fChain->SetBranchAddress("selLeptons_isTrackerMuon", selLeptons_isTrackerMuon, &b_selLeptons_isTrackerMuon);
   fChain->SetBranchAddress("selLeptons_pixelHits", selLeptons_pixelHits, &b_selLeptons_pixelHits);
   fChain->SetBranchAddress("selLeptons_trackerLayers", selLeptons_trackerLayers, &b_selLeptons_trackerLayers);
   fChain->SetBranchAddress("selLeptons_pixelLayers", selLeptons_pixelLayers, &b_selLeptons_pixelLayers);
   fChain->SetBranchAddress("selLeptons_mvaTTH", selLeptons_mvaTTH, &b_selLeptons_mvaTTH);
   fChain->SetBranchAddress("selLeptons_jetOverlapIdx", selLeptons_jetOverlapIdx, &b_selLeptons_jetOverlapIdx);
   fChain->SetBranchAddress("selLeptons_jetPtRatio", selLeptons_jetPtRatio, &b_selLeptons_jetPtRatio);
   fChain->SetBranchAddress("selLeptons_jetBTagCSV", selLeptons_jetBTagCSV, &b_selLeptons_jetBTagCSV);
   fChain->SetBranchAddress("selLeptons_jetDR", selLeptons_jetDR, &b_selLeptons_jetDR);
   fChain->SetBranchAddress("selLeptons_pfRelIso03", selLeptons_pfRelIso03, &b_selLeptons_pfRelIso03);
   fChain->SetBranchAddress("selLeptons_pfRelIso04", selLeptons_pfRelIso04, &b_selLeptons_pfRelIso04);
   fChain->SetBranchAddress("selLeptons_etaSc", selLeptons_etaSc, &b_selLeptons_etaSc);
   fChain->SetBranchAddress("selLeptons_eleExpMissingInnerHits", selLeptons_eleExpMissingInnerHits, &b_selLeptons_eleExpMissingInnerHits);
   fChain->SetBranchAddress("selLeptons_eleooEmooP", selLeptons_eleooEmooP, &b_selLeptons_eleooEmooP);
   fChain->SetBranchAddress("nGenHiggsSisters", &nGenHiggsSisters, &b_nGenHiggsSisters);
   fChain->SetBranchAddress("GenHiggsSisters_pdgId", GenHiggsSisters_pdgId, &b_GenHiggsSisters_pdgId);
   fChain->SetBranchAddress("GenHiggsSisters_pt", GenHiggsSisters_pt, &b_GenHiggsSisters_pt);
   fChain->SetBranchAddress("GenHiggsSisters_eta", GenHiggsSisters_eta, &b_GenHiggsSisters_eta);
   fChain->SetBranchAddress("GenHiggsSisters_phi", GenHiggsSisters_phi, &b_GenHiggsSisters_phi);
   fChain->SetBranchAddress("GenHiggsSisters_mass", GenHiggsSisters_mass, &b_GenHiggsSisters_mass);
   fChain->SetBranchAddress("GenHiggsSisters_charge", GenHiggsSisters_charge, &b_GenHiggsSisters_charge);
   fChain->SetBranchAddress("GenHiggsSisters_status", GenHiggsSisters_status, &b_GenHiggsSisters_status);
   fChain->SetBranchAddress("nhjidxaddJetsdR08", &nhjidxaddJetsdR08, &b_nhjidxaddJetsdR08);
   fChain->SetBranchAddress("hjidxaddJetsdR08", hjidxaddJetsdR08, &b_hjidxaddJetsdR08);
   fChain->SetBranchAddress("nsoftActivityVHJets", &nsoftActivityVHJets, &b_nsoftActivityVHJets);
   fChain->SetBranchAddress("softActivityVHJets_pt", softActivityVHJets_pt, &b_softActivityVHJets_pt);
   fChain->SetBranchAddress("softActivityVHJets_eta", softActivityVHJets_eta, &b_softActivityVHJets_eta);
   fChain->SetBranchAddress("softActivityVHJets_phi", softActivityVHJets_phi, &b_softActivityVHJets_phi);
   fChain->SetBranchAddress("softActivityVHJets_mass", softActivityVHJets_mass, &b_softActivityVHJets_mass);
   fChain->SetBranchAddress("nDiscardedJet", &nDiscardedJet, &b_nDiscardedJet);
   fChain->SetBranchAddress("DiscardedJet_id", DiscardedJet_id, &b_DiscardedJet_id);
   fChain->SetBranchAddress("DiscardedJet_puId", DiscardedJet_puId, &b_DiscardedJet_puId);
   fChain->SetBranchAddress("DiscardedJet_btagCSV", DiscardedJet_btagCSV, &b_DiscardedJet_btagCSV);
   fChain->SetBranchAddress("DiscardedJet_btagCMVA", DiscardedJet_btagCMVA, &b_DiscardedJet_btagCMVA);
   fChain->SetBranchAddress("DiscardedJet_rawPt", DiscardedJet_rawPt, &b_DiscardedJet_rawPt);
   fChain->SetBranchAddress("DiscardedJet_mcPt", DiscardedJet_mcPt, &b_DiscardedJet_mcPt);
   fChain->SetBranchAddress("DiscardedJet_mcFlavour", DiscardedJet_mcFlavour, &b_DiscardedJet_mcFlavour);
   fChain->SetBranchAddress("DiscardedJet_mcMatchId", DiscardedJet_mcMatchId, &b_DiscardedJet_mcMatchId);
   fChain->SetBranchAddress("DiscardedJet_corr_JECUp", DiscardedJet_corr_JECUp, &b_DiscardedJet_corr_JECUp);
   fChain->SetBranchAddress("DiscardedJet_corr_JECDown", DiscardedJet_corr_JECDown, &b_DiscardedJet_corr_JECDown);
   fChain->SetBranchAddress("DiscardedJet_corr", DiscardedJet_corr, &b_DiscardedJet_corr);
   fChain->SetBranchAddress("DiscardedJet_corr_JERUp", DiscardedJet_corr_JERUp, &b_DiscardedJet_corr_JERUp);
   fChain->SetBranchAddress("DiscardedJet_corr_JERDown", DiscardedJet_corr_JERDown, &b_DiscardedJet_corr_JERDown);
   fChain->SetBranchAddress("DiscardedJet_corr_JER", DiscardedJet_corr_JER, &b_DiscardedJet_corr_JER);
   fChain->SetBranchAddress("DiscardedJet_pt", DiscardedJet_pt, &b_DiscardedJet_pt);
   fChain->SetBranchAddress("DiscardedJet_eta", DiscardedJet_eta, &b_DiscardedJet_eta);
   fChain->SetBranchAddress("DiscardedJet_phi", DiscardedJet_phi, &b_DiscardedJet_phi);
   fChain->SetBranchAddress("DiscardedJet_mass", DiscardedJet_mass, &b_DiscardedJet_mass);
   fChain->SetBranchAddress("DiscardedJet_idxFirstTauMatch", DiscardedJet_idxFirstTauMatch, &b_DiscardedJet_idxFirstTauMatch);
   fChain->SetBranchAddress("DiscardedJet_hadronFlavour", DiscardedJet_hadronFlavour, &b_DiscardedJet_hadronFlavour);
   fChain->SetBranchAddress("DiscardedJet_btagBDT", DiscardedJet_btagBDT, &b_DiscardedJet_btagBDT);
   fChain->SetBranchAddress("DiscardedJet_btagProb", DiscardedJet_btagProb, &b_DiscardedJet_btagProb);
   fChain->SetBranchAddress("DiscardedJet_btagBProb", DiscardedJet_btagBProb, &b_DiscardedJet_btagBProb);
   fChain->SetBranchAddress("DiscardedJet_btagSoftEl", DiscardedJet_btagSoftEl, &b_DiscardedJet_btagSoftEl);
   fChain->SetBranchAddress("DiscardedJet_btagSoftMu", DiscardedJet_btagSoftMu, &b_DiscardedJet_btagSoftMu);
   fChain->SetBranchAddress("DiscardedJet_btagnew", DiscardedJet_btagnew, &b_DiscardedJet_btagnew);
   fChain->SetBranchAddress("DiscardedJet_btagCSVV0", DiscardedJet_btagCSVV0, &b_DiscardedJet_btagCSVV0);
   fChain->SetBranchAddress("DiscardedJet_chHEF", DiscardedJet_chHEF, &b_DiscardedJet_chHEF);
   fChain->SetBranchAddress("DiscardedJet_neHEF", DiscardedJet_neHEF, &b_DiscardedJet_neHEF);
   fChain->SetBranchAddress("DiscardedJet_chEmEF", DiscardedJet_chEmEF, &b_DiscardedJet_chEmEF);
   fChain->SetBranchAddress("DiscardedJet_neEmEF", DiscardedJet_neEmEF, &b_DiscardedJet_neEmEF);
   fChain->SetBranchAddress("DiscardedJet_chMult", DiscardedJet_chMult, &b_DiscardedJet_chMult);
   fChain->SetBranchAddress("DiscardedJet_leadTrackPt", DiscardedJet_leadTrackPt, &b_DiscardedJet_leadTrackPt);
   fChain->SetBranchAddress("DiscardedJet_mcEta", DiscardedJet_mcEta, &b_DiscardedJet_mcEta);
   fChain->SetBranchAddress("DiscardedJet_mcPhi", DiscardedJet_mcPhi, &b_DiscardedJet_mcPhi);
   fChain->SetBranchAddress("DiscardedJet_mcM", DiscardedJet_mcM, &b_DiscardedJet_mcM);
   fChain->SetBranchAddress("DiscardedJet_leptonPdgId", DiscardedJet_leptonPdgId, &b_DiscardedJet_leptonPdgId);
   fChain->SetBranchAddress("DiscardedJet_leptonPt", DiscardedJet_leptonPt, &b_DiscardedJet_leptonPt);
   fChain->SetBranchAddress("DiscardedJet_leptonPtRel", DiscardedJet_leptonPtRel, &b_DiscardedJet_leptonPtRel);
   fChain->SetBranchAddress("DiscardedJet_leptonPtRelInv", DiscardedJet_leptonPtRelInv, &b_DiscardedJet_leptonPtRelInv);
   fChain->SetBranchAddress("DiscardedJet_leptonDeltaR", DiscardedJet_leptonDeltaR, &b_DiscardedJet_leptonDeltaR);
   fChain->SetBranchAddress("DiscardedJet_vtxMass", DiscardedJet_vtxMass, &b_DiscardedJet_vtxMass);
   fChain->SetBranchAddress("DiscardedJet_vtxNtracks", DiscardedJet_vtxNtracks, &b_DiscardedJet_vtxNtracks);
   fChain->SetBranchAddress("DiscardedJet_vtxPt", DiscardedJet_vtxPt, &b_DiscardedJet_vtxPt);
   fChain->SetBranchAddress("DiscardedJet_vtx3DSig", DiscardedJet_vtx3DSig, &b_DiscardedJet_vtx3DSig);
   fChain->SetBranchAddress("DiscardedJet_vtx3DVal", DiscardedJet_vtx3DVal, &b_DiscardedJet_vtx3DVal);
   fChain->SetBranchAddress("DiscardedJet_vtxPosX", DiscardedJet_vtxPosX, &b_DiscardedJet_vtxPosX);
   fChain->SetBranchAddress("DiscardedJet_vtxPosY", DiscardedJet_vtxPosY, &b_DiscardedJet_vtxPosY);
   fChain->SetBranchAddress("DiscardedJet_vtxPosZ", DiscardedJet_vtxPosZ, &b_DiscardedJet_vtxPosZ);
   fChain->SetBranchAddress("DiscardedJet_qgl", DiscardedJet_qgl, &b_DiscardedJet_qgl);
   fChain->SetBranchAddress("DiscardedJet_ptd", DiscardedJet_ptd, &b_DiscardedJet_ptd);
   fChain->SetBranchAddress("DiscardedJet_axis2", DiscardedJet_axis2, &b_DiscardedJet_axis2);
   fChain->SetBranchAddress("DiscardedJet_mult", DiscardedJet_mult, &b_DiscardedJet_mult);
   fChain->SetBranchAddress("DiscardedJet_numberOfDaughters", DiscardedJet_numberOfDaughters, &b_DiscardedJet_numberOfDaughters);
   fChain->SetBranchAddress("DiscardedJet_btagIdx", DiscardedJet_btagIdx, &b_DiscardedJet_btagIdx);
   fChain->SetBranchAddress("DiscardedJet_mcIdx", DiscardedJet_mcIdx, &b_DiscardedJet_mcIdx);
   fChain->SetBranchAddress("DiscardedJet_pt_reg", DiscardedJet_pt_reg, &b_DiscardedJet_pt_reg);
   fChain->SetBranchAddress("DiscardedJet_pt_regVBF", DiscardedJet_pt_regVBF, &b_DiscardedJet_pt_regVBF);
   fChain->SetBranchAddress("DiscardedJet_blike_VBF", DiscardedJet_blike_VBF, &b_DiscardedJet_blike_VBF);
   fChain->SetBranchAddress("DiscardedJet_bTagWeightJESUp", DiscardedJet_bTagWeightJESUp, &b_DiscardedJet_bTagWeightJESUp);
   fChain->SetBranchAddress("DiscardedJet_bTagWeightJESDown", DiscardedJet_bTagWeightJESDown, &b_DiscardedJet_bTagWeightJESDown);
   fChain->SetBranchAddress("DiscardedJet_bTagWeightLFUp", DiscardedJet_bTagWeightLFUp, &b_DiscardedJet_bTagWeightLFUp);
   fChain->SetBranchAddress("DiscardedJet_bTagWeightLFDown", DiscardedJet_bTagWeightLFDown, &b_DiscardedJet_bTagWeightLFDown);
   fChain->SetBranchAddress("DiscardedJet_bTagWeightHFUp", DiscardedJet_bTagWeightHFUp, &b_DiscardedJet_bTagWeightHFUp);
   fChain->SetBranchAddress("DiscardedJet_bTagWeightHFDown", DiscardedJet_bTagWeightHFDown, &b_DiscardedJet_bTagWeightHFDown);
   fChain->SetBranchAddress("DiscardedJet_bTagWeightStats1Up", DiscardedJet_bTagWeightStats1Up, &b_DiscardedJet_bTagWeightStats1Up);
   fChain->SetBranchAddress("DiscardedJet_bTagWeightStats1Down", DiscardedJet_bTagWeightStats1Down, &b_DiscardedJet_bTagWeightStats1Down);
   fChain->SetBranchAddress("DiscardedJet_bTagWeightStats2Up", DiscardedJet_bTagWeightStats2Up, &b_DiscardedJet_bTagWeightStats2Up);
   fChain->SetBranchAddress("DiscardedJet_bTagWeightStats2Down", DiscardedJet_bTagWeightStats2Down, &b_DiscardedJet_bTagWeightStats2Down);
   fChain->SetBranchAddress("DiscardedJet_bTagWeight", DiscardedJet_bTagWeight, &b_DiscardedJet_bTagWeight);
   fChain->SetBranchAddress("nSubjetAK08pruned", &nSubjetAK08pruned, &b_nSubjetAK08pruned);
   fChain->SetBranchAddress("SubjetAK08pruned_pt", SubjetAK08pruned_pt, &b_SubjetAK08pruned_pt);
   fChain->SetBranchAddress("SubjetAK08pruned_eta", SubjetAK08pruned_eta, &b_SubjetAK08pruned_eta);
   fChain->SetBranchAddress("SubjetAK08pruned_phi", SubjetAK08pruned_phi, &b_SubjetAK08pruned_phi);
   fChain->SetBranchAddress("SubjetAK08pruned_mass", SubjetAK08pruned_mass, &b_SubjetAK08pruned_mass);
   fChain->SetBranchAddress("SubjetAK08pruned_btag", SubjetAK08pruned_btag, &b_SubjetAK08pruned_btag);
   fChain->SetBranchAddress("nTauGood", &nTauGood, &b_nTauGood);
   fChain->SetBranchAddress("TauGood_charge", TauGood_charge, &b_TauGood_charge);
   fChain->SetBranchAddress("TauGood_decayMode", TauGood_decayMode, &b_TauGood_decayMode);
   fChain->SetBranchAddress("TauGood_idDecayMode", TauGood_idDecayMode, &b_TauGood_idDecayMode);
   fChain->SetBranchAddress("TauGood_idDecayModeNewDMs", TauGood_idDecayModeNewDMs, &b_TauGood_idDecayModeNewDMs);
   fChain->SetBranchAddress("TauGood_dxy", TauGood_dxy, &b_TauGood_dxy);
   fChain->SetBranchAddress("TauGood_dz", TauGood_dz, &b_TauGood_dz);
   fChain->SetBranchAddress("TauGood_idMVA", TauGood_idMVA, &b_TauGood_idMVA);
   fChain->SetBranchAddress("TauGood_idMVANewDM", TauGood_idMVANewDM, &b_TauGood_idMVANewDM);
   fChain->SetBranchAddress("TauGood_idCI3hit", TauGood_idCI3hit, &b_TauGood_idCI3hit);
   fChain->SetBranchAddress("TauGood_idAntiMu", TauGood_idAntiMu, &b_TauGood_idAntiMu);
   fChain->SetBranchAddress("TauGood_idAntiE", TauGood_idAntiE, &b_TauGood_idAntiE);
   fChain->SetBranchAddress("TauGood_isoCI3hit", TauGood_isoCI3hit, &b_TauGood_isoCI3hit);
   fChain->SetBranchAddress("TauGood_mcMatchId", TauGood_mcMatchId, &b_TauGood_mcMatchId);
   fChain->SetBranchAddress("TauGood_pdgId", TauGood_pdgId, &b_TauGood_pdgId);
   fChain->SetBranchAddress("TauGood_pt", TauGood_pt, &b_TauGood_pt);
   fChain->SetBranchAddress("TauGood_eta", TauGood_eta, &b_TauGood_eta);
   fChain->SetBranchAddress("TauGood_phi", TauGood_phi, &b_TauGood_phi);
   fChain->SetBranchAddress("TauGood_mass", TauGood_mass, &b_TauGood_mass);
   fChain->SetBranchAddress("TauGood_idxJetMatch", TauGood_idxJetMatch, &b_TauGood_idxJetMatch);
   fChain->SetBranchAddress("TauGood_genMatchType", TauGood_genMatchType, &b_TauGood_genMatchType);
   fChain->SetBranchAddress("nhJidx", &nhJidx, &b_nhJidx);
   fChain->SetBranchAddress("hJidx", hJidx, &b_hJidx);
   fChain->SetBranchAddress("nGenLep", &nGenLep, &b_nGenLep);
   fChain->SetBranchAddress("GenLep_pdgId", GenLep_pdgId, &b_GenLep_pdgId);
   fChain->SetBranchAddress("GenLep_pt", GenLep_pt, &b_GenLep_pt);
   fChain->SetBranchAddress("GenLep_eta", GenLep_eta, &b_GenLep_eta);
   fChain->SetBranchAddress("GenLep_phi", GenLep_phi, &b_GenLep_phi);
   fChain->SetBranchAddress("GenLep_mass", GenLep_mass, &b_GenLep_mass);
   fChain->SetBranchAddress("GenLep_charge", GenLep_charge, &b_GenLep_charge);
   fChain->SetBranchAddress("GenLep_status", GenLep_status, &b_GenLep_status);
   fChain->SetBranchAddress("nSubjetAK08softdrop", &nSubjetAK08softdrop, &b_nSubjetAK08softdrop);
   fChain->SetBranchAddress("SubjetAK08softdrop_pt", SubjetAK08softdrop_pt, &b_SubjetAK08softdrop_pt);
   fChain->SetBranchAddress("SubjetAK08softdrop_eta", SubjetAK08softdrop_eta, &b_SubjetAK08softdrop_eta);
   fChain->SetBranchAddress("SubjetAK08softdrop_phi", SubjetAK08softdrop_phi, &b_SubjetAK08softdrop_phi);
   fChain->SetBranchAddress("SubjetAK08softdrop_mass", SubjetAK08softdrop_mass, &b_SubjetAK08softdrop_mass);
   fChain->SetBranchAddress("SubjetAK08softdrop_btag", SubjetAK08softdrop_btag, &b_SubjetAK08softdrop_btag);
   fChain->SetBranchAddress("nGenHadTaus", &nGenHadTaus, &b_nGenHadTaus);
   fChain->SetBranchAddress("GenHadTaus_charge", GenHadTaus_charge, &b_GenHadTaus_charge);
   fChain->SetBranchAddress("GenHadTaus_status", GenHadTaus_status, &b_GenHadTaus_status);
   fChain->SetBranchAddress("GenHadTaus_pdgId", GenHadTaus_pdgId, &b_GenHadTaus_pdgId);
   fChain->SetBranchAddress("GenHadTaus_pt", GenHadTaus_pt, &b_GenHadTaus_pt);
   fChain->SetBranchAddress("GenHadTaus_eta", GenHadTaus_eta, &b_GenHadTaus_eta);
   fChain->SetBranchAddress("GenHadTaus_phi", GenHadTaus_phi, &b_GenHadTaus_phi);
   fChain->SetBranchAddress("GenHadTaus_mass", GenHadTaus_mass, &b_GenHadTaus_mass);
   fChain->SetBranchAddress("GenHadTaus_decayMode", GenHadTaus_decayMode, &b_GenHadTaus_decayMode);
   fChain->SetBranchAddress("nhttCandidates", &nhttCandidates, &b_nhttCandidates);
   fChain->SetBranchAddress("httCandidates_pt", httCandidates_pt, &b_httCandidates_pt);
   fChain->SetBranchAddress("httCandidates_eta", httCandidates_eta, &b_httCandidates_eta);
   fChain->SetBranchAddress("httCandidates_phi", httCandidates_phi, &b_httCandidates_phi);
   fChain->SetBranchAddress("httCandidates_mass", httCandidates_mass, &b_httCandidates_mass);
   fChain->SetBranchAddress("httCandidates_fRec", httCandidates_fRec, &b_httCandidates_fRec);
   fChain->SetBranchAddress("httCandidates_Ropt", httCandidates_Ropt, &b_httCandidates_Ropt);
   fChain->SetBranchAddress("httCandidates_RoptCalc", httCandidates_RoptCalc, &b_httCandidates_RoptCalc);
   fChain->SetBranchAddress("httCandidates_ptForRoptCalc", httCandidates_ptForRoptCalc, &b_httCandidates_ptForRoptCalc);
   fChain->SetBranchAddress("httCandidates_sjW1pt", httCandidates_sjW1pt, &b_httCandidates_sjW1pt);
   fChain->SetBranchAddress("httCandidates_sjW1eta", httCandidates_sjW1eta, &b_httCandidates_sjW1eta);
   fChain->SetBranchAddress("httCandidates_sjW1phi", httCandidates_sjW1phi, &b_httCandidates_sjW1phi);
   fChain->SetBranchAddress("httCandidates_sjW1mass", httCandidates_sjW1mass, &b_httCandidates_sjW1mass);
   fChain->SetBranchAddress("httCandidates_sjW1btag", httCandidates_sjW1btag, &b_httCandidates_sjW1btag);
   fChain->SetBranchAddress("httCandidates_sjW2pt", httCandidates_sjW2pt, &b_httCandidates_sjW2pt);
   fChain->SetBranchAddress("httCandidates_sjW2eta", httCandidates_sjW2eta, &b_httCandidates_sjW2eta);
   fChain->SetBranchAddress("httCandidates_sjW2phi", httCandidates_sjW2phi, &b_httCandidates_sjW2phi);
   fChain->SetBranchAddress("httCandidates_sjW2mass", httCandidates_sjW2mass, &b_httCandidates_sjW2mass);
   fChain->SetBranchAddress("httCandidates_sjW2btag", httCandidates_sjW2btag, &b_httCandidates_sjW2btag);
   fChain->SetBranchAddress("httCandidates_sjNonWpt", httCandidates_sjNonWpt, &b_httCandidates_sjNonWpt);
   fChain->SetBranchAddress("httCandidates_sjNonWeta", httCandidates_sjNonWeta, &b_httCandidates_sjNonWeta);
   fChain->SetBranchAddress("httCandidates_sjNonWphi", httCandidates_sjNonWphi, &b_httCandidates_sjNonWphi);
   fChain->SetBranchAddress("httCandidates_sjNonWmass", httCandidates_sjNonWmass, &b_httCandidates_sjNonWmass);
   fChain->SetBranchAddress("httCandidates_sjNonWbtag", httCandidates_sjNonWbtag, &b_httCandidates_sjNonWbtag);
   fChain->SetBranchAddress("nJet", &nJet, &b_nJet);
   fChain->SetBranchAddress("Jet_id", Jet_id, &b_Jet_id);
   fChain->SetBranchAddress("Jet_puId", Jet_puId, &b_Jet_puId);
   fChain->SetBranchAddress("Jet_btagCSV", Jet_btagCSV, &b_Jet_btagCSV);
   fChain->SetBranchAddress("Jet_btagCMVA", Jet_btagCMVA, &b_Jet_btagCMVA);
   fChain->SetBranchAddress("Jet_rawPt", Jet_rawPt, &b_Jet_rawPt);
   fChain->SetBranchAddress("Jet_mcPt", Jet_mcPt, &b_Jet_mcPt);
   fChain->SetBranchAddress("Jet_mcFlavour", Jet_mcFlavour, &b_Jet_mcFlavour);
   fChain->SetBranchAddress("Jet_mcMatchId", Jet_mcMatchId, &b_Jet_mcMatchId);
   fChain->SetBranchAddress("Jet_corr_JECUp", Jet_corr_JECUp, &b_Jet_corr_JECUp);
   fChain->SetBranchAddress("Jet_corr_JECDown", Jet_corr_JECDown, &b_Jet_corr_JECDown);
   fChain->SetBranchAddress("Jet_corr", Jet_corr, &b_Jet_corr);
   fChain->SetBranchAddress("Jet_corr_JERUp", Jet_corr_JERUp, &b_Jet_corr_JERUp);
   fChain->SetBranchAddress("Jet_corr_JERDown", Jet_corr_JERDown, &b_Jet_corr_JERDown);
   fChain->SetBranchAddress("Jet_corr_JER", Jet_corr_JER, &b_Jet_corr_JER);
   fChain->SetBranchAddress("Jet_pt", Jet_pt, &b_Jet_pt);
   fChain->SetBranchAddress("Jet_eta", Jet_eta, &b_Jet_eta);
   fChain->SetBranchAddress("Jet_phi", Jet_phi, &b_Jet_phi);
   fChain->SetBranchAddress("Jet_mass", Jet_mass, &b_Jet_mass);
   fChain->SetBranchAddress("Jet_idxFirstTauMatch", Jet_idxFirstTauMatch, &b_Jet_idxFirstTauMatch);
   fChain->SetBranchAddress("Jet_hadronFlavour", Jet_hadronFlavour, &b_Jet_hadronFlavour);
   fChain->SetBranchAddress("Jet_btagBDT", Jet_btagBDT, &b_Jet_btagBDT);
   fChain->SetBranchAddress("Jet_btagProb", Jet_btagProb, &b_Jet_btagProb);
   fChain->SetBranchAddress("Jet_btagBProb", Jet_btagBProb, &b_Jet_btagBProb);
   fChain->SetBranchAddress("Jet_btagSoftEl", Jet_btagSoftEl, &b_Jet_btagSoftEl);
   fChain->SetBranchAddress("Jet_btagSoftMu", Jet_btagSoftMu, &b_Jet_btagSoftMu);
   fChain->SetBranchAddress("Jet_btagnew", Jet_btagnew, &b_Jet_btagnew);
   fChain->SetBranchAddress("Jet_btagCSVV0", Jet_btagCSVV0, &b_Jet_btagCSVV0);
   fChain->SetBranchAddress("Jet_chHEF", Jet_chHEF, &b_Jet_chHEF);
   fChain->SetBranchAddress("Jet_neHEF", Jet_neHEF, &b_Jet_neHEF);
   fChain->SetBranchAddress("Jet_chEmEF", Jet_chEmEF, &b_Jet_chEmEF);
   fChain->SetBranchAddress("Jet_neEmEF", Jet_neEmEF, &b_Jet_neEmEF);
   fChain->SetBranchAddress("Jet_chMult", Jet_chMult, &b_Jet_chMult);
   fChain->SetBranchAddress("Jet_leadTrackPt", Jet_leadTrackPt, &b_Jet_leadTrackPt);
   fChain->SetBranchAddress("Jet_mcEta", Jet_mcEta, &b_Jet_mcEta);
   fChain->SetBranchAddress("Jet_mcPhi", Jet_mcPhi, &b_Jet_mcPhi);
   fChain->SetBranchAddress("Jet_mcM", Jet_mcM, &b_Jet_mcM);
   fChain->SetBranchAddress("Jet_leptonPdgId", Jet_leptonPdgId, &b_Jet_leptonPdgId);
   fChain->SetBranchAddress("Jet_leptonPt", Jet_leptonPt, &b_Jet_leptonPt);
   fChain->SetBranchAddress("Jet_leptonPtRel", Jet_leptonPtRel, &b_Jet_leptonPtRel);
   fChain->SetBranchAddress("Jet_leptonPtRelInv", Jet_leptonPtRelInv, &b_Jet_leptonPtRelInv);
   fChain->SetBranchAddress("Jet_leptonDeltaR", Jet_leptonDeltaR, &b_Jet_leptonDeltaR);
   fChain->SetBranchAddress("Jet_vtxMass", Jet_vtxMass, &b_Jet_vtxMass);
   fChain->SetBranchAddress("Jet_vtxNtracks", Jet_vtxNtracks, &b_Jet_vtxNtracks);
   fChain->SetBranchAddress("Jet_vtxPt", Jet_vtxPt, &b_Jet_vtxPt);
   fChain->SetBranchAddress("Jet_vtx3DSig", Jet_vtx3DSig, &b_Jet_vtx3DSig);
   fChain->SetBranchAddress("Jet_vtx3DVal", Jet_vtx3DVal, &b_Jet_vtx3DVal);
   fChain->SetBranchAddress("Jet_vtxPosX", Jet_vtxPosX, &b_Jet_vtxPosX);
   fChain->SetBranchAddress("Jet_vtxPosY", Jet_vtxPosY, &b_Jet_vtxPosY);
   fChain->SetBranchAddress("Jet_vtxPosZ", Jet_vtxPosZ, &b_Jet_vtxPosZ);
   fChain->SetBranchAddress("Jet_qgl", Jet_qgl, &b_Jet_qgl);
   fChain->SetBranchAddress("Jet_ptd", Jet_ptd, &b_Jet_ptd);
   fChain->SetBranchAddress("Jet_axis2", Jet_axis2, &b_Jet_axis2);
   fChain->SetBranchAddress("Jet_mult", Jet_mult, &b_Jet_mult);
   fChain->SetBranchAddress("Jet_numberOfDaughters", Jet_numberOfDaughters, &b_Jet_numberOfDaughters);
   fChain->SetBranchAddress("Jet_btagIdx", Jet_btagIdx, &b_Jet_btagIdx);
   fChain->SetBranchAddress("Jet_mcIdx", Jet_mcIdx, &b_Jet_mcIdx);
   fChain->SetBranchAddress("Jet_pt_reg", Jet_pt_reg, &b_Jet_pt_reg);
   fChain->SetBranchAddress("Jet_pt_regVBF", Jet_pt_regVBF, &b_Jet_pt_regVBF);
   fChain->SetBranchAddress("Jet_blike_VBF", Jet_blike_VBF, &b_Jet_blike_VBF);
   fChain->SetBranchAddress("Jet_bTagWeightJESUp", Jet_bTagWeightJESUp, &b_Jet_bTagWeightJESUp);
   fChain->SetBranchAddress("Jet_bTagWeightJESDown", Jet_bTagWeightJESDown, &b_Jet_bTagWeightJESDown);
   fChain->SetBranchAddress("Jet_bTagWeightLFUp", Jet_bTagWeightLFUp, &b_Jet_bTagWeightLFUp);
   fChain->SetBranchAddress("Jet_bTagWeightLFDown", Jet_bTagWeightLFDown, &b_Jet_bTagWeightLFDown);
   fChain->SetBranchAddress("Jet_bTagWeightHFUp", Jet_bTagWeightHFUp, &b_Jet_bTagWeightHFUp);
   fChain->SetBranchAddress("Jet_bTagWeightHFDown", Jet_bTagWeightHFDown, &b_Jet_bTagWeightHFDown);
   fChain->SetBranchAddress("Jet_bTagWeightStats1Up", Jet_bTagWeightStats1Up, &b_Jet_bTagWeightStats1Up);
   fChain->SetBranchAddress("Jet_bTagWeightStats1Down", Jet_bTagWeightStats1Down, &b_Jet_bTagWeightStats1Down);
   fChain->SetBranchAddress("Jet_bTagWeightStats2Up", Jet_bTagWeightStats2Up, &b_Jet_bTagWeightStats2Up);
   fChain->SetBranchAddress("Jet_bTagWeightStats2Down", Jet_bTagWeightStats2Down, &b_Jet_bTagWeightStats2Down);
   fChain->SetBranchAddress("Jet_bTagWeight", Jet_bTagWeight, &b_Jet_bTagWeight);
   fChain->SetBranchAddress("nFatjetCA15softdrop", &nFatjetCA15softdrop, &b_nFatjetCA15softdrop);
   fChain->SetBranchAddress("FatjetCA15softdrop_pt", FatjetCA15softdrop_pt, &b_FatjetCA15softdrop_pt);
   fChain->SetBranchAddress("FatjetCA15softdrop_eta", FatjetCA15softdrop_eta, &b_FatjetCA15softdrop_eta);
   fChain->SetBranchAddress("FatjetCA15softdrop_phi", FatjetCA15softdrop_phi, &b_FatjetCA15softdrop_phi);
   fChain->SetBranchAddress("FatjetCA15softdrop_mass", FatjetCA15softdrop_mass, &b_FatjetCA15softdrop_mass);
   fChain->SetBranchAddress("nvLeptons", &nvLeptons, &b_nvLeptons);
   fChain->SetBranchAddress("vLeptons_charge", vLeptons_charge, &b_vLeptons_charge);
   fChain->SetBranchAddress("vLeptons_tightId", vLeptons_tightId, &b_vLeptons_tightId);
   fChain->SetBranchAddress("vLeptons_eleCutIdCSA14_25ns_v1", vLeptons_eleCutIdCSA14_25ns_v1, &b_vLeptons_eleCutIdCSA14_25ns_v1);
   fChain->SetBranchAddress("vLeptons_eleCutIdCSA14_50ns_v1", vLeptons_eleCutIdCSA14_50ns_v1, &b_vLeptons_eleCutIdCSA14_50ns_v1);
   fChain->SetBranchAddress("vLeptons_eleCutIdSpring15_25ns_v1", vLeptons_eleCutIdSpring15_25ns_v1, &b_vLeptons_eleCutIdSpring15_25ns_v1);
   fChain->SetBranchAddress("vLeptons_dxy", vLeptons_dxy, &b_vLeptons_dxy);
   fChain->SetBranchAddress("vLeptons_dz", vLeptons_dz, &b_vLeptons_dz);
   fChain->SetBranchAddress("vLeptons_edxy", vLeptons_edxy, &b_vLeptons_edxy);
   fChain->SetBranchAddress("vLeptons_edz", vLeptons_edz, &b_vLeptons_edz);
   fChain->SetBranchAddress("vLeptons_ip3d", vLeptons_ip3d, &b_vLeptons_ip3d);
   fChain->SetBranchAddress("vLeptons_sip3d", vLeptons_sip3d, &b_vLeptons_sip3d);
   fChain->SetBranchAddress("vLeptons_convVeto", vLeptons_convVeto, &b_vLeptons_convVeto);
   fChain->SetBranchAddress("vLeptons_lostHits", vLeptons_lostHits, &b_vLeptons_lostHits);
   fChain->SetBranchAddress("vLeptons_relIso03", vLeptons_relIso03, &b_vLeptons_relIso03);
   fChain->SetBranchAddress("vLeptons_relIso04", vLeptons_relIso04, &b_vLeptons_relIso04);
   fChain->SetBranchAddress("vLeptons_miniRelIso", vLeptons_miniRelIso, &b_vLeptons_miniRelIso);
   fChain->SetBranchAddress("vLeptons_tightCharge", vLeptons_tightCharge, &b_vLeptons_tightCharge);
   fChain->SetBranchAddress("vLeptons_mcMatchId", vLeptons_mcMatchId, &b_vLeptons_mcMatchId);
   fChain->SetBranchAddress("vLeptons_mcMatchAny", vLeptons_mcMatchAny, &b_vLeptons_mcMatchAny);
   fChain->SetBranchAddress("vLeptons_mcMatchTau", vLeptons_mcMatchTau, &b_vLeptons_mcMatchTau);
   fChain->SetBranchAddress("vLeptons_mcPt", vLeptons_mcPt, &b_vLeptons_mcPt);
   fChain->SetBranchAddress("vLeptons_mediumMuonId", vLeptons_mediumMuonId, &b_vLeptons_mediumMuonId);
   fChain->SetBranchAddress("vLeptons_pdgId", vLeptons_pdgId, &b_vLeptons_pdgId);
   fChain->SetBranchAddress("vLeptons_pt", vLeptons_pt, &b_vLeptons_pt);
   fChain->SetBranchAddress("vLeptons_eta", vLeptons_eta, &b_vLeptons_eta);
   fChain->SetBranchAddress("vLeptons_phi", vLeptons_phi, &b_vLeptons_phi);
   fChain->SetBranchAddress("vLeptons_mass", vLeptons_mass, &b_vLeptons_mass);
   fChain->SetBranchAddress("vLeptons_looseIdSusy", vLeptons_looseIdSusy, &b_vLeptons_looseIdSusy);
   fChain->SetBranchAddress("vLeptons_looseIdPOG", vLeptons_looseIdPOG, &b_vLeptons_looseIdPOG);
   fChain->SetBranchAddress("vLeptons_chargedHadRelIso03", vLeptons_chargedHadRelIso03, &b_vLeptons_chargedHadRelIso03);
   fChain->SetBranchAddress("vLeptons_chargedHadRelIso04", vLeptons_chargedHadRelIso04, &b_vLeptons_chargedHadRelIso04);
   fChain->SetBranchAddress("vLeptons_eleSieie", vLeptons_eleSieie, &b_vLeptons_eleSieie);
   fChain->SetBranchAddress("vLeptons_eleDEta", vLeptons_eleDEta, &b_vLeptons_eleDEta);
   fChain->SetBranchAddress("vLeptons_eleDPhi", vLeptons_eleDPhi, &b_vLeptons_eleDPhi);
   fChain->SetBranchAddress("vLeptons_eleHoE", vLeptons_eleHoE, &b_vLeptons_eleHoE);
   fChain->SetBranchAddress("vLeptons_eleMissingHits", vLeptons_eleMissingHits, &b_vLeptons_eleMissingHits);
   fChain->SetBranchAddress("vLeptons_eleChi2", vLeptons_eleChi2, &b_vLeptons_eleChi2);
   fChain->SetBranchAddress("vLeptons_nStations", vLeptons_nStations, &b_vLeptons_nStations);
   fChain->SetBranchAddress("vLeptons_trkKink", vLeptons_trkKink, &b_vLeptons_trkKink);
   fChain->SetBranchAddress("vLeptons_caloCompatibility", vLeptons_caloCompatibility, &b_vLeptons_caloCompatibility);
   fChain->SetBranchAddress("vLeptons_globalTrackChi2", vLeptons_globalTrackChi2, &b_vLeptons_globalTrackChi2);
   fChain->SetBranchAddress("vLeptons_nChamberHits", vLeptons_nChamberHits, &b_vLeptons_nChamberHits);
   fChain->SetBranchAddress("vLeptons_isPFMuon", vLeptons_isPFMuon, &b_vLeptons_isPFMuon);
   fChain->SetBranchAddress("vLeptons_isGlobalMuon", vLeptons_isGlobalMuon, &b_vLeptons_isGlobalMuon);
   fChain->SetBranchAddress("vLeptons_isTrackerMuon", vLeptons_isTrackerMuon, &b_vLeptons_isTrackerMuon);
   fChain->SetBranchAddress("vLeptons_pixelHits", vLeptons_pixelHits, &b_vLeptons_pixelHits);
   fChain->SetBranchAddress("vLeptons_trackerLayers", vLeptons_trackerLayers, &b_vLeptons_trackerLayers);
   fChain->SetBranchAddress("vLeptons_pixelLayers", vLeptons_pixelLayers, &b_vLeptons_pixelLayers);
   fChain->SetBranchAddress("vLeptons_mvaTTH", vLeptons_mvaTTH, &b_vLeptons_mvaTTH);
   fChain->SetBranchAddress("vLeptons_jetOverlapIdx", vLeptons_jetOverlapIdx, &b_vLeptons_jetOverlapIdx);
   fChain->SetBranchAddress("vLeptons_jetPtRatio", vLeptons_jetPtRatio, &b_vLeptons_jetPtRatio);
   fChain->SetBranchAddress("vLeptons_jetBTagCSV", vLeptons_jetBTagCSV, &b_vLeptons_jetBTagCSV);
   fChain->SetBranchAddress("vLeptons_jetDR", vLeptons_jetDR, &b_vLeptons_jetDR);
   fChain->SetBranchAddress("vLeptons_pfRelIso03", vLeptons_pfRelIso03, &b_vLeptons_pfRelIso03);
   fChain->SetBranchAddress("vLeptons_pfRelIso04", vLeptons_pfRelIso04, &b_vLeptons_pfRelIso04);
   fChain->SetBranchAddress("vLeptons_etaSc", vLeptons_etaSc, &b_vLeptons_etaSc);
   fChain->SetBranchAddress("vLeptons_eleExpMissingInnerHits", vLeptons_eleExpMissingInnerHits, &b_vLeptons_eleExpMissingInnerHits);
   fChain->SetBranchAddress("vLeptons_eleooEmooP", vLeptons_eleooEmooP, &b_vLeptons_eleooEmooP);
   fChain->SetBranchAddress("npileUpVertex_z", &npileUpVertex_z, &b_npileUpVertex_z);
   fChain->SetBranchAddress("pileUpVertex_z", pileUpVertex_z, &b_pileUpVertex_z);
   fChain->SetBranchAddress("nprimaryVertices", &nprimaryVertices, &b_nprimaryVertices);
   fChain->SetBranchAddress("primaryVertices_x", primaryVertices_x, &b_primaryVertices_x);
   fChain->SetBranchAddress("primaryVertices_y", primaryVertices_y, &b_primaryVertices_y);
   fChain->SetBranchAddress("primaryVertices_z", primaryVertices_z, &b_primaryVertices_z);
   fChain->SetBranchAddress("primaryVertices_isFake", primaryVertices_isFake, &b_primaryVertices_isFake);
   fChain->SetBranchAddress("primaryVertices_ndof", primaryVertices_ndof, &b_primaryVertices_ndof);
   fChain->SetBranchAddress("primaryVertices_Rho", primaryVertices_Rho, &b_primaryVertices_Rho);
   fChain->SetBranchAddress("nsoftActivityJets", &nsoftActivityJets, &b_nsoftActivityJets);
   fChain->SetBranchAddress("softActivityJets_pt", softActivityJets_pt, &b_softActivityJets_pt);
   fChain->SetBranchAddress("softActivityJets_eta", softActivityJets_eta, &b_softActivityJets_eta);
   fChain->SetBranchAddress("softActivityJets_phi", softActivityJets_phi, &b_softActivityJets_phi);
   fChain->SetBranchAddress("softActivityJets_mass", softActivityJets_mass, &b_softActivityJets_mass);
   fChain->SetBranchAddress("nFatjetCA15softdropz2b1", &nFatjetCA15softdropz2b1, &b_nFatjetCA15softdropz2b1);
   fChain->SetBranchAddress("FatjetCA15softdropz2b1_pt", FatjetCA15softdropz2b1_pt, &b_FatjetCA15softdropz2b1_pt);
   fChain->SetBranchAddress("FatjetCA15softdropz2b1_eta", FatjetCA15softdropz2b1_eta, &b_FatjetCA15softdropz2b1_eta);
   fChain->SetBranchAddress("FatjetCA15softdropz2b1_phi", FatjetCA15softdropz2b1_phi, &b_FatjetCA15softdropz2b1_phi);
   fChain->SetBranchAddress("FatjetCA15softdropz2b1_mass", FatjetCA15softdropz2b1_mass, &b_FatjetCA15softdropz2b1_mass);
   fChain->SetBranchAddress("FatjetCA15softdropz2b1_tau1", FatjetCA15softdropz2b1_tau1, &b_FatjetCA15softdropz2b1_tau1);
   fChain->SetBranchAddress("FatjetCA15softdropz2b1_tau2", FatjetCA15softdropz2b1_tau2, &b_FatjetCA15softdropz2b1_tau2);
   fChain->SetBranchAddress("FatjetCA15softdropz2b1_tau3", FatjetCA15softdropz2b1_tau3, &b_FatjetCA15softdropz2b1_tau3);
   fChain->SetBranchAddress("nGenWZQuark", &nGenWZQuark, &b_nGenWZQuark);
   fChain->SetBranchAddress("GenWZQuark_pdgId", &GenWZQuark_pdgId, &b_GenWZQuark_pdgId);
   fChain->SetBranchAddress("GenWZQuark_pt", &GenWZQuark_pt, &b_GenWZQuark_pt);
   fChain->SetBranchAddress("GenWZQuark_eta", &GenWZQuark_eta, &b_GenWZQuark_eta);
   fChain->SetBranchAddress("GenWZQuark_phi", &GenWZQuark_phi, &b_GenWZQuark_phi);
   fChain->SetBranchAddress("GenWZQuark_mass", &GenWZQuark_mass, &b_GenWZQuark_mass);
   fChain->SetBranchAddress("GenWZQuark_charge", &GenWZQuark_charge, &b_GenWZQuark_charge);
   fChain->SetBranchAddress("GenWZQuark_status", &GenWZQuark_status, &b_GenWZQuark_status);
   fChain->SetBranchAddress("nGenBQuarkFromTop", &nGenBQuarkFromTop, &b_nGenBQuarkFromTop);
   fChain->SetBranchAddress("GenBQuarkFromTop_pdgId", &GenBQuarkFromTop_pdgId, &b_GenBQuarkFromTop_pdgId);
   fChain->SetBranchAddress("GenBQuarkFromTop_pt", &GenBQuarkFromTop_pt, &b_GenBQuarkFromTop_pt);
   fChain->SetBranchAddress("GenBQuarkFromTop_eta", &GenBQuarkFromTop_eta, &b_GenBQuarkFromTop_eta);
   fChain->SetBranchAddress("GenBQuarkFromTop_phi", &GenBQuarkFromTop_phi, &b_GenBQuarkFromTop_phi);
   fChain->SetBranchAddress("GenBQuarkFromTop_mass", &GenBQuarkFromTop_mass, &b_GenBQuarkFromTop_mass);
   fChain->SetBranchAddress("GenBQuarkFromTop_charge", &GenBQuarkFromTop_charge, &b_GenBQuarkFromTop_charge);
   fChain->SetBranchAddress("GenBQuarkFromTop_status", &GenBQuarkFromTop_status, &b_GenBQuarkFromTop_status);
   Notify();
}

Bool_t treeForRegression_Wln::Notify()
{
   // The Notify() function is called zllen a new file is opened. This
   // can be either for a new TTree in a TChain or zllen zllen a new TTree
   // is started zllen using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void treeForRegression_Wln::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t treeForRegression_Wln::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef treeForRegression_Wln_cxx
