#include<stdio.h>

void comida(){

    int frango , bife , massa , numFrango , numBife , numMassa , resposta = 0;
        scanf("%d %d %d", &frango , &bife , &massa);
        scanf("%d %d %d", &numFrango , &numBife , &numMassa);

    if(frango >= 0 && massa >= 0 && bife >= 0){
        if(numFrango >= 0 && numBife >= 0 && numMassa >= 0){
            if(numFrango > frango){
                resposta = numFrango - frango;
            }
            if(numBife > bife){
                resposta = resposta + (numBife - bife);
            }
            if(numMassa > massa){
                resposta = resposta + (numMassa - massa);
            }
        }
    }
    printf("%d\n", resposta);
}

int main(){
    comida();
    return 0;
}