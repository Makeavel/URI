#include<stdio.h>

int main(){

    double pi = 3.14159 , raio , vol;
    scanf("%lf", &raio);

    vol = ((4/3.0)*pi *(raio * raio * raio));

    printf("VOLUME = %.3lf", vol);

    return 0;
}