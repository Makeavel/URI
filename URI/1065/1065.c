#include<stdio.h>
#include<math.h>

int main(){

    int vetor[5] , in , cont = 0 ;

    for(in = 0 ; in <= 4 ; in++){

        scanf("%d", &vetor[in]); // recebendo todos os valores do usuário
    }

    for(in = 0 ; in <= 4 ;in++){

        vetor[in] = abs(vetor[in]); //modulando todos os valores
    }
    for(in = 0 ; in<= 4 ; in++){

        if(vetor[in]% 2 == 0){  //valida se o valor é par ou não
            cont = cont + 1;    // se for par adiciona +1 ao contador
        }
        else{
        }

    }

    printf("%d valores pares\n",cont);

    return 0;
}