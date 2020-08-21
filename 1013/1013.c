#include<stdio.h>

int main(){

    int a , b , c, maiorab ;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    maiorab = (a+b+abs(a-b))/2;

    if(maiorab > c){
        printf("%d eh o maior\n", maiorab);
    }
    else{
        printf("%d eh o maior\n", c);
    }

    return 0;
}