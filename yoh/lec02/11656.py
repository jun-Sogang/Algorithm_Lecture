s = raw_input()
suffixDict = []

for i in xrange(len(s)):
	suffixDict.append(s[i:])
suffixDict.sort()

for item in suffixDict:
	print item