n = input()

inputs = []
m = 1
for i in range(n):
 	a = input()
 	m = max(m,a)
 	inputs.append(a)

fact = [1,1]

for i  in range(2,m+1):
	fact.append(fact[i-1] * i)

for inp in inputs:
	print(fact[inp])