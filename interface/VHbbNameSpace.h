#include "TLorentzVector.h"
#include "TVector3.h"
#include "TVector2.h"
#include "TMath.h"
/*#if !defined(__CINT__) && !defined(__MAKECINT__)
  #include "CondFormats/JetMETObjects/interface/JetCorrectorParameters.h"
  #include "CondFormats/JetMETObjects/interface/JetCorrectionUncertainty.h"
  #endif*/

namespace VHbb {

  //ROOT.TMath.Sqrt(2*cuttedTree.FatjetAK08ungroomed_pt[0]*cuttedTree.metPuppi_pt*(1-ROOT.TMath.Cos(min(abs(cuttedTree.FatjetAK08ungroomed_phi[0]-cuttedTree.metPuppi_phi),(2*ROOT.TMath.Pi())-abs(cuttedTree.FatjetAK08ungroomed_phi[0]-cuttedTree.metPuppi_phi)))))
  //float mvh(std::vector<float>& jet_pt, std::vector<float>& jet_phi, std::vector<float>& met_pt, std::vector<float>& met_phi){

  //relPath: FatjetAK08ungroomed_msoftdrop*(1+((-9E9)*!(FatjetAK08ungroomed_pt==Max$(FatjetAK08ungroomed_pt*(1+((-9E9)*!(FatjetAK08ungroomed_mpruned>35 & FatjetAK08ungroomed_pt>20 & abs(FatjetAK08ungroomed_eta)<2.4)))))))
  float selected_mass(int n, float* v_mass, float* v_pt, float* v_eta){

    float max_pt = -1;
    int lead_jet_index = -1;
    for(int i = 0; i < n; i++){
      if( abs(v_eta[i])<2.4 && v_pt[i]>20 && v_mass[i]>35 ){
	if(v_pt[i] > max_pt) lead_jet_index = v_pt[i]; 
      }
    }  
    
    if(lead_jet_index>0){
      return v_mass[lead_jet_index];
    }
    else return -1;
  }
  
  
  //pass in varNo==0 to get the pT, varNo==1 to get the phi
  //pass in lep2_pt==lep2_phi==0 if only 1 lepton to remove
  double metPrime(double met_pt, double met_phi, double lep1_pt, double lep1_phi, double lep2_pt=0, double lep2_phi=0, int varNo=0)
  {
    double met_px=met_pt*TMath::Cos(met_phi);
    double met_py=met_pt*TMath::Sin(met_phi);

    double lep1_px=lep1_pt*TMath::Cos(lep1_phi);
    double lep1_py=lep1_pt*TMath::Sin(lep1_phi);

    double lep2_px=lep2_pt*TMath::Cos(lep2_phi);
    double lep2_py=lep2_pt*TMath::Sin(lep2_phi);

    double metPrime_px=met_px+lep1_px;
    double metPrime_py=met_py+lep1_py;

    metPrime_px+=lep2_px;
    metPrime_py+=lep2_py;

    if (varNo==0) return TMath::Sqrt(TMath::Power(metPrime_px,2) + TMath::Power(metPrime_py,2));
    else          return TMath::ATan2(metPrime_py,metPrime_px);
  }

  double deltaPhi(double phi1,double phi2)
  {
    double result = phi1 - phi2;
    while (result > TMath::Pi()) result -= 2*TMath::Pi();
    while (result <= -TMath::Pi()) result += 2*TMath::Pi();
    return result;
  }

  inline double deltaR(double eta1,double phi1,double eta2,double phi2)
    {
      double deta = eta1 - eta2;
      double dphi = deltaPhi(phi1, phi2);
      return TMath::Sqrt(deta*deta + dphi*dphi);
    }


  double Hmass( double V_eta,double V_phi,double V_pt, 
		double hJet1_eta,double hJet1_phi,double hJet1_pt, 
		double hJet2_eta,double hJet2_phi,double hJet2_pt ){
    
    TVector3 V(1,1,1);
    V.SetPtEtaPhi(V_pt,V_eta,V_phi);
    
    TVector3 H1(1,1,1);
    H1.SetPtEtaPhi(hJet1_pt,hJet1_eta,hJet1_phi);
    H1.SetMag(1/sin(H1.Theta()));
    
    TVector3 H2(1,1,1);
    H2.SetPtEtaPhi(hJet2_pt,hJet2_eta,hJet2_phi);
    H2.SetMag(1/sin(H2.Theta()));
    
    TVector3 n1(H1);
    TVector3 n2(H2);
    
    double det= n1.Px() * n2.Py() - n2.Px() * n1.Py();
    
    H1.SetMag( (  - n2.Py() * V.Px() + n2.Px() * V.Py() )  / (sin(n1.Theta()) *det ) );
    H2.SetMag( ( + n1.Py() * V.Px() - n1.Px() * V.Py() )  / (sin(n2.Theta())  *det ) );
    
    double mass=TMath::Sqrt( TMath::Power( (H1.Mag()+H2.Mag()),2 ) - TMath::Power(( ( H1+H2 ).Mag()),2) );
    
    return mass;
    
  }
  
  double Hmass_comb(double hJet1_eta,double hJet1_phi,double hJet1_pt, double hJet1_mass,
		    double hJet2_eta,double hJet2_phi,double hJet2_pt, double hJet2_mass){

    TLorentzVector H1, H2;
    H1.SetPtEtaPhiM(hJet1_pt,hJet1_eta,hJet1_phi, hJet1_mass);;
    H2.SetPtEtaPhiM(hJet2_pt,hJet2_eta,hJet2_phi, hJet2_mass);

    return (H1 + H2).M();

  }

  double Hmass_3j(double h_eta,double h_phi,double h_pt, double h_mass,
		  double aJet_eta,double aJet_phi,double aJet_pt, double aJet_mass){

    TLorentzVector H, H3;
    H.SetPtEtaPhiM( h_pt,h_eta,h_phi, h_mass);;
    H3.SetPtEtaPhiM(aJet_pt,aJet_eta,aJet_phi, aJet_mass);

    return (H + H3).M();


  }
  
  double ANGLELZ(double pt, double eta, double phi, double mass, double pt2, double eta2, double phi2, double mass2){
    TLorentzVector m1, m2, msum;
    m1.SetPtEtaPhiM(pt, eta, phi, mass);
    m2.SetPtEtaPhiM(pt2, eta2, phi2, mass2);
    msum = m1 + m2;

    TVector3 bZ =  msum.BoostVector();

    m1.Boost(-bZ);  
    m2.Boost(-bZ);  

    TVector3 b1;


    if((int) (pt) % 2 == 0)
      b1 =  m1.BoostVector();
    else
      b1 =  m2.BoostVector();

    double cosTheta = b1.Dot(msum.BoostVector()) / (b1.Mag()*msum.BoostVector().Mag());
    return(cosTheta);
  }


  double ANGLEHB(double pt, double eta, double phi, double e, double pt2, double eta2, double phi2, double e2){
    TLorentzVector m1, m2, msum;
    m1.SetPtEtaPhiE(pt, eta, phi, e);
    m2.SetPtEtaPhiE(pt2, eta2, phi2, e2);
    msum = m1 + m2;

    TVector3 bZ =  msum.BoostVector();

    m1.Boost(-bZ);
    m2.Boost(-bZ);  

    TVector3 b1;

    if((int) (pt) % 2 == 0)
      b1 =  m1.BoostVector();
    else
      b1 =  m2.BoostVector();

    double cosTheta = b1.Dot(msum.BoostVector()) / (b1.Mag()*msum.BoostVector().Mag());
    return(cosTheta);
  }

  double metCorSysShift(double met, double metphi, int Nvtx, int EVENT_run)
  {
    double metx = met * cos(metphi);
    double mety = met * sin(metphi);
    double px = 0.0, py = 0.0;
    if (EVENT_run!=1) {
      //pfMEtSysShiftCorrParameters_2012runAplusBvsNvtx_data
      px = +1.68804e-01 + 3.37139e-01*Nvtx;
      py = -1.72555e-01 - 1.79594e-01*Nvtx;
    } else {
      //pfMEtSysShiftCorrParameters_2012runAplusBvsNvtx_mc
      px = +2.22335e-02 - 6.59183e-02*Nvtx;
      py = +1.52720e-01 - 1.28052e-01*Nvtx;
    }
    metx -= px;
    mety -= py;
    return std::sqrt(metx*metx + mety*mety);
  }

  double metphiCorSysShift(double met, double metphi, int Nvtx, int EVENT_run)
  {
    double metx = met * cos(metphi);
    double mety = met * sin(metphi);
    double px = 0.0, py = 0.0;
    if (EVENT_run!=1) {

      //pfMEtSysShiftCorrParameters_2012runAplusBvsNvtx_data
      px = +1.68804e-01 + 3.37139e-01*Nvtx;
      py = -1.72555e-01 - 1.79594e-01*Nvtx;
    } else {
      //pfMEtSysShiftCorrParameters_2012runAplusBvsNvtx_mc
      px = +2.22335e-02 - 6.59183e-02*Nvtx;
      py = +1.52720e-01 - 1.28052e-01*Nvtx;
    }
    metx -= px;
    mety -= py;
    if (metx == 0.0 && mety == 0.0)
      return 0.0;

    double phi1 = std::atan2(mety,metx);
    double phi2 = std::atan2(mety,metx)-2.0*M_PI;
    if (std::abs(phi1-metphi) < std::abs(phi2-metphi)+0.5*M_PI)
      return phi1;
    else
      return phi2;
  }

  TVector2 metType1Reg(double met, double metphi, double corr1, double corr2, double pt1, double eta1, double phi1, double e1, double pt2, double eta2, double phi2, double e2)
  {
    double metx = met * cos(metphi);
    double mety = met * sin(metphi);
    TLorentzVector j1;
    TLorentzVector j2;
    j1.SetPtEtaPhiE(pt1,eta1,phi1, e1 );
    j2.SetPtEtaPhiE(pt2,eta2,phi2, e2 );
    metx += j1.Px()*(1-corr1);
    metx += j2.Px()*(1-corr2);
    mety += j1.Py()*(1-corr1);
    mety += j2.Py()*(1-corr2);
    TVector2 corrMET(metx, mety);
    return corrMET;
  }

  double metType1Phi(double met, double metphi, double corr1, double corr2, double pt1, double eta1, double phi1, double e1, double pt2, double eta2, double phi2, double e2){
    return metType1Reg(met, metphi, corr1, corr2, pt1, eta1, phi1, e1, pt2, eta2, phi2, e2).Phi();

  }
  double metType1Et(double met, double metphi, double corr1, double corr2, double pt1, double eta1, double phi1, double e1, double pt2, double eta2, double phi2, double e2){
    return metType1Reg(met, metphi, corr1, corr2, pt1, eta1, phi1, e1, pt2, eta2, phi2, e2).Mod();

  }


  double met_MPF(double met, double metphi, double pt, double phi)
  {
    return 1.+met*pt*std::cos( deltaPhi(metphi,phi) ) / (pt*pt);

  }

  double resolutionBias(double eta)
  {
    // return 0;//Nominal!
    if(eta< 0.5) return 0.052;
    if(eta< 1.1) return 0.057;
    if(eta< 1.7) return 0.096;
    if(eta< 2.3) return 0.134;
    if(eta< 5) return 0.28;
    return 0;
  }

  double evalJERBias( double ptreco, double ptgen, double eta1){
    double eta = fabs(eta1);
    double cor =1;   
    if ((fabs(ptreco - ptgen)/ ptreco)<0.5) { //Limit the effect to the core 
      cor = (ptreco +resolutionBias(eta) *(ptreco-ptgen))/ptreco;   
    }
    if (ptgen > 0.) return ptreco*cor;
    else return ptreco;
  }

  double evalEt( double pt, double eta, double phi, double e){
    TLorentzVector j;
    j.SetPtEtaPhiE(pt,eta,phi, e );
    return j.Et(); 

  }

  double evalMt( double pt, double eta, double phi, double e){
    TLorentzVector j;
    j.SetPtEtaPhiE(pt,eta,phi, e );
    return j.Mt(); 

  }
  /*double evalJECUnc( double pt, double eta){
  // Total uncertainty for reference
  JetCorrectionUncertainty *total = new JetCorrectionUncertainty("/shome/nmohr/CMSSW_5_2_6_patch1/src/UserCode/VHbb/data/START53_V15MC_Uncertainty_AK5PFchs.txt");

  total->setJetPt(pt);
  total->setJetEta(eta);
  double uncert =  total->getUncertainty(true);
  delete total;
  return uncert;
  }*/

  double ptWeightDY( double lheV_pt, double sign = 1.)
  {
    double SF = 1.;
    if (50. < lheV_pt && lheV_pt < 100.){
      SF = 0.873885+0.00175853*sign*lheV_pt;
    }
    else if (lheV_pt > 100){
      SF = 1.10651-0.000705265*sign*lheV_pt;
    }
    return SF;
  }

  // weights correction for EWK NLO correction
  double ptWeightZllH(int nGenVbosons,double GenVbosons_pt,int VtypeSim,int GenVbosons_pdgId){
    double SF = 1.;
    if (nGenVbosons ==1)
      {
        if (VtypeSim == 0 || VtypeSim == 1 || VtypeSim == 4 || VtypeSim == 5)
          {
            if (GenVbosons_pdgId == 23)
              {
                //for Z options
                if (GenVbosons_pt > 100. && GenVbosons_pt < 3000) SF = -0.1808051+6.04146*(TMath::Power((GenVbosons_pt+759.098),-0.242556));
              }
          }
        else if (VtypeSim == 2 || VtypeSim == 3)
          {
            //for W options
            if (GenVbosons_pdgId == 24 || GenVbosons_pdgId == -24)
              {
                if (GenVbosons_pt > 100. && GenVbosons_pt < 3000) SF = -0.830041+7.93714*(TMath::Power((GenVbosons_pt+877.978),-0.213831));
              }
          }
      }
    //std::cout << " SF " << " " << SF << std::endl;
    return SF>0?SF:0;
  }


  double minCSVold(int EVENT_run, double hJet_csv0, double hJet_csv1, double hJet_csvOld0, double hJet_csvOld1){

    if( EVENT_run < 2 )
      return std::min(hJet_csvOld0,hJet_csvOld1);
    else
      return std::min(hJet_csv0,hJet_csv1);
  }

  double maxCSVold(int EVENT_run, double hJet_csv0, double hJet_csv1, double hJet_csvOld0, double hJet_csvOld1){

    if( EVENT_run < 2 )
      return std::max(hJet_csvOld0,hJet_csvOld1);
    else
      return std::max(hJet_csv0,hJet_csv1);
  }


  // weights correction for EWK NLO correction from Atlas
  double ewkAtlas8TeVZllH( double genHPt, double genZPt){
    if (genHPt < 1.) return 1.;
    double hll8_contents[95] = {0.000664024, -0.00357095, -0.00767076, -0.00967366, -0.0134844, -0.0157148, -0.0181885, -0.0209647, -0.0232788, -0.0252373, -0.0265634, -0.0275069, -0.0285776, -0.0281683, -0.0294206, -0.0299975, -0.0308047, -0.0311716, -0.030913, -0.0324821, -0.0323192, -0.0324639, -0.0319356, -0.0322621, -0.0331146, -0.0338905, -0.0345189, -0.0358591, -0.0358407, -0.040018, -0.0396389, -0.0407177, -0.0445103, -0.0441406, -0.0471215, -0.0463301, -0.0513777, -0.0536773, -0.0546446, -0.0568508, -0.0590333, -0.0612157, -0.0633981, -0.0655805, -0.067763, -0.0699454, -0.0721278, -0.0743103, -0.0764927, -0.0786751, -0.0808575, -0.08304, -0.0852224, -0.0874048, -0.0895872, -0.0917697, -0.0939521, -0.0961345, -0.098317, -0.100499, -0.102682, -0.104864, -0.107047, -0.109229, -0.111412, -0.113594, -0.115776, -0.117959, -0.120141, -0.122324, -0.124506, -0.126689, -0.128871, -0.131053, -0.133236, -0.135418, -0.137601, -0.139783, -0.141965, -0.144148, -0.14633, -0.148513, -0.150695, -0.152878, -0.15506, -0.157242, -0.159425, -0.161607, -0.16379, -0.165972, -0.168155, -0.170337, -0.172519, -0.174702, -0.176884};
    int corrBin = (int) ( (genZPt - 25.) / 5. );
    if (corrBin < 0) corrBin = 0;
    if (corrBin > 94) corrBin = 94;
    double SF = 1.+hll8_contents[corrBin];
    return SF;
  }
  
double eleEff(double pt, double eta){
if (pt >= 20.0 && pt < 25.0 && eta < -1.57000005245 && eta > -2.5) return 0.955429255962 ;
if (pt >= 20.0 && pt < 25.0 && eta < -1.44000005722 && eta > -1.57000005245) return 0.927380621433 ;
if (pt >= 20.0 && pt < 25.0 && eta < -0.800000011921 && eta > -1.44000005722) return 0.752811849117 ;
if (pt >= 20.0 && pt < 25.0 && eta < 0.0 && eta > -0.800000011921) return 0.758898377419 ;
if (pt >= 20.0 && pt < 25.0 && eta < 0.800000011921 && eta > 0.0) return 0.755395233631 ;
if (pt >= 20.0 && pt < 25.0 && eta < 1.44000005722 && eta > 0.800000011921) return 0.765102207661 ;
if (pt >= 20.0 && pt < 25.0 && eta < 1.57000005245 && eta > 1.44000005722) return 0.889689266682 ;
if (pt >= 20.0 && pt < 25.0 && eta < 2.5 && eta > 1.57000005245) return 0.960859179497 ;
if (pt >= 25.0 && pt < 30.0 && eta < -1.57000005245 && eta > -2.5) return 0.973749041557 ;
if (pt >= 25.0 && pt < 30.0 && eta < -1.44000005722 && eta > -1.57000005245) return 0.95562505722 ;
if (pt >= 25.0 && pt < 30.0 && eta < -0.800000011921 && eta > -1.44000005722) return 0.854979991913 ;
if (pt >= 25.0 && pt < 30.0 && eta < 0.0 && eta > -0.800000011921) return 0.859907507896 ;
if (pt >= 25.0 && pt < 30.0 && eta < 0.800000011921 && eta > 0.0) return 0.856850981712 ;
if (pt >= 25.0 && pt < 30.0 && eta < 1.44000005722 && eta > 0.800000011921) return 0.854210674763 ;
if (pt >= 25.0 && pt < 30.0 && eta < 1.57000005245 && eta > 1.44000005722) return 0.961790204048 ;
if (pt >= 25.0 && pt < 30.0 && eta < 2.5 && eta > 1.57000005245) return 0.984032571316 ;
if (pt >= 30.0 && pt < 35.0 && eta < -1.57000005245 && eta > -2.5) return 0.975343048573 ;
if (pt >= 30.0 && pt < 35.0 && eta < -1.44000005722 && eta > -1.57000005245) return 0.971944391727 ;
if (pt >= 30.0 && pt < 35.0 && eta < -0.800000011921 && eta > -1.44000005722) return 0.916224777699 ;
if (pt >= 30.0 && pt < 35.0 && eta < 0.0 && eta > -0.800000011921) return 0.918354153633 ;
if (pt >= 30.0 && pt < 35.0 && eta < 0.800000011921 && eta > 0.0) return 0.914323210716 ;
if (pt >= 30.0 && pt < 35.0 && eta < 1.44000005722 && eta > 0.800000011921) return 0.918937265873 ;
if (pt >= 30.0 && pt < 35.0 && eta < 1.57000005245 && eta > 1.44000005722) return 0.949005782604 ;
if (pt >= 30.0 && pt < 35.0 && eta < 2.5 && eta > 1.57000005245) return 0.978435099125 ;
if (pt >= 35.0 && pt < 40.0 && eta < -1.57000005245 && eta > -2.5) return 0.977416038513 ;
if (pt >= 35.0 && pt < 40.0 && eta < -1.44000005722 && eta > -1.57000005245) return 0.96676659584 ;
if (pt >= 35.0 && pt < 40.0 && eta < -0.800000011921 && eta > -1.44000005722) return 0.949674129486 ;
if (pt >= 35.0 && pt < 40.0 && eta < 0.0 && eta > -0.800000011921) return 0.955099225044 ;
if (pt >= 35.0 && pt < 40.0 && eta < 0.800000011921 && eta > 0.0) return 0.95435655117 ;
if (pt >= 35.0 && pt < 40.0 && eta < 1.44000005722 && eta > 0.800000011921) return 0.949129760265 ;
if (pt >= 35.0 && pt < 40.0 && eta < 1.57000005245 && eta > 1.44000005722) return 0.966977357864 ;
if (pt >= 35.0 && pt < 40.0 && eta < 2.5 && eta > 1.57000005245) return 0.974912643433 ;
if (pt >= 40.0 && pt < 45.0 && eta < -1.57000005245 && eta > -2.5) return 0.976379692554 ;
if (pt >= 40.0 && pt < 45.0 && eta < -1.44000005722 && eta > -1.57000005245) return 0.96400809288 ;
if (pt >= 40.0 && pt < 45.0 && eta < -0.800000011921 && eta > -1.44000005722) return 0.967367231846 ;
if (pt >= 40.0 && pt < 45.0 && eta < 0.0 && eta > -0.800000011921) return 0.976113498211 ;
if (pt >= 40.0 && pt < 45.0 && eta < 0.800000011921 && eta > 0.0) return 0.970276534557 ;
if (pt >= 40.0 && pt < 45.0 && eta < 1.44000005722 && eta > 0.800000011921) return 0.965076506138 ;
if (pt >= 40.0 && pt < 45.0 && eta < 1.57000005245 && eta > 1.44000005722) return 0.962332487106 ;
if (pt >= 40.0 && pt < 45.0 && eta < 2.5 && eta > 1.57000005245) return 0.975438177586 ;
if (pt >= 45.0 && pt < 50.0 && eta < -1.57000005245 && eta > -2.5) return 0.974642693996 ;
if (pt >= 45.0 && pt < 50.0 && eta < -1.44000005722 && eta > -1.57000005245) return 0.976564764977 ;
if (pt >= 45.0 && pt < 50.0 && eta < -0.800000011921 && eta > -1.44000005722) return 0.975869596004 ;
if (pt >= 45.0 && pt < 50.0 && eta < 0.0 && eta > -0.800000011921) return 0.984652400017 ;
if (pt >= 45.0 && pt < 50.0 && eta < 0.800000011921 && eta > 0.0) return 0.976347208023 ;
if (pt >= 45.0 && pt < 50.0 && eta < 1.44000005722 && eta > 0.800000011921) return 0.974825322628 ;
if (pt >= 45.0 && pt < 50.0 && eta < 1.57000005245 && eta > 1.44000005722) return 0.968582391739 ;
if (pt >= 45.0 && pt < 50.0 && eta < 2.5 && eta > 1.57000005245) return 0.973198652267 ;
if (pt >= 50.0 && pt < 200.0 && eta < -1.57000005245 && eta > -2.5) return 0.976521909237 ;
if (pt >= 50.0 && pt < 200.0 && eta < -1.44000005722 && eta > -1.57000005245) return 0.968289792538 ;
if (pt >= 50.0 && pt < 200.0 && eta < -0.800000011921 && eta > -1.44000005722) return 0.980251729488 ;
if (pt >= 50.0 && pt < 200.0 && eta < 0.0 && eta > -0.800000011921) return 0.988307952881 ;
if (pt >= 50.0 && pt < 200.0 && eta < 0.800000011921 && eta > 0.0) return 0.983105957508 ;
if (pt >= 50.0 && pt < 200.0 && eta < 1.44000005722 && eta > 0.800000011921) return 0.976873219013 ;
if (pt >= 50.0 && pt < 200.0 && eta < 1.57000005245 && eta > 1.44000005722) return 0.970499277115 ;
if (pt >= 50.0 && pt < 200.0 && eta < 2.5 && eta > 1.57000005245) return 0.972752988338 ;
return 1.;
}
  
  double mueEff(int Vtype, double eta0, double eta1, double pt0, double pt1){
      if (Vtype == 0) return 1.;
      if (Vtype == 1) {
          return eleEff(pt0,eta0)*eleEff(pt1,eta1);
      }
      return 1.;
  }

}

