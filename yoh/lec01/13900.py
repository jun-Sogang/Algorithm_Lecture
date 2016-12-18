input()
nums = map(int, raw_input().split())
result = 0
for i in range(len(nums)):
	result += nums[i] * sum(nums[i+1:])
print result