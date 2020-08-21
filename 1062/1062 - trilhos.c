#include<stdio.h>
#include<stdlib.h>

int main(){

    int n , cont , num;

    scanf("%d", &n);    // tamanho do vetor
    int vetor[n];

    for(cont = 0; cont < n; cont++){ // preenche o vetor
        scanf("%d", &vetor[cont]);
        if(vetor[cont] == 0){  // se entrar 0 fecha o programa
            return 1;
        }     
        else{
        }
    }

    /*for( cont = 0 ; cont < n ; cont++){ // printa vetor
        printf("%d ", vetor[cont]);
    }*/

    return 0;
}