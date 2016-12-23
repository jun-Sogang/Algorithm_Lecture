a,b=map(int,raw_input().split())
c=([0,31,59,90,120,151,181,212,243,273,304,334][a-1]+b)%7*3
print'SUNMONTUEWEDTHUFRISAT'[c:c+3]
#String Split