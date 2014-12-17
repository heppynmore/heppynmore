VHbb Analyzer
=============

Welcome
-------

This code was used for the ETH VHbb analysis of LHC Run1. It takes as input the step2 from the VHbb team and produces plots, tables, and results for the VHbb CMS paper. 

Structure
---------

- data : In the data directory there are all the BDT xml and C weights files and the info file for that specific training. The info files are specific file of the ETH VHbb framenwork, where the most important information of the training are stored.

- interaface : The interface file are mostly deprecated from a previous c++ version of the framework. What is used now is the namespace VHbbNameSpace, and the BTagReshaping libraries. In the namespace variables not present in the ntuples are computed on the fly. Theory corrections, electrons and muon efficiencies are also stored in this namespace.

- plugins : it just contain pieces of the old C++ framework

- python : main directory. Specific readme is present inside it.

- src and test : contains the code for the fitting. This code is in C++ and is somehow parallel to the python code. It need to create plot in a different way and fit them using SideBandAnalysis-Pt50To100/fit_sideband_syst.cxx


System specific configurations
------------------------------

There are still several system specific configuration to be done before having this framework on a running stage.

- Compile the following files with your favourite version of ROOT:

	interface/BTagReshaping.h
	interface/btag_payload_b.h
	interface/btag_payload_light.h
	interface/btagshape.h
	interface/VHbbNameSpace.h
	python/myutils/Ratio.C

- If you want to run jobs using the python/runAll.sh script modify the environmental variables defined in it according to your cluster
	 

Caveats
-------

The framework is meant to be as flexible as possible using configuration files, but there are still a few places where variable are hardcoded.

Configuration
-------------

The framework mainly controlled by configuration files. All configuration files must stored in one subdirectory in python. The whole framework depends on the following config files

- paths : this is the main configuration file that links all the others. Here you specify you working directories.

- samples_nosplit.cgf : this is the second most important configuration file. It bookkeeps the properties of all the samples you are using. This is very important for all stages of the framwork. From the properties of the samples the behaviour of the framework change singnificantly from the preparation stage, to the plotting. IMPORTANT: As soon as you run the first stage of the framework the information written in this file are saved and you can *not* modify it just changing the config, but you need to run a script (updateinfo.py). 

- vhbbPlotDef.ini : this configuration is important for the plotting stage. It defines the variables the range you want to plot them, the labels connected to it and the number of bins.

- general : in this config you have many general parameters for the different stages of the framwork. 

- datacard, plots, regression, training : this configuration files regulate the behaviour of the different stages of the framework.

- lheWeights : this is a special configuration file which is needed for the merging of the different bins of the DYJets e WJets montecarlo production.


Most of the congiguration files are commented, but of course only experience helps to understand the behaviour of each variable.


Running the framework
---------------------

The README inside python directory gives you the instruction on how to run the framework on batch mode - which is most likely not working unless you are working in the PSI cluster.
In order to run the software interactevely you can use runAll.sh script. Running runAll.sh without any option will give you the help on how to use it and run the different steps of the analysis described in the README in the python dir.


