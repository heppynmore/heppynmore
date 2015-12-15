###########################################
#  Validation Plot Maker for quick plots in Zll channel
#
#  Usage:  Specify Input files (line 14) and where to save plots (line 20)
#
#  David Curry, 09.18.2015

from ROOT import *
from ROOT import gROOT
from matplotlib import interactive

# ===== Specify Input =====

# ggZH125
#file_gg = TFile('/uscms_data/d1/bortigno/V14/withRegression_ggZH125_weights_zll.root')
#file_gg = TXNetFile('root://cms-xrd-global.cern.ch///store/user/bortigno//withRegression_ggZH125_weights_zll.root')
file_gg = TFile('/tmp/bortigno//withRegression_ggZH125_zll_genJet_weights_zll.root')
#file_gg = TFile('/uscms_data/d1/bortigno/V14/v14_11_2015_ggZH125_zll_genJet.root')
#file_gg = TFile('/uscms_data/d1/bortigno/V14/v14_11_2015_ggZH125_zll_genJet.root')

# ZH125
#file = TFile('/uscms_data/d1/bortigno/V14/zll-v14_gen_ZH125_weights_zll.root')
file=TFile('/tmp/bortigno//withRegression_ZH125_zll_genJet_weights_zll.root')

# Previous MC signal Ntuple:  
file_old = TFile('/exports/uftrig01a/dcurry/data/bbar/13TeV/heppy/v13/ZH125.root')

# Recent data ntuples
file_zuu = TFile('/exports/uftrig01a/dcurry/data/bbar/13TeV/heppy/v13/Zuu.root')

file_zee = TFile('/exports/uftrig01a/dcurry/data/bbar/13TeV/heppy/v13/Zee.root')

# Background samples

file_DY = TFile('/tmp/bortigno/withRegression_DY_merged_zll_genJet_weights_zll.root')

#file_ZZ = TFile('/uscms_data/d1/bortigno/V14/zll-v14_gen_ZZ_weights_zll.root')
file_ZZ =TFile('/tmp/bortigno//withRegression_ZZ_zll_genJet_weights_zll.root')
# Outpath:
outdir = 'plots/'

###########################################


# Get the trees
tree = file.Get('tree')
tree_old = file_old.Get('tree')
tree_zuu = file_zuu.Get('tree')
tree_zee = file_zee.Get('tree')
tree_gg  = file_gg.Get('tree')
tree_dy  = file_DY.Get('tree')
tree_zz  = file_ZZ.Get('tree')

# latest ntuple version for labeling
new_version = 'v14_zll_genJet'
old_version = 'v13'

header = 'CMS'
title = 'ZH125_'+new_version
gg_title = 'ggZH125_'+new_version

zuu_header = '#sqrt{s}=13TeV,   Z(u^{-}u^{+})H(b#bar{b})' 
zuu_title = 'zuu_'+new_version

zee_header = '#sqrt{s}=13TeV,   Z(e^{-}e^{+})H(b#bar{b})'
zee_title ='zee_'+new_version

dy_header = '#sqrt{s}=13TeV,   Drell-Yan: Z(l^{-}l^{+})'
dy_title  = 'DY_'+new_version

zz_header = '#sqrt{s}=13TeV,   ZZ'
zz_title  = 'ZZ_'+new_version

# create output directory
if (ROOT.gSystem.AccessPathName(outdir)):
    ROOT.gSystem.mkdir(outdir)


# List of variables to plot:  var name, # of bins, x-axis range
variable_list = [ ['HCSV_mass', 50, 20, 220],
                  ['HCSV_pt', 50, 20, 220],
                  ['Jet_pt[hJCidx[0]]', 50, 20, 220],
                  ['Jet_pt[hJCidx[1]]',50, 20, 220],
                  ['met_pt', 50, 0, 300],
                  ['Jet_mcPt[hJCidx[0]]', 50, 20, 220],
                  ['Jet_mcPt[hJCidx[1]]', 50, 20, 220],
                  ['Jet_eta[hJCidx[0]]', 50, -2.4, 2.4],
                  ['Jet_eta[hJCidx[1]]', 50, -2.4, 2.4],
                  ['Sum$(Jet_pt>20&Jet_puId!=0)', 16, 1, 16],
                  ['Jet_btagCSV', 20, 0, 1],
                  ]


regression_variable_list = [ ['Jet_mcPt', 50, 0, 150],
                             ['Jet_pt', 50, 0, 150],
                             ['Jet_rawPt', 50, 0, 150],
                             ['Jet_eta', 25, -2.4, 2.4],
                             ['rho', 25, 0, 25],
                             ['Jet_mass', 25, 0, 225],
                             ['Jet_leadTrackPt', 25, 0, 250],
                             ['Jet_leptonPtRel', 25, 0, 60],
                             ['Jet_leptonPt', 25, 0 , 250],
                             ['Jet_leptonDeltaR', 25, 0, 5],
                             ['Jet_chEmEF', 25, 0, 1],
                             ['Jet_chHEF', 25, 0, 1],
                             ['Jet_neHEF', 25, 0, 1],
                             ['Jet_neEmEF', 25, 0, 1],
                             ['Jet_chMult', 25, 0, 70],
                             ['Jet_vtxPt', 25, 0, 200],
                             ['Jet_vtxMass', 25, 0, 5],
                             ['Jet_vtx3DVal', 25, 0, 10],
                             ]


# ==== Cuts ==================
cut = 'Vtype > -1 & Vtype < 2 & Jet_pt[hJCidx[0]] > 20. & Jet_pt[hJCidx[1]] > 20. & abs(Jet_eta[hJCidx[0]]) < 2.4 & abs(Jet_eta[hJCidx[1]]) < 2.4'
    
cut = cut + ' & vLeptons_pt[0] > 20 & vLeptons_pt[1] > 20 & vLeptons_eta[0] < 2.4 & vLeptons_eta[1] < 2.4'

# btag cut.. experimental
cut = cut + ' & Jet_btagCSV[hJCidx[0]] > 0.6 & Jet_btagCSV[hJCidx[1]] > 0.6'

ptBalance_cut = cut+' & nJet == 2 & Jet_btagCSV[hJCidx[0]] > 0.6 & Jet_btagCSV[hJCidx[1]] > 0.6' 

ptBalance_cut = 'sign(genWeight)*('+ptBalance_cut+')'

mc_cut = 'sign(genWeight)*('+cut+')'
print mc_cut

zuu_cut = cut + ' & json == 1 & HLT_BIT_HLT_IsoMu24_eta2p1_v == 1'

zee_cut = cut + ' & json == 1 & HLT_BIT_HLT_Ele17_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_v == 1'

resolution_cut = cut+' & Jet_mcPt>0 & abs(Jet_pt-Jet_mcPt)/Jet_mcPt < 1 & abs(Jet_pt_reg-Jet_mcPt)/Jet_mcPt < 1 & abs(Jet_mcFlavour) == 5' 

resolution_cut = 'sign(genWeight)*('+resolution_cut+')'

# DY+HF cut for ptBalance
hf_cut = cut + ' & Sum$(GenJet_pt>20 && abs(GenJet_eta)<2.4 && GenJet_numBHadrons>0)>=2'

lf_cut = cut + ' & Sum$(GenJet_pt>20 && abs(GenJet_eta)<2.4 && GenJet_numBHadrons>0)==0'

DY_regression_cut = 'sign(genWeight)*('+hf_cut+')'



# DY+LF cut
#lf_cut = cut +' & HCSV_pt > 100 & V_pt > 100. & Sum$(Jet_pt > 20 & abs(Jet_eta) < 2.4) < 4 & abs( HVdPhi ) > 2.9 & V_mass > 75. & V_mass < 105. & max(Jet_btagCSV[hJCidx[0]],Jet_btagCSV[hJCidx[1]]) < 0.89'

lf_cut = 'sign(genWeight)*('+lf_cut+')'

# ==== Now make the plots ====

def doPlot(variable, nbins, bin_low, bin_high):

    print '\n----> Making plot for', variable

    stack  = THStack('stack', '')
    canvas = TCanvas('canvas','', 700,700) 

    # make the histogram and project into it
    hNew = TH1F('hNew', '' , nbins, bin_low, bin_high)
    hOld = TH1F('hOld', '' , nbins, bin_low, bin_high)
    
    tree.Project('hNew', variable, mc_cut)
    tree_old.Project('hOld', variable, mc_cut)
    
    hNew.SetStats(0)
    hNew.SetLineColor(kRed)
    hOld.SetLineColor(kBlue)
    
    # Normalize Entries
    hNew.Scale(1 / hNew.Integral())
    #hNew.Scale(1 / hNew.GetEntries())
    hOld.Scale(1 / hOld.Integral())
    #hOld.Scale(1 / hOld.GetEntries())

    canvas.cd()
    stack.Add(hNew)
    stack.Add(hOld)
    stack.Draw('nostack')
    stack.GetXaxis().SetTitle(variable)
    
    l = TLatex()
    l.SetNDC()
    l.SetTextSize(0.03)
    l.SetTextFont(42)	
    l.DrawLatex(0.1, 0.93, "                      (13 TeV)")
    l.Draw('same')

    leg = TLegend(0.62,0.6,0.9,0.9)
    leg.SetFillStyle(0)
    leg.SetBorderSize(0)
    leg.AddEntry(hNew, new_version, 'l')
    leg.AddEntry(hOld, old_version, 'l')
    leg.Draw('same')
    
    if '[hJCidx[0]]' in variable:
        variable = variable.replace('[hJCidx[0]]', '0')
    if '[hJCidx[1]]' in variable:
        variable = variable.replace('[hJCidx[1]]', '1')
    if 'Sum$(Jet_pt>15&Jet_puId!=0)' in variable:
        variable = variable.replace('Sum$(Jet_pt>15&Jet_puId!=0)', 'aJets')
    canvas.SaveAs(outdir+variable+'_'+title+'.pdf')

    #raw_input('press return to continue')

    # Delete objects.
    canvas.IsA().Destructor(canvas)
    hNew.IsA().Destructor(hNew)
    hOld.IsA().Destructor(hOld)

# ====== end doPlot() =======




def reg_res_plots(variable, nbins, bin_low, bin_high):

     print '\n----> Making plot for', variable
     
     canvas_nom = TCanvas('canvas_nom')
     canvas_reg = TCanvas('canvas_reg')
     
     # make the histogram and project into it
     hNom = TH2F('hNom', '' , nbins, bin_low, bin_high, 50, -0.1, 0.1)
     hReg = TH2F('hReg', '' , nbins, bin_low, bin_high, 50, -0.1, 0.1)
     
     tree_gg.Project('hNom', '((Jet_pt-Jet_mcPt)/Jet_mcPt):%s'%(variable), resolution_cut)
     tree_gg.Project('hReg', '((Jet_pt_reg-Jet_mcPt)/Jet_mcPt):%s'%(variable), resolution_cut)

     # get the profiles
     prof_reg = hReg.ProfileX()
     prof_reg.SetLineColor(kBlack)
     prof_nom = hNom.ProfileX()
     prof_nom.SetLineColor(kBlack)

     
     canvas_reg.cd()
     hReg.SetStats(0)
     hReg.Draw('COLZ')
     prof_reg.Draw('same')
     hReg.GetXaxis().SetTitle(variable)
     hReg.GetYaxis().SetTitle('(Jet_pt_reg-Jet_mcPt)/Jet_mcPt')
     canvas_reg.SaveAs(outdir+'pt_resolution_REG_'+variable+'.pdf')
     
     canvas_nom.cd()
     hNom.SetStats(0)
     hNom.Draw('COLZ')
     prof_nom.Draw('same')
     hNom.GetXaxis().SetTitle(variable)
     hNom.GetYaxis().SetTitle('(Jet_pt-Jet_mcPt)/Jet_mcPt')
     canvas_nom.SaveAs(outdir+'pt_resolution_NOM_'+variable+'_'+gg_title+'.pdf')
     
     # Delete objects.
     canvas_reg.IsA().Destructor(canvas_reg)
     canvas_nom.IsA().Destructor(canvas_nom)
     hNom.IsA().Destructor(hNom)
     hReg.IsA().Destructor(hReg)
                         

# resolution plots



# function to compare regression and nominal H mass
# Give a tree to compare and header title

def regression_plot(myTree, myHeader, myTitle, ptRegion, myCut):

    print '\n----> Making regression comparative plot for...', myTitle

    stack  = THStack('stack', '')
    canvas = TCanvas('canvas','', 700, 700)

    # make the histogram and project into it
    hReg = TH1F('hReg', '' , 50, 20, 220)
    hNom = TH1F('hNom', '' , 50, 20, 220)

    if ptRegion == 'all':
        myTree.Project('hReg', 'H.mass', myCut)
        myTree.Project('hNom', 'HNoReg.mass', myCut)

    if ptRegion == 'high':
        myTitle = myTitle+'_highPt'
        myTree.Project('hReg', 'H.mass', myCut+' & V_pt > 100')
        myTree.Project('hNom', 'HNoReg.mass', myCut+' & V_pt > 100')

    hReg.SetStats(1)
    hReg.SetLineColor(kRed)
    hNom.SetLineColor(kBlack)
    
    canvas.cd()
    stack.Add(hReg)
    stack.Add(hNom)
    stack.Draw('nostack')
    stack.GetXaxis().SetTitle('m_{jj} (GeV)')


    low = 95
    high = 135

    low_nom = 80
    high_nom = 130

    if 'ZZ' in myTitle:
        low = 70
        high = 120
        low_nom = 60
        high_nom = 110

        
    
    # Get Guassian stats
    #hReg.Fit('gaus', 'Q','same', low, high)
    #fit=hReg.GetFunction('gaus')
    #fit.SetLineColor(kRed)
    #hReg_std = fit.GetParameter(2)
    #hReg_mu = fit.GetParameter(1)
    #hReg_metric = hReg_std/hReg_mu
    #hReg_std=str(round(hReg_std,4))
    #hReg_mu=str(round(hReg_mu,4))
    #hReg_metric_str = str(round(hReg_metric,3))
    
#    hNom.Fit('gaus', 'Q', 'same', low_nom, high_nom)
    mjj13TeV=RooRealVar("mjj13TeV","M(jet-jet)",20,220,"GeV")
    bC_p0=RooRealVar("bC_p0", "bC_p0", 80., 180.)
    bC_p1=RooRealVar("bC_p1", "bC_p1", 5., 30.1)
    bC_p2=RooRealVar("bC_p2", "bC_p2", -100, 100.1)
    bC_p3=RooRealVar("bC_p3", "bC_p3", -100., 100.)
    bC_p4=RooRealVar("bC_p4", "bC_p4", -100., 100.)	
    bukin_ = RooBukinPdf("bukin_", "Bukin function",mjj13TeV, bC_p0,bC_p1,bC_p2,bC_p3,bC_p4)



#bkg_fitTmp=RooGenericPdf("bkg_fit", "pow(1-@0, @1)/pow(@0, @2+@3*log(@0))", RooArgList(ex,p1mod,p2mod,p3mod))
    #bukin_.fitTo(hReg,RooFit.Range(20,220), RooFit.SumW2Error(kFALSE),RooFit.PrintEvalErrors(-1))

    signalHistogram= RooDataHist("signalHistogram", "Signal Histogram", RooArgList(mjj13TeV), hReg)
    bukin_.fitTo(signalHistogram, RooFit.Range(20, 220), RooFit.Save())
    

    plot=mjj13TeV.frame();
    signalHistogram.plotOn(plot, RooFit.MarkerColor(2));
    bukin_.plotOn(plot, RooFit.LineColor(2), RooFit.LineWidth(0));
    plot.Draw("sames")	

    hReg_std = bC_p1.getVal()
    hReg_mu = bC_p0.getVal()
    hReg_metric = hReg_std/hReg_mu
    hReg_std=str(round(hReg_std,4))
    hReg_mu=str(round(hReg_mu,4))
    hReg_metric_str = str(round(hReg_metric,3))



    signalHistogram2= RooDataHist("signalHistogram2", "Signal Histogram", RooArgList(mjj13TeV), hNom)
    signalHistogram2.plotOn(plot, RooFit.MarkerColor(1));

    bukin_.fitTo(signalHistogram2, RooFit.Range(20, 220), RooFit.Save())
     
 
    bukin_.plotOn(plot, RooFit.LineColor(1), RooFit.LineWidth(0));
    plot.Draw("sames")




    #fit2=hNom.GetFunction('gaus')
    #fit2.SetLineColor(kBlue)
    hNom_std=bC_p1.getVal()
    hNom_mu=bC_p0.getVal()
    mass_metric1 = hNom_std/hNom_mu
    hNom_std=str(round(hNom_std,4))
    hNom_mu=str(round(hNom_mu,4))
    mass_metric1_str = str(round(mass_metric1,3))

    #percent_improvement = (1-(hReg_metric/mass_metric1))*100
    
    l = TLatex()
    l.SetNDC()
    l.SetTextSize(0.03)
    l.DrawLatex(0.1, 0.93, myHeader)
    	
    l.Draw('same')
    l11 = TLatex()
    l11.SetNDC()
    l11.SetTextSize(0.03)
	 
    l11.SetTextFont(42)
    l11.DrawLatex(0.1, 0.93, "          (13 TeV)")
	

    leg = TLegend(0.62,0.6,0.9,0.9)
    leg.SetFillStyle(0)
    leg.SetBorderSize(0)
    leg.AddEntry(hReg, 'Regressed', 'l')
    leg.AddEntry(0, '#sigma='+hReg_std, '')
    leg.AddEntry(0, '#mu='+hReg_mu, '')
    leg.AddEntry(0, '#sigma/#mu='+hReg_metric_str, '')
    leg.AddEntry(hNom, 'Nominal', 'l')
    leg.AddEntry(0, '#sigma='+hNom_std, '')
    leg.AddEntry(0, '#mu='+hNom_mu, '')
    leg.AddEntry(0, '#sigma/#mu='+mass_metric1_str, '')
    leg.AddEntry(0, '', '')
    #x = leg.AddEntry(0, 'Improvement='+str(round(percent_improvement,1))+'%', '')
    #x.SetTextColor(kRed)
    #x.SetTextSize(0.03)
    leg.Draw('same')

    canvas.SaveAs(outdir+'regressed_Mass_'+myTitle+'.pdf')

    # Delete objects.
    canvas.IsA().Destructor(canvas)
    hReg.IsA().Destructor(hReg)
    hNom.IsA().Destructor(hNom)

    # Now the pt balance
    stack  = THStack('stack', '')
    canvas = TCanvas('canvas')

    # make the histogram and project into it
    hReg = TH1F('hReg', '' , 35, 0, 2)
    hNom = TH1F('hNom', '' , 35, 0, 2)
    
    if ptRegion == 'all':
        myTree.Project('hReg', 'HCSV_reg_pt/V_pt', ptBalance_cut)
        myTree.Project('hNom', 'HCSV_pt/V_pt', ptBalance_cut)
        #myTree.Project('hReg', 'HCSV_reg_pt/V_pt', myCut)
        #myTree.Project('hNom', 'HCSV_pt/V_pt', myCut)


    if ptRegion== 'high':
        myTitle = myTitle+'_highPt'
        myTree.Project('hReg', 'HCSV_reg_pt/V_pt', ptBalance_cut+' & HCSV_pt > 100')
        myTree.Project('hNom', 'HCSV_pt/V_pt', ptBalance_cut+' & HCSV_pt > 100')

    hReg.SetStats(0)
    hReg.SetLineColor(kRed)

    canvas.cd()
    stack.Add(hReg)
    stack.Add(hNom)
    stack.Draw('nostack')
    stack.GetXaxis().SetTitle('Pt Balance: p_{T}(jj) / p_{T}(ll)')

    # Get Guassian stats

    
    hReg.Fit('gaus', 'Q','same', 0.7, 1.2)
    fit=hReg.GetFunction('gaus')
    fit.SetLineColor(kRed)
    hReg_std = fit.GetParameter(2)
    hReg_mu = fit.GetParameter(1)
    hReg_metric = hReg_std/hReg_mu
    hReg_std=str(round(hReg_std,4))
    hReg_mu=str(round(hReg_mu,4))
    hReg_metric_str = str(round(hReg_metric,3))
    
    hNom.Fit('gaus', 'Q', 'same', 0.7, 1.2)
    #fit2=hNom.GetFunction('gaus')
    #fit2.SetLineColor(kBlue)
    #hNom_std=fit2.GetParameter(2)
    #hNom_mu=fit2.GetParameter(1)
    #mass_metric1 = hNom_std/hNom_mu
    #hNom_std=str(round(hNom_std,4))
    #hNom_mu=str(round(hNom_mu,4))
    #mass_metric1_str = str(round(mass_metric1,3))

    #percent_improvement = (1-(hReg_metric/mass_metric1))*100


    l = TLatex()
    l.SetNDC()
    l.SetTextSize(0.03)
    l.DrawLatex(0.1, 0.93, myHeader)
    l.Draw('same')

    leg = TLegend(0.62,0.6,0.9,0.9)
    leg.SetFillStyle(0)
    leg.SetBorderSize(0)
    leg.AddEntry(hReg, 'Regressed', 'l')
    #leg.AddEntry(0, '#sigma='+hReg_std, '')
    #leg.AddEntry(0, '#mu='+hReg_mu, '')
    #leg.AddEntry(0, '#sigma/#mu='+hReg_metric_str, '')
    leg.AddEntry(hNom, 'Nominal', 'l')
    #leg.AddEntry(0, '#sigma='+hNom_std, '')
    #leg.AddEntry(0, '#mu='+hNom_mu, '')
    #leg.AddEntry(0, '#sigma/#mu='+mass_metric1_str, '')
    leg.AddEntry(0, '', '')
    #x = leg.AddEntry(0, 'Improvement='+str(round(percent_improvement,1))+'%', '')
    #x.SetTextColor(kRed)
    #x.SetTextSize(0.03)
    leg.Draw('same')
    
    canvas.SaveAs(outdir+'pt_balance_'+myTitle+'.pdf')

    # Resoltuion for B, and light Jets

    stack_b  = THStack('stack_b', '')
    canvas_b = TCanvas('canvas_b')

    stack_l  = THStack('stack_l', '')
    canvas_l = TCanvas('canvas_l')
    
    # make the histogram and project into it
    low  = -2 
    high = 2
    nbins = 50
    
    hReg_b = TH1F('hReg_b', '' , nbins, low, high)
    hNom_b = TH1F('hNom_b', '' , nbins, low, high)
    
    hReg_l = TH1F('hReg_l', '' , nbins, low, high)
    hNom_l = TH1F('hNom_l', '' , nbins, low, high)
    
    myTree.Project('hReg_b', '(Jet_pt_reg-Jet_mcPt)/Jet_mcPt', hf_cut)
    myTree.Project('hNom_b', '(Jet_pt-Jet_mcPt)/Jet_mcPt', hf_cut)

    myTree.Project('hReg_l', '(Jet_pt_reg-Jet_mcPt)/Jet_mcPt', lf_cut)
    myTree.Project('hNom_l', '(Jet_pt-Jet_mcPt)/Jet_mcPt', lf_cut)

    '''
    hReg_b.Scale(1 / hReg_b.Integral())
    hNom_b.Scale(1 / hNom_b.Integral())
    
    hReg_l.Scale(1 / hReg_l.Integral())
    hNom_l.Scale(1 / hNom_l.Integral())
    '''
    
    canvas_b.cd()
    hReg_b.SetStats(0)
    hReg_b.SetLineColor(kRed)
    stack_b.Add(hReg_b)
    stack_b.Add(hNom_b)
    stack_b.Draw('nostack')
    stack_b.GetXaxis().SetTitle('bJets,  (Jet_pt-gen_pt)/gen_pt')

    leg = TLegend(0.62,0.6,0.9,0.9)
    leg.SetFillStyle(0)
    leg.SetBorderSize(0)
    leg.AddEntry(hReg_b, 'Regressed', 'l')
    leg.AddEntry(hNom_b, 'Nominal', 'l')
    leg.Draw('same')
    
    canvas_b.SaveAs(outdir+'jet_res_bJets_'+myTitle+'.pdf')
    
    canvas_l.cd()
    hReg_l.SetStats(0)
    hReg_l.SetLineColor(kRed)
    stack_l.Add(hReg_l)
    stack_l.Add(hNom_l)
    stack_l.Draw('nostack')
    stack_l.GetXaxis().SetTitle('light jets,  (Jet_pt-gen_pt)/gen_pt')
    
    leg = TLegend(0.62,0.6,0.9,0.9)
    leg.SetFillStyle(0)
    leg.SetBorderSize(0)
    leg.AddEntry(hReg_l,'Regressed', 'l')
    leg.AddEntry(hNom_l, 'Nominal', 'l')
    leg.Draw('same')
    
    canvas_l.SaveAs(outdir+'jet_res_lightJets_'+myTitle+'.pdf')

# ===== End regression plots ======


# ===== VType Plots ======

def vtype_plot(myTree, myTitle, ptRegion, myCut):

    canvas = TCanvas('canvas')
    stack  = THStack('stack', '')
        
    # make the histogram and project into it
    h = TH1F('h', '' , 7, -1, 6)
    
    if ptRegion == 'all':
        myTree.Project('h', 'Vtype', myCut)
        myTitle = myTitle+'_allPt'
        
    if ptRegion == 'high':
        myTitle = myTitle+'_highPt'
        myTree.Project('h', 'Vtype', myCut+' & V_pt > 150')
        
    canvas.cd()
    stack.Add(h)
    stack.Draw('nostack')
    stack.GetXaxis().SetTitle('VType')
    
    canvas.SaveAs(outdir+'VType_'+myTitle+'.pdf')
    
# ===== End VType Plots ======



# =====================================================================================

# Loop over variable list and plot for v13 comparison
for variable in variable_list:

    break
    #if variable[0] is not 'HCSV_mass': continue

    # arguments are: var name, nBins, bin low, bin high
    doPlot(variable[0], variable[1], variable[2], variable[3])



# Loop for resolution plots
for variable in regression_variable_list:

    
    #if variable[0] is not 'Jet_pt': continue
    break
    #  Argumentas are: reg_res_plots(variable, nbins, bin_low, bin_high)
    reg_res_plots(variable[0], variable[1], variable[2], variable[3])

# resolution plots



    
# Make regression plots for data and MC 
# (tree, header, plot title, pt region, cut)

regression_plot(tree, header, title, 'all', mc_cut)
regression_plot(tree, header, title, 'high', mc_cut)

#regression_plot(tree_gg, header, gg_title, 'all', mc_cut)
#regression_plot(tree_gg, header, gg_title, 'high', mc_cut)

#regression_plot(tree_dy, dy_header, dy_title, 'all', DY_regression_cut)
#regression_plot(tree_dy, dy_header, dy_title, 'all', lf_cut)


#regression_plot(tree_zz, zz_header, zz_title, 'all', mc_cut)
#regression_plot(tree_zz, zz_header, zz_title, 'high', mc_cut)

#regression_plot(tree_zuu, zuu_header, zuu_title, 'all', zuu_cut)
#regression_plot(tree_zuu, zuu_header, zuu_title, 'high', zuu_cut)

#regression_plot(tree_zee, zee_header, zee_title, 'all', zee_cut)
#regression_plot(tree_zee, zee_header, zee_title, 'high', zee_cut)

'''
# Make data vType Plots: (zee tree, zuu tree, ptRegion)
vtype_plot(tree_zee, zee_title, 'all', zee_cut)
vtype_plot(tree_zee, zee_title, 'high', zee_cut)
vtype_plot(tree_zuu, zuu_title, 'all', zuu_cut)
vtype_plot(tree_zuu, zuu_title, 'high', zuu_cut)
'''


print '\n\n\t ========== Plotting Finished =========='

     
     


