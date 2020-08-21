#include<stdio.h>
#include<math.h>

int main(){

    double bask1 , bask2 , delta , a , b , c;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);

        delta = sqrt((b*b)-4*a*c);

        bask1 = (-b + delta )/ (2*a);
        bask2 = (-b - delta )/ (2*a);            

    if(a > 0 && delta > 0){
        printf("R1 = %.5lf\n", bask1);
        printf("R2 = %.5lf\n", bask2);
    }
    else{
        printf("Impossivel calcular\n");
    }
    return 0;
}