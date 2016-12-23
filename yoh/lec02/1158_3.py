n, m = map(int, raw_input().split())

def josephus(n, m):
	result = []
	queue = range(1, n+1)
	m_init = m
	while queue:
		m = m_init
		if len(queue) <= m:
			m = m % len(queue)
#		print len(result)
#		print 'length of que =', len(queue)
#		print 'm =',m
		if m == 0:
			result.append(queue.pop())
		else:
			queue = queue[m-1:] + queue[:m-1]
			result.append(queue.pop(0))
#		print 'queue =', queue
#		print 'result =', result
#		print '-'*40
	return result

print '<' + str(josephus(n, m))[1:-1] + '>'