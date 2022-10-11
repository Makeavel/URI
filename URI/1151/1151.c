#include<stdio.h>

void fibo( int qtd){

    int cont, n, f1 = 0 , f2 = 1;  

    printf("%d %d ",f1 , f2);
    for(cont = 0; cont < qtd-2 ;cont++){
         // função de fibonnaci
         n = f1 + f2;
         f1 = f2;
         f2 = n;
         if(cont < qtd - 3){
            printf("%d ", n);
         }    
         else{
             printf("%dfim", n);
         }
    }
}

int main(){
    
    int qtd ;
    scanf("%d", &qtd);
    
    fibo(qtd);
    return 0;
}



