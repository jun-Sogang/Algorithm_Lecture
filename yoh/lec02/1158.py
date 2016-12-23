n, m = map(int, raw_input().split())

def josephus(n, m):
	result = []
	queue = range(1, n+1)
	while queue:
		for i in range(m-1):
			queue.append(queue.pop(0))
		result.append(queue.pop(0))
	return result

print '<' + str(josephus(n, m))[1:-1] + '>'