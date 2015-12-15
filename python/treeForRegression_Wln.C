#define treeForRegression_Wln_cxx
#include "treeForRegression_Wln.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include "TLorentzVector.h"
#include <TH1F.h>
#include <string>
#include <sstream>
#include <map>
#include <cmath>
#include <TH2F.h>
#include <TH3F.h>
#include <TROOT.h>
#include <TFile.h>
#include <TTree.h>
#include <TSystem.h>
#include <TChain.h>
#include <TLorentzVector.h>
#include <TLegend.h>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

double deltaPhi(double phi1, double phi2)
{
	double PI = 3.14159265;
	double result = phi1 - phi2;
	while (result > PI) result -= 2*PI;
	while (result <= -PI) result += 2*PI;
	return result;
}
void treeForRegression_Wln::Loop()
{
	if (fChain == 0) return;

	Long64_t nentries = fChain->GetEntriesFast();
	std::cout<< " nentries "<<nentries<<std::endl;
	Long64_t nbytes = 0, nb = 0;
	TFile *outfile=new TFile("/eos/uscms/store/user/cvernier/zll_RegressionPerJet.root", "recreate");
	int Jet_vtxNtrk;
	float Jet_mass_,Jet_corr_, Jet_e_, Jet_mt_, rho_, Jet_pt_,Jet_eta_,Jet_phi_, Jet_leptonPtRel_,Jet_leptonDeltaR_,Jet_leptonPt_, Jet_leptonPtRelInv_, Jet_leadTrackPt_, Jet_chHEF_, Jet_chEmEF_, Jet_neHEF_, Jet_neEmEF_, Jet_vtx3dL_, Jet_vtx3deL_, Jet_chMult_, Jet_mcPt_, Jet_mcEta_, Jet_mcPhi_, Jet_mcM_,  Jet_vtxMass_, Jet_csv_, Jet_flavor_,  met_pt_, met_phi_, Jet_btagCSV_, Jet_mcFlavour_, Jet_id_, Jet_puId_, Jet_met_dPhi_, Jet_mcE_, Jet_btagCSV_, Jet_mcMatchId_, Jet_mt_, Jet_vtxMass_, Jet_vtx3dL, Jet_vtx3deL, Jet_vtxPt_, dR_, Jet_mcPtq_;
	Jet_mass_=-999,Jet_corr_=-999, Jet_e_=-999, Jet_mt_=-999, rho_=-999, Jet_pt_=-999,Jet_eta_=-999,Jet_phi_=-999, Jet_leptonPtRel_=-999,Jet_leptonDeltaR_=-999,Jet_leptonPt_=-999, Jet_leptonPtRelInv_=-999, Jet_leadTrackPt_=-999, Jet_chHEF_=-999, Jet_chEmEF_=-999, Jet_neHEF_=-999, Jet_neEmEF_=-999, Jet_vtx3dL_=-999, Jet_vtx3deL_=-999, Jet_chMult_=-999, Jet_mcPt_=-999, Jet_mcEta_=-999, Jet_mcPhi_=-999, Jet_mcM_=-999,  Jet_vtxMass_=-999, Jet_csv_=-999, Jet_flavor_=-999,  met_pt_=-999, met_phi_=-999, Jet_btagCSV_=-999, Jet_mcFlavour_=-999,  Jet_id_=-999, Jet_puId_=-999 , Jet_met_dPhi_=-999, Jet_mcE_=-999, Jet_btagCSV_=-999, Jet_mcMatchId_=-999, Jet_mt_=-999, Jet_vtxMass_=-999., Jet_vtx3dL=-999., Jet_vtx3deL=-999., Jet_vtxPt_ =-999., Jet_mcPtq_=-999.;
	Jet_vtxNtrk= 999;
	TTree *outtree = new TTree("tree", "tree");

	outtree->Branch("Jet_vtxNtrk",            &Jet_vtxNtrk ,"Jet_vtxNtrk/I");
	outtree->Branch("Jet_vtxMass",            &Jet_vtxMass_ ,"Jet_vtxMass_/F");
	outtree->Branch("Jet_vtx3dL",            &Jet_vtx3dL_ ,"Jet_vtx3dL_/F");
	outtree->Branch("Jet_vtx3deL",            &Jet_vtx3deL_ ,"Jet_vtx3deL_/F");
	outtree->Branch("Jet_vtxPt",            &Jet_vtxPt_ ,"Jet_vtxPt_/F");
	outtree->Branch("Jet_id",            &Jet_id_ ,"Jet_id_/F");
	outtree->Branch("dR",            &dR_ ,"dR_/F");
	outtree->Branch("Jet_puId",          &Jet_puId_ ,"Jet_puId_/F");
	outtree->Branch("Jet_btagCSV",       &Jet_btagCSV_ ,"Jet_btagCSV_/F");
	outtree->Branch("Jet_btagCSV",     &Jet_btagCSV_ ,"Jet_btagCSV_/F");
	outtree->Branch("Jet_corr",    &Jet_corr_ ,"Jet_corr_/F");
	outtree->Branch("Jet_mcPt",    &Jet_mcPt_ ,"Jet_mcPt_/F");
	outtree->Branch("Jet_mcPtq",    &Jet_mcPtq_ ,"Jet_mcPtq_/F");
	outtree->Branch("Jet_mcFlavour",    &Jet_mcFlavour_ ,"Jet_mcFlavour_/F");
	outtree->Branch("Jet_mcMatchId",    &Jet_mcMatchId_ ,"Jet_mcMatchId_/F");
	outtree->Branch("Jet_pt",    &Jet_pt_ ,"Jet_pt_/F");
	outtree->Branch("Jet_mt",    &Jet_mt_ ,"Jet_mt_/F");
	outtree->Branch("Jet_eta",    &Jet_eta_ ,"Jet_eta_/F");
	outtree->Branch("Jet_phi",    &Jet_phi_ ,"Jet_phi_/F");
	outtree->Branch("Jet_mass",    &Jet_mass_ ,"Jet_mass_/F");
	outtree->Branch("Jet_chHEF",    &Jet_chHEF_, "Jet_chHEF_/F");
	outtree->Branch("Jet_neHEF",    &Jet_neHEF_, "Jet_neHEF_/F");
	outtree->Branch("Jet_chEmEF",    &Jet_chEmEF_ ,"Jet_chEmEF_/F");
	outtree->Branch("Jet_neEmEF",   &Jet_neEmEF_ ,"Jet_neEmEF_/F");
	outtree->Branch("Jet_chMult",   &Jet_chMult_ ,"Jet_chMult_/F"); 
	outtree->Branch("Jet_leadTrackPt", &Jet_leadTrackPt_ ,"Jet_leadTrackPt_/F");
	outtree->Branch("Jet_mcEta", &Jet_mcEta_, "Jet_mcEta_/F");
	outtree->Branch("Jet_mcPhi", &Jet_mcPhi_ ,"Jet_mcPhi_/F");
	outtree->Branch("Jet_mcM", &Jet_mcM_ ,"Jet_mcM_/F");
	outtree->Branch("Jet_mcE", &Jet_mcE_ ,"Jet_mcE_/F");
	outtree->Branch("Jet_leptonPt", &Jet_leptonPt_ ,"Jet_leptonPt_/F");
	outtree->Branch("Jet_leptonPtRel", &Jet_leptonPtRel_ ,"Jet_leptonPtRel_/F"); 
	outtree->Branch("Jet_leptonPtRelInv",&Jet_leptonDeltaR_, "Jet_leptonDeltaR_/F");
	outtree->Branch("Jet_leptonDeltaR", &Jet_leptonDeltaR_ ,"Jet_leptonDeltaR_/F"); 
	outtree->Branch("rho", &rho_ ,"rho_/F");
	outtree->Branch("met_pt",  &met_pt_, "met_pt_/F");
	outtree->Branch("met_phi", &met_phi_, "met_phi_/F");
	outtree->Branch("Jet_met_dPhi", &Jet_met_dPhi_, "Jet_met_dPhi_/F");

	for (Long64_t jentry=0; jentry<nentries;jentry++) {
		Long64_t ientry = LoadTree(jentry);
		if (ientry < 0) break;
		nb = fChain->GetEntry(jentry);   nbytes += nb;


		if(!(Vtype==0  || Vtype==1)) continue; //selection for Zll
		for(int i =0 ; i<15; i++){

			if(Jet_mcIdx[i]<0 || Jet_mcIdx[i]>15) continue;
			TLorentzVector hJ0, hJ1;
			Jet_pt_=Jet_pt[i];
			Jet_eta_=Jet_eta[i];
			Jet_phi_=Jet_phi[i];
			Jet_corr_=Jet_corr[i];
			Jet_puId_ = Jet_puId[i];
			Jet_mass_=Jet_mass[i];
			Jet_met_dPhi_=deltaPhi(met_phi,Jet_phi[i]);
			met_pt_= met_pt;
			met_phi_= met_phi;
			Jet_leptonPtRel_ = TMath::Max(0.,Jet_leptonPtRel[i]);
			Jet_leptonDeltaR_ = TMath::Max(0.,Jet_leptonDeltaR[i]);
			Jet_leptonPt_ = TMath::Max(0.,Jet_leptonPt[i]);
			Jet_leptonPtRelInv_ = TMath::Max(0.,Jet_leptonPtRelInv[i]);
			Jet_leadTrackPt_ = Jet_leadTrackPt[i];
			Jet_chHEF_ = Jet_chHEF[i];
			Jet_chEmEF_=  Jet_chEmEF[i];
			Jet_neHEF_=  TMath::Min(1.,Jet_neHEF[i]);
			Jet_neEmEF_ = TMath::Min(1.,Jet_neEmEF[i]);

			hJ0.SetPtEtaPhiM(Jet_pt[i],Jet_eta[i],Jet_phi[i],Jet_mass[i]);
			rho_ = rho;
			Jet_e_=hJ0.E();
			Jet_mt_=hJ0.Mt();
			Jet_chMult_=Jet_chMult[i];
			Jet_vtx3dL_=TMath::Max(0.,Jet_vtx3DVal[i]);
			Jet_vtxMass_=TMath::Max(0.,Jet_vtxMass[i]);
			Jet_vtx3deL_=TMath::Max(0.,Jet_vtx3DSig[i]);
			Jet_vtxNtrk=Jth::Max(0.,Jet_vtxNtracks[i]);
			Jet_vtxPt_=TMath::Max(0.,Jet_vtxPt[i]);
			Jet_mcPt_= GenJet_wNuPt[Jet_mcIdx[i]];


			dR_ =999;
			double minDr = 0.4;
			for(int m=0; m<nGenBQuarkFromH; m++){
				hJ1.SetPtEtaPhiM(GenBQuarkFromH_pt[m],GenBQuarkFromH_eta[m],GenBQuarkFromH_phi[m],GenBQuarkFromH_mass[m]);       
				if(hJ1.DeltaR(hJ0)<minDr){

					Jet_mcE_=hJ1.E();
					Jet_mcPtq_ = GenBQuarkFromH_pt[m];
					Jet_mcEta_=  GenBQuarkFromH_eta[m];
					Jet_mcPhi_=  GenBQuarkFromH_phi[m];
					Jet_mcM_= GenBQuarkFromH_mass[m];
					minDr = hJ1.DeltaR(hJ0);         
					dR_ = minDr;

				}
			}




			Jet_mcFlavour_=Jet_mcFlavour[i];
			Jet_btagCSV_=Jet_btagCSV[i];
			outtree->Fill();
		}
		}
		outtree->Write();
		outfile->Close();
	}

