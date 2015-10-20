x = map(int, raw_input().split())
 
num = map(int, raw_input().split())
 
q = [int(input()) for y in range(x[1])]
 
for p in q:
	if p in num:
		print("YES")
	else:
		print("NO")
