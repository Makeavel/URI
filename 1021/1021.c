#include<stdio.h>

int main(){

    int valor , nota_100, nota_50 , nota_20 , nota_10, nota_5 , nota_2 ;
    double moeda_11 , moeda_50 , moeda_25 , moeda_10, moeda_5 , moeda_1 ;
    int cont = 0;
    scanf("%lf", &valor);
    //  ------------------------           notas
nota_100 = valor/100;  
nota_50 = valor/50;
nota_20 = valor/20;
nota_10 = valor/10;
nota_5 = valor/5;
nota_2 = valor/2;
    // ------------------------           moedas
    printf("NOTAS:\n");
    while(nota_100 <= 0){
        cont = cont + 1;
    }
    printf("%d nota(s) de R$ 100.00\n",cont);
    cont = 0;
    while(valor - nota_50 < 50.00){
        cont = cont + 1;
    }
    printf("%d nota(s) de R$ 50.00\n",cont);
    cont = 0;
    while(valor - nota_20 < 20.00){
        cont = cont + 1;
    }
    printf("%d nota(s) de R$ 20.00\n",cont);
    cont = 0;
    while(valor - nota_10 < 10.00){
        cont = cont + 1;
    }
    printf("%d nota(s) de R$ 10.00\n",cont);
    cont = 0;
    while(valor - nota_5 < 5.00){
        cont = cont + 1;
    }
    printf("%d nota(s) de R$ 5.00\n",cont);
    cont = 0;
    while(valor - nota_2 < 2.00){
        cont = cont + 1;
    }
    printf("%d nota(s) de R$ 2.00\n",cont);
    cont = 0;
    // ----------------------------       moedas 

    printf("MOEDAS:\n");
    while(valor - moeda_1 < 1.00){
        cont = cont + 1;
    }
    printf("%d moeda(s) de R$ 1.00\n",cont);
    cont = 0;
    while(valor - moeda_50 < 0.50){
        cont = cont + 1;
    }
    printf("%d moeda(s) de R$ 0.50\n",cont);
    cont = 0;
    while(valor - moeda_25 < 0.25){
        cont = cont + 1;
    }
    printf("%d moeda(s) de R$ 0.25\n",cont);
    cont = 0;
    while(valor - moeda_10 < 0.10){
        cont = cont + 1;
    }
    printf("%d moeda(s) de R$ 0.10\n",cont);
    cont = 0;
    while(valor - moeda_5 < 0.05){
        cont = cont + 1;
    }
    printf("%d moeda(s) de R$ 0.05\n",cont);
    cont = 0;
    while(valor - moeda_1 < 0.01){
        cont = cont + 1;
    }
    printf("%d moeda(s) de R$ 0.01\n",cont);


    return 0;
}