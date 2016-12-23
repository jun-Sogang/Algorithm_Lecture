a = ord('a')
z = ord('z')
A = ord('A')
Z = ord('Z')
zero = ord('0')
nine = ord('9')
while True:
	aString = raw_input()
	if aString == '':
		break

	lower, upper, number, space = 0, 0, 0, 0
	for letter in aString:
		letter_ascii = ord(letter)
		if a <= letter_ascii <= z:
			lower += 1
		elif A <= letter_ascii <= Z:
			upper += 1
		elif zero <= letter_ascii <= nine:
			number += 1
		elif letter_ascii == ord(' '):
			space += 1
	print lower, upper, number, space