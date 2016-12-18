input()
NUMBERS = map(int, raw_input().split())
min, max = NUMBERS[0], NUMBERS[0]
for n in NUMBERS[1:]:
	if n < min:
		min = n
	elif n > max:
		max = n
print min, max