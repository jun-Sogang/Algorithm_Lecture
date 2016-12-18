DAYS = ['SUN', 'MON', 'TUE', 'WED', 'THU', 'FRI', 'SAT']
x_days = 0
x, y = map(int, raw_input().split())
for i in range(1, x):
	if i == 2:
		x_days += 28
	elif i in [4, 6, 9, 11]:
		x_days += 30
	else:
		x_days += 31
print DAYS[(x_days + y) % 7]