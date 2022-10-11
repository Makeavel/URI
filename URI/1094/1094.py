num_rep = int(input())
totalColeho = 0
totalSapos = 0
totalRatos = 0
for i in range(num_rep):
    
    quantia , animal = input().split()
    str(animal)

    if (animal == 'C'):
        totalColeho = totalColeho + int(quantia)
    
    elif (animal == 'S') :
        totalSapos = totalSapos + int(quantia)

    elif (animal == 'R') :
        totalRatos = totalRatos + int(quantia)



total = totalColeho + totalRatos + totalSapos
percentC = float((totalColeho * 100.0) / int(total))
percentR = float((totalRatos * 100.0) / total)
percentS = float((totalSapos * 100.0) / total)

print("Total: %d cobaias" % total)
print("Total de coelhos: %d" % totalColeho)
print("Total de ratos: %d" % totalRatos)
print("Total de sapos: %d" % totalSapos)
print("Percentual de coelhos: %.2f %%" % percentC)
print("Percentual de ratos: %.2f %%" % percentR)
print("Percentual de sapos: %.2f %%" % percentS)