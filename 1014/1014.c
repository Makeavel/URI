#include<stdio.h>

int main(){

    double km , l , p;
    scanf("%lf", &km); // quilometros rodados
    scanf("%lf", &l); // litros no tanque

    p = km/l;

    printf("%.3lf km/l\n", p);

    return 0;
}