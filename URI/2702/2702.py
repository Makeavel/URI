frango , bife , massa = map(int , input().split())
numf , numb , numM = map(int , input().split())
resultado = 0

if(frango >= 0 and bife >= 0 and massa >= 0):

    if(numf >= 0 and numb >= 0 and numM >= 0):
        if(numf > frango):
            resultado = numf - frango
        if(numb > bife):
            resultado = resultado + (numb - bife)
        if(numM > massa):
            resultado = resultado + (numM - massa)

print(resultado)  