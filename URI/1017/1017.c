#include<stdio.h>
#include<stdlib.h>

int main(){

double tempo, velocidade, litros = 12;
double calc, total ;
scanf("%lf %lf" ,&tempo, &velocidade);

calc = velocidade * tempo ;

calc = calc/12;

printf("%.3lf\n", calc);

return 0;
}