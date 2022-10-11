
a , b , c = map(int , input().split())


maiorab = (a+b+abs(a-b))/2

if(maiorab < c):
    print("%d eh o maior" %c)
elif(maiorab > c):
    print("%d eh o maior" % maiorab)