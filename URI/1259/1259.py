listapar = []
listaimpar = []
cont = int(input())

for c in range(0,cont):
    x = int(input())
    if( x % 2 == 0):
        listapar.append(x)
    else:
        listaimpar.append(x)

listapar.sort()
listaimpar.sort(reverse = True)

print(f"{listapar}")
print(f"{listaimpar}")
