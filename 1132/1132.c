#include<stdio.h>

int main(){

    int x , y , i , j, sum = 0 , x1 , y1;

    scanf("%d", &x);
    scanf("%d", &y);

    i = abs(x - y) ;

    if(x < y){
        x1=y;//maior
        y1 =x;//menor
    }
    else{
        x1=x;//maior
        y1=y;//menor
    }

    for(j=0; j <= i ; j++){

        if( i % 13 != 0){
            sum = i + sum; //ta errado, n é i 
        }
        else{

        }
        
    }
    printf("\n%d", sum);
    return 0;
}