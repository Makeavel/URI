#include<stdio.h>

int main(){

    double valor1 , valor2 , p1 , p2 ;
    int codigo1 , codigo2;
    int qtd1 , qtd2 ;

    scanf("%d %d %lf",&codigo1 ,&qtd1 , &valor1);
    scanf("%d %d %lf", &codigo2, &qtd2, &valor2);

    p1 = qtd1 * valor1;
    p2 = qtd2 * valor2;
    p1 = p1 + p2;
    
    printf("VALOR A PAGAR: R$ %.2lf\n", p1);
    return 0;
}