#! /usr/bin/env python
import os, pickle, sys, ROOT, logging
ROOT.gROOT.SetBatch(True)
from optparse import OptionParser
from myutils import BetterConfigParser, copytree, ParseInfo

#logging level setup
logging.basicConfig(filename='prepare_environment_with_config.log', format='%(asctime)s %(levelname)s:%(message)s', datefmt='%m/%d/%Y %I:%M:%S %p', level=logging.DEBUG) # debugging levels are CRITICAL=50, ERROR=40, WARNING=230, INFO=20, DEBUG=10, NOTSET=0
logger=logging.getLogger(__name__)
print('Logging level set to ' + str(logger.getEffectiveLevel()))

argv = sys.argv

#get files info from config
parser = OptionParser()
parser.add_option("-C", "--config", dest="config", default=[], action="append",
                      help="directory config")
parser.add_option("-S", "--samples", dest="names", default="",
                              help="samples you want to run on")
(opts, args) = parser.parse_args(argv)


config = BetterConfigParser()
config.read(opts.config)

namelist=opts.names.split(',')

pathIN = config.get('Directories','PREPin')
pathOUT = config.get('Directories','PREPout')
samplesinfo=config.get('Directories','samplesinfo')
prefix=config.get('General','prefix')

info = ParseInfo(samplesinfo,pathIN)

for job in info:
    if not job.name in namelist: 
        continue
    if job.subsample:
        continue
    copytree(pathIN,pathOUT,prefix,job.prefix,job.identifier,'',job.addtreecut)
