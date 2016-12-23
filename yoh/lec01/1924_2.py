DAYS = ['SUN', 'MON', 'TUE', 'WED', 'THU', 'FRI', 'SAT']
DAYS_OF_MONTH = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
x_days = 0
x, y = map(int, raw_input().split())
for i in range(1, x):
	x_days += DAYS_OF_MONTH[i-1]
print DAYS[(x_days + y) % 7]