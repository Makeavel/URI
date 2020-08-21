#include<stdio.h>

int main(){

    int i, numeros , valor; 

    scanf("%d", &numeros);
    int vetor[numeros];

    for(i = 0 ; i<=numeros-1 ; i++){

       scanf("%d", &vetor[i]);
    }// for

    for(i = 0; i< numeros ; i++){
        
       valor = vetor[i];

       if(valor != 0){
           
           if(valor % 2 == 0){

               if(valor >= 1){
                   printf("EVEN POSITIVE\n");
               }
               else if(valor <= -1){
                   printf("EVEN NEGATIVE\n");
               }
           }//2º if
           else{
               if(valor >= 1){
                   printf("ODD POSITIVE\n");
               }
               else if(valor <= -1){
                   printf("ODD NEGATIVE\n");
               }
           }
       }
       else{
           printf("NULL\n");
       }

    }//forzão

    return 0;
}