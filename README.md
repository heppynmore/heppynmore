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




