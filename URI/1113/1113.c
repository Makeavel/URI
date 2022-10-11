#include<stdio.h>

int main(){

    int x , y ;
    scanf("%d %d", &x , &y);

    while(x != y){
        // se o valor de y for maior que o de x (3 > 5) 
        if(x < y){
            printf("Crescente\n");   
        }
        //se o valor de x for maior que o de y (5 > 3)
        else if(x > y){
            printf("Decrescente\n");
        }
        scanf("%d %d", &x , &y);
    }

    return 0;
}