import sys
putin = lambda: sys.stdin.readline().strip()

asciiList = range(ord('a'), ord('z')+1)
result = [0]*len(asciiList)

for l in putin():
	result[asciiList.index(ord(l))] += 1
	
print str(result)[1:-1].replace(',', '')