#include<stdio.h>

int main(){ 
 
    int i ,valor , cont=0 ;

    scanf("%d",&valor);

    while(cont != 6){

        if(valor % 2 != 0){
            printf("%d\n", valor);
            valor = valor + 2;  // se o valor inserido for impar, +2 para o proximo tbm ser impar
            cont = cont + 1; // contador para sair do while e bater a cota de 6 impares
        }
        else{
            valor = valor + 1; // se o numero iniciar em par cai aqui
        }
    }
    
    return 0;
}