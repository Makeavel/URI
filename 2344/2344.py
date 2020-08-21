notas = int(input())

if(notas == 0):
    print('E')
elif(notas <= 1 or notas <=35):
    print('D') 
elif(notas <= 36 or notas <=60):
    print("C")
elif(notas <=61 or notas <=85):
    print("B")
elif(notas <=86 or notas < 101):
    print("A")               