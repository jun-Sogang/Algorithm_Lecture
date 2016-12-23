import sys
r = lambda: sys.stdin.readline().strip()

def isValid(aString):
	n = len(aString)
	stack = 0
	for l in aString:
		if l == '(':
			stack += 1
		else:
			stack -= 1
		if stack <0:
			return 'NO'
	if stack == 0:
		return 'YES'
	else:
		return 'NO'

for i in range(int(r())):
	print isValid(r())