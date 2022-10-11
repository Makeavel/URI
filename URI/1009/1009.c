#include<stdio.h>

int main(){

    char nome[50];
    double salario , vendido , porcento ;

    scanf("%s", &nome);
    scanf("%lf", &salario);
    scanf("%lf", &vendido);

    porcento = (vendido * 0.15)+ salario;


    printf("TOTAL = R$ %.2lf", porcento);

    return 0;
}