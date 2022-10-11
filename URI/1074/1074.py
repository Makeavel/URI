cont = int(input())
lista = []
for _ in range(0,cont):
    inp = int(input())
    lista.append(inp)

for percorre in lista:

    if(percorre != 0):
           
        if(percorre % 2 == 0):

            if(percorre >= 1):
                print("EVEN POSITIVE\n")
                    
            elif(percorre <= -1):
                print("EVEN NEGATIVE\n") 
                #2º if
        else:
            if(percorre >= 1):
                print("ODD POSITIVE\n")
                    
            elif(percorre <= -1):
                print("ODD NEGATIVE\n")
                    
    else:
        print("NULL\n")
       