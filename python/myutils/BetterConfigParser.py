import os,re,ConfigParser

class BetterConfigParser(ConfigParser.SafeConfigParser):

    # Workaround for python readline bug. Details in
    # https://bugzilla.redhat.com/show_bug.cgi?id=1040009
    if not os.isatty(1):
	os.environ['TERM'] = 'dumb'

    def get(self, section, option):
        result = ConfigParser.SafeConfigParser.get(self, section, option, raw=True)
        result = self.__replaceSectionwideTemplates(result)
        return result

    def optionxform(self, optionstr):
        '''
        enable case sensitive options in .ini files
        '''
        return optionstr

    def __replaceSectionwideTemplates(self, data):
        '''
        replace <section|option> with get(section,option) recursivly
        '''
        result = data
        findExpression = re.compile("((.*)\<!(.*)\|(.*)\!>(.*))*")
        groups = findExpression.search(data).groups()
        if not groups == (None, None, None, None, None): # expression not matched
            result = self.__replaceSectionwideTemplates(groups[1])
            result += self.get(groups[2], groups[3])
            result += self.__replaceSectionwideTemplates(groups[4])
        return result
