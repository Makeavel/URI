#include<stdio.h>


int main(){
    double soma ,a , b;

    scanf("%lf", &a);
    scanf("%lf", &b);

    soma = ((a * 3.5) + (b * 7.5))/11;

    printf("MEDIA = %.5lf\n", soma);

    return 0;
    
}