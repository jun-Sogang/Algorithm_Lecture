n, m = map(int, raw_input().split())

def josephus(n, m):
	result = []
	queue = range(1, n+1)
	print 'first queue =', queue
	print '-'*40
	while queue:
		queue = queue[m-1:] + queue[:m-1]
		print 'changed queue =', queue
		result.append(queue.pop(0))
		print 'result is', result
		print 'popped queue is', queue
		print '-'*40
	return result

print '<' + str(josephus(n, m))[1:-1] + '>'