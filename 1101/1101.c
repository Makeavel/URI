#include<stdio.h>

void operacao(){

    int  i , dif = 0 , soma= 0, num1 , num2 ;
    scanf("%d %d", &num1 , &num2);

    dif = abs(num2 - num1)+2;

    if(num1 != 0 || num2 != 0){
        if(num1 < num2){
        // se num1 for menor que num2 entra nesse for
            for(i = num1 ; i <= num2 ; i++){
                printf("%d ",i);

                num1 = num1 + 1;
                soma = num1 + soma;
            }
        }

        else if(num2 < num1){
        // se num2 for menor que num1 entra neste for
            for(i = num2 ; i <= num1 ; i++){
                //printf("%d ",i);

                soma = num1 + soma;
                printf(" %d ",soma);
            }
        }
        printf("Sum=%d",soma);
    }

}

int main(){
    operacao();
    return 0;
}