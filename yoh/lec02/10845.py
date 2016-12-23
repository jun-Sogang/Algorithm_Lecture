import sys
inin = lambda: sys.stdin.readline().strip()
queue = []

for i in range(int(inin())):
	command = inin().split()
	if command[0] == 'push':
		queue.append(int(command[1]))
	elif command[0] == 'pop':
		if queue == []:
			print -1
		else:
			print queue.pop(0)
	elif command[0] == 'size':
		print len(queue)
	elif command[0] == 'empty':
		if queue == []:
			print 1
		else:
			print 0
	elif command[0] == 'front':
		if queue == []:
			print -1
		else:
			print queue[0]
	elif command[0] == 'back':
		if queue == []:
			print -1
		else:
			print queue[-1]