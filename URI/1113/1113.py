x , y = map(float , input().split())

while(x != y):

    if(x < y):
        print('Crescente')
    elif(x > y):
        print('Decrescente')
    x , y = map(float , input().split())
