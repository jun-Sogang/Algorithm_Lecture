s = raw_input()
i = 0
while i < len(s):
	if len(s)/10 == i/10:
#		print '-------------last-------------'
		print s[i:i+len(s)%10]
	else:
		print s[i:i+10]
	i += 10