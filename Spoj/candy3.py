t_c = int(input())
ans = []
for i in range(0,t_c):
	blank = input()
	n = int(input())
	sum = 0
	for i in range(0,n):
		sum = sum + int(input())
	if(sum % n == 0):
		ans.append("YES") 
	else:
		ans.append("NO")

for i in range(0,t_c):
	print(ans[i] + "\n")



