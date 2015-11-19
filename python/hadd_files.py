#! /usr/bin/env python

# dummy script to hadd files
# author pierluigi bortignon
# 30 October 2015
# v0.0

import ROOT, sys, os, logging
from optparse import OptionParser

argv = sys.argv

#get files info from config
parser = OptionParser()
parser.add_option("-T", "--target-file", dest="target_file", default='',
                    help="target file")
parser.add_option("-D", "--target-dir", dest="target_dir", default='./',
                    help="target directory")
parser.add_option("-S", "--source", dest="source_dir", default='./',
                    help="source directory where the script can find your root files")
(opts, args) = parser.parse_args(argv)

print(opts)
if opts.target_file=="":
	print('Please provide the target file name: --target-file <target file name>')
	sys.exit(-1)

def __do_hadd(target_file,filelist):
	'target and filelist are strings with names of file'
	print('@LOG: Hadding files using the command: hadd -f %s %s' % (target_file,filelist))
	os.system('hadd -f %s %s' % (target_file,filelist))
	print('@LOG: File %s created',target_file)


def __convert_files_list(filelist):
	return str(__file_list)


def hadd_files(target_file,target_dir,source_dir):
	'Starting from a directory list all files and hadd them to a target directory'
	__tuple_dir_and_files = os.walk(source_dir) # read recursevely all subdirectories and files.
        # os.walk(source_dir) returns an ntuple of all sub_directories with at least one dir or one file. 
        # Each evntry in the ntuple has this structure: 'full path, list of directory in that path, list of files in that path'
	__fileslist=''
	__complete_path=[]
	__list_of_files=[]
	__target_file = '%s/%s' %(target_dir,target_file)
	for __tuple_entry in __tuple_dir_and_files:
		__number_of_files=len(__tuple_entry[2]) # __tuple_entry[2] is the list of files inside the full path __tuple_entry[0]
		logging.debug(__number_of_files)
    	        if(__number_of_files>0):
		    for __file in __tuple_entry[2]:
    		        __list_of_files.extend(['%s/%s' %(__tuple_entry[0], __file)]) # __tuple_entry[0] is the full path of the files
    	# check if these are root files and store the information
    	__skimmed_list_of_files = [el for el in __list_of_files if ('root' in el)]
	for __root_file in __skimmed_list_of_files:
    		logging.debug(__root_file)
    		__fileslist='%s %s' %( __fileslist, __root_file )
	__do_hadd(__target_file,__fileslist)


if __name__ == "__main__":
	hadd_files(opts.target_file,opts.target_dir,opts.source_dir)
	sys.exit(0)
