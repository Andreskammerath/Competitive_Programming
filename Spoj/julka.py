cont = 10
lista = []
lista2 = []
while(cont):
	x = input()
	y = input()
	r = (x + y)/2
	r2 = x - r
	lista.append(r)
	lista2.append(r2)
	cont = cont -1
cont = 0
while(cont < 10):
	print(lista[cont])
	print(lista2[cont])
	cont = cont + 1