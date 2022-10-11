money = float(input())

if(money >= 0 and money <= 2000):
    print("Isento")
else:
    if(money > 2000 and money <= 3000):
        money = money - 2000
        money = money * 0.08
        print('R$ %.2f' % money)
    else:
        if(money > 3000 and money <= 4500):
            money = money - 3000
            money = ( money * 0.18)+80
            print('R$ %.2f'  % money)
        else:
  #somatorio da qtd max de cobrança das categ. ateriores
            aux = 80 + 270    
            if(money > 4500):
                money = money - 4500
                money = (money * 0.28) + aux
                print('R$ %.2f' %money)
