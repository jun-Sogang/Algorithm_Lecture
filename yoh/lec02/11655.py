import string
lowers = list(string.ascii_lowercase)
uppers = list(string.ascii_uppercase)

def rot13():
	result = ''
	for letter in raw_input():
		if 'A' <= letter <= 'Z':
			i = uppers.index(letter)
			if i < 13:
				result += uppers[i+13]
			else:
				result += uppers[i-13]
		elif 'a' <= letter <= 'z':
			i = lowers.index(letter)
			if i < 13:
				result += lowers[i+13]
			else:
				result += lowers[i-13]
		else:
			result += letter
	print result
	return None

rot13()