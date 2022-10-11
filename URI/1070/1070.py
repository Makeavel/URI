cont = 0
valor = int(input())

while(cont != 6):
    
    if(valor % 2 != 0):
        print("%d" % valor)
        cont = cont + 1
        valor = valor + 2
    else:
        valor = valor + 1
       