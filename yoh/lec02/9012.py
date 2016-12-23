for i in range(input()):
	stringInput = raw_input()
	stack = []
	breaker = False
	for p in stringInput:
		if p == '(':
			stack.append(p)
		elif p == ')':
			if len(stack) == 0:
				print 'NO'
				breaker = True
				break
			else:
				stack.pop()
	if len(stack) == 0 and breaker == False:
		print 'YES'
	elif breaker == False:
		print 'NO'