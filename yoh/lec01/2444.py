n = input()
for i in range(1, n+1):
	Star1 = '*'*(2*i - 1)
	Blank1 = ' '*(n-i)
	print Blank1 + Star1
for i in range(n+1, 2*n):
	Star2 = '*'*(4*n - 2*i - 1)
	Blank2 = ' '*(i-n)
	print Blank2 + Star2