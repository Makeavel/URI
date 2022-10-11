#include<stdio.h>
  // OK
int main(){

    int horas ;
    float valor , total , d;

    scanf("%d", &horas);
    scanf("%f", &valor);
    scanf("%f", &total);
    d = valor * total ;
    printf("NUMBER = %d\n", horas);
    printf("SALARY = U$ %.2f\n", d);

    return 0;
}