#include<stdio.h>

void receita(){

    float money , aux , aux2;
        scanf("%f",&money);
    
    if(money >= 0 && money <= 2000){
        printf("Isento\n");
    }
    else{ // else 1
        if(money > 2000 && money <= 3000){
            money = money - 2000;
            money = money * 0.08;
            printf("R$ %.2f\n",money);
        }
    else{ //else 2
        if(money >3000 && money <=4500){
            money = money - 3000;
            money = (money * 0.18)+80;
            printf("R$ %.2f\n", money);
            }
    else{ //else 3
        //somatorio da qtd max de cobrança de cada categoria
        aux = 80 + 270; 
        if(money > 4500){
            money = money - 4500;
            money = (money * 0.28)+aux;
            printf("R$ %.2f\n", money);
        }    
    }//else 3
    } // else 2
    } // else 1
    
}

int main(){
    receita();
    return 0;
}