import sys
stdinput = lambda: sys.stdin.readline().strip()

text = stdinput().lower()
cursor = len(text)
for i in range(int(stdinput())):
#	print '@@@@@' + text[:cursor] + '_' + text[cursor:]
	command = stdinput()
	if command == '':
		print 'Input Command!'
	else:
		if command[0] == 'L' and cursor >= 1:
			cursor -= 1
		elif command[0] == 'D' and cursor <= len(text)-1:
			cursor += 1
		elif command[0] == 'B' and cursor >= 1:
			text = text[:cursor-1] + text[cursor:]
			cursor -= 1
		elif command[0] == 'P':
			if command[1] != ' ':
				print 'Wrong Command, put space'
			text = text[:cursor] + command[2:].lower() + text[cursor:]
			cursor += len(command)-2
		else:
			print 'Wrong Command'
print text