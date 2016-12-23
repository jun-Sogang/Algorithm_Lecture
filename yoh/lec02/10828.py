stack = []
for i in range(input()):
	command = raw_input()

	if command[:4] == 'push':
		stack.append(int((command[4:])))
	elif command == 'pop':
		if stack == []:
			print -1
		else:
			print stack.pop()
	elif command == 'size':
		print len(stack)
	elif command == 'empty':
		if stack == []:
			print 1
		else:
			print 0
	elif command == 'top':
		if stack == []:
			print -1
		else:
			print stack[-1]