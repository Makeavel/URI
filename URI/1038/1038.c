#include<stdio.h>

int main(){

    int x , a ;
    double b1 , b2 , b3 , b4 , b5;
        scanf("%d", &x);
        scanf("%d", &a);

    switch(x){
            case 1:
                b1 = 4.00 * a;
                printf("Total: R$ %.2lf\n", b1);
            break;
            case 2:
                b2 = 4.50 * a;
                printf("Total: R$ %.2lf\n", b2);
            break;
            case 3:
                b3 = 5.00 * a;
                printf("Total: R$ %.2lf\n", b3);
            break;
            case 4:
                b4 = 2.00 * a;
                printf("Total: R$ %.2lf\n", b4);
            break;
            case 5:
                b5 = 1.50 * a;
                printf("Total: R$ %.2lf\n", b5);
            break;
       
    }
 return 0;
}