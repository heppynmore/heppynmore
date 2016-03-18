from __future__ import print_function
import os,sys,subprocess,hashlib,math
import ROOT
from samplesclass import Sample
from array import array

from myutils import ParseInfo

class TreeCache:
    def __init__(self, cutList, sampleList, path, config, optionsList=[]):
        ROOT.gROOT.SetBatch(True)
        self.config = config
        if os.path.exists("../interface/DrawFunctions_C.so"):
            ROOT.gROOT.LoadMacro("../interface/DrawFunctions_C.so")
            from ROOT import weight2
        VHbbNameSpace=config.get('VHbbNameSpace','library')
        ROOT.gSystem.Load(VHbbNameSpace)
        from ROOT import VHbb
        self.optionsList = optionsList
        self.path = path
        self._cutList = []
        for cut in cutList:
            self._cutList.append('(%s)'%cut.replace(' ',''))
        try:
            self.__tmpPath = os.environ["TMPDIR"]
        except KeyError:
            print("\x1b[32;5m %s \x1b[0m" %open('%s/data/vhbb.txt' %config.get('Directories','vhbbpath')).read())
            print("\x1b[31;5;1m\n\t>>> %s: Please set your TMPDIR and try again... <<<\n\x1b[0m" %os.getlogin())
            sys.exit(-1)

        self.__doCache = True
        if config.has_option('Directories','tmpSamples'):
            self.__tmpPath = config.get('Directories','tmpSamples')
        self.__hashDict = {}
        self.minCut = None
        self.__find_min_cut()
        self.__sampleList = sampleList
        print('\n\t>>> Caching FILES <<<\n')
        self.__cache_samples()
    
    def __find_min_cut(self):
        effective_cuts = []
        for cut in self._cutList:
            if not cut in effective_cuts:
                effective_cuts.append(cut)
        self._cutList = effective_cuts
        self.minCut = '||'.join(self._cutList)

    def __trim_tree(self, sample):
        theName = sample.name
        print('Reading sample <<<< %s' %sample)
        source = '%s/%s' %(self.path,sample.get_path)
        checksum = self.get_checksum(source)
        theHash = hashlib.sha224('%s_s%s_%s' %(sample,checksum,self.minCut)).hexdigest()
        self.__hashDict[theName] = theHash
        tmpSource = '%s/tmp_%s_%s.root'%(self.__tmpPath,sample.name,theHash)
        print('From: %s' %tmpSource)
        if self.__doCache and self.file_exists(tmpSource):
            return
        output = ROOT.TFile.Open(tmpSource,'create')
        input = ROOT.TFile.Open(source,'read')
        output.cd()
        tree = input.Get(sample.tree)
        try:
            CountWithPU = input.Get("CountWeighted")
            sample.count_with_PU = CountWithPU.GetBinContent(1) 
        except:
            print('WARNING: No Count with PU histograms available. Using 1.')
            sample.count_with_PU = 1.
            sample.count_with_PU2011B = 1.
        input.cd()
        obj = ROOT.TObject
        for key in ROOT.gDirectory.GetListOfKeys():
            input.cd()
            obj = key.ReadObj()
            if obj.GetName() == 'tree':
                continue
            output.cd()
            obj.Write(key.GetName())
        output.cd()
        theCut = self.minCut
        if sample.subsample:
            theCut += '& (%s)' %(sample.subcut)
        cuttedTree=tree.CopyTree(theCut)

        cuttedTree2 = cuttedTree.CloneTree(0)
        isvjets     = array( 'i', [ 0 ] )
        issignal    = array( 'i', [ 0 ] )
        totalweight = array( 'f', [ 0 ] )
        mvh         = array( 'f', [ 0 ] )
        jetmass     = array( 'f', [ 0 ] )
        cuttedTree2.Branch('isVJets',     isvjets,     'isVJets/I')
        cuttedTree2.Branch('isSignal',    issignal,    'isSignal/I')
        cuttedTree2.Branch('totalWeight', totalweight, 'totalWeight/F')
        cuttedTree2.Branch('mVH',         mvh,         'mVH/F')
        cuttedTree2.Branch('jetMass',     jetmass,     'jetMass/F')
        if self.config.has_option('Analysis','addToTree'):
            if eval(self.config.get('Analysis','addToTree')):

                for i in range(cuttedTree.GetEntries()):
                    cuttedTree.GetEntry(i)
                    
                    isvjets[0] = 0
                    if "ZJets" in sample.name:
                        isvjets[0] = 1
                    elif "WJets" in sample.name:
                        isvjets[0] = 2

                    issignal[0] = 0
                    if "Prime" in sample.name:
                        issignal[0] = 1

                    if sample.type == 'DATA':
                        totalweight[0]=1
                    else:
                        my_scale = float(self.get_scale(sample,self.config,float(self.config.get('General','lumi'))))
                        #my_weight = float(self.optionsList[0]['weight'])
                        totalweight[0] = math.copysign(1,cuttedTree.genWeight)*ROOT.weight2(cuttedTree.nTrueInt)*my_scale

                    mvh[0] = ROOT.TMath.Sqrt(2*cuttedTree.FatjetAK08ungroomed_pt[0]*cuttedTree.metPuppi_pt*(1-ROOT.TMath.Cos(min(abs(cuttedTree.FatjetAK08ungroomed_phi[0]-cuttedTree.metPuppi_phi),(2*ROOT.TMath.Pi())-abs(cuttedTree.FatjetAK08ungroomed_phi[0]-cuttedTree.metPuppi_phi)))))
                    jetmass[0] = ROOT.VHbb.selected_mass(cuttedTree.nFatjetAK08ungroomed, cuttedTree.FatjetAK08ungroomed_msoftdrop, cuttedTree.FatjetAK08ungroomed_pt, cuttedTree.FatjetAK08ungroomed_phi)

                    cuttedTree2.Fill()
                cuttedTree = cuttedTree2

        cuttedTree.Write()
        output.Write()
        input.Close()
        del input
        output.Close()
#        tmpSourceFile = ROOT.TFile.Open(tmpSource,'read')
#        if tmpSourceFile.IsZombie():
#            print("@ERROR: Zombie file")
        del output

    def __cache_samples(self):
        for job in self.__sampleList:
            self.__trim_tree(job)

    def get_tree(self, sample, cut):
        print('get_tree %s', sample.name)
        input = ROOT.TFile.Open('%s/tmp_%s_%s.root'%(self.__tmpPath,sample.name,self.__hashDict[sample.name]),'read')
        tree = input.Get(sample.tree)
        try:
            CountWithPU = input.Get("CountWeighted")
            sample.count_with_PU = CountWithPU.GetBinContent(1) 
        except:
            print('WARNING: No Count with PU histograms available. Using 1.')
            sample.count_with_PU = 1.
            sample.count_with_PU2011B = 1.
        if sample.subsample:
            cut += '& (%s)' %(sample.subcut)
        ROOT.gROOT.cd()
        cuttedTree=tree.CopyTree(cut)
        cuttedTree.SetDirectory(0)
        input.Close()
        del input
        del tree
        return cuttedTree

    @staticmethod
    def get_scale(sample, config, lumi = None):
        anaTag=config.get('Analysis','tag')
        theScale = 0.
        if not lumi:
            lumi = float(sample.lumi)
        if anaTag == '7TeV':
            theScale = lumi*sample.xsec*sample.sf/(0.46502*sample.count_with_PU+0.53498*sample.count_with_PU2011B)
        elif anaTag == '8TeV':
            theScale = lumi*sample.xsec*sample.sf/(sample.count_with_PU)
        elif anaTag == '13TeV':
            theScale = lumi*sample.xsec*sample.sf/(sample.count_with_PU)
        return theScale

    @staticmethod
    def get_checksum(file):
        # If file is remote
        if ':' in file:
            srmPath = 'srm://t3se01.psi.ch:8443/srm/managerv2?SFN=//pnfs/psi.ch/cms/trivcat/'
            command = 'lcg-ls -b -D srmv2 -l %s' %file.replace('root://cms-xrd-global.cern.ch//','%s/'%srmPath)
            print(command)
            p = subprocess.Popen(command, stdout=subprocess.PIPE, stderr=subprocess.STDOUT,shell=True)
            lines = p.stdout.readlines()
            print(lines)
            if any('No such' in line for line in lines):
                print('File not found')
                print(command)
            line = lines[1].replace('\t* Checksum: ','')
            checksum = line.replace(' (adler32)\n','')
        else:
            command = 'md5sumi %s' %file
            p = subprocess.Popen(command, stdout=subprocess.PIPE, stderr=subprocess.STDOUT,shell=True)
            lines = p.stdout.readlines()
            checksum = lines[0]
        return checksum
    
    @staticmethod
    def file_exists(file):
        # If file is remote
        if ':' in file:
            srmPath = 'srm://t3se01.psi.ch:8443/srm/managerv2?SFN=//pnfs/psi.ch/cms/trivcat/'
            command = 'lcg-ls %s' %file.replace('root://cms-xrd-global.cern.ch//','%s/'%srmPath)
            p = subprocess.Popen(command, stdout=subprocess.PIPE, stderr=subprocess.STDOUT,shell=True)
            line = p.stdout.readline()
            return not 'No such file or directory' in line
        else:
            return os.path.exists(file)
