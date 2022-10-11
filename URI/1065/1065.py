count = 0

for c in range(0,5):
    num = int(input())

    if( num % 2 == 0):
        count = count + 1
    
print("%d valores pares" % count)