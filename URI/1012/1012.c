#include<stdio.h>

int main(){

    double a , b , c , tri , cir , trap , quad , ret , pi = 3.14159;
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    tri = (a * c)/2;
    cir = pi * (c * c);
    trap = ((a + b) * c)/ 2 ;
    quad = b * b;
    ret = a * b;

    printf("TRIANGULO: %.3lf\n" , tri);
    printf("CIRCULO: %.3lf\n", cir);
    printf("TRAPEZIO: %.3lf\n", trap);
    printf("QUADRADO: %.3lf\n", quad);
    printf("RETANGULO: %.3lf\n", ret);

    return 0;
}