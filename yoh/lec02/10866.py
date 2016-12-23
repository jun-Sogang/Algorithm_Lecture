import sys
inin = lambda: sys.stdin.readline().strip()
dq = []

for i in range(int(inin())):
	comm = inin().split()
	if comm[0] == 'push_back':
		dq.append(int(comm[1]))
	elif comm[0] == 'push_front':
		dq.insert(0, int(comm[1]))
	elif comm[0] == 'pop_front':
		if dq == []:
			print -1
		else:
			print dq.pop(0)
	elif comm[0] == 'pop_back':
		if dq == []:
			print -1
		else:
			print dq.pop()
	elif comm[0] == 'size':
		print len(dq)
	elif comm[0] == 'empty':
		if dq == []:
			print 1
		else:
			print 0
	elif comm[0] == 'front':
		if dq == []:
			print -1
		else:
			print dq[0]
	elif comm[0] == 'back':
		if dq == []:
			print -1
		else:
			print dq[-1]