def recSigma(n):
	if n == 1:
		return 1
	else:
		return n + recSigma(n-1)
print recSigma(input())