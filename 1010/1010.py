cod1 , qtd1 , valor1 = input().split()
cod2 , qtd2 , valor2 = input().split()

cod1 = int(cod1)
cod2 = int(cod2)
qtd1 = int(qtd1)
qtd2 = int(qtd2)
valor1 = float(valor1)
valor2 = float(valor2)

tot1 = valor1 * qtd1
tot2 = valor2 * qtd2

print("VALOR A PAGAR: R$ %.2f" % (tot1 + tot2))