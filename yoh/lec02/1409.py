import sys
stdinput = lambda: sys.stdin.readline().strip()

text = stdinput()
cursor = len(text)
for i in range(int(stdinput())):
	print text[:cursor] + '|' + text[cursor:]
	command = stdinput()
	if command[0] == 'L' and cursor >= 1:
		cursor -= 1
	elif command[0] == 'D' and cursor <= len(text)-1:
		cursor += 1
	elif command[0] == 'B' and cursor >= 1:
		text = text[:cursor-1] + text[cursor:]
		cursor -= 1
	elif command[0] == 'P':
		text = text[:cursor] + command[2:].lower() + text[cursor:]
		cursor += len(command)-2
print text