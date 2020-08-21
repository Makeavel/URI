#include<stdio.h>
#include<stdlib.h>

int pilha[50];
int qtd = 0;

void push(int x){ 
        pilha[qtd]=x;
        qtd++; 
}

int pop(){

    int p , j;

        p = pilha[0];
        for(j=0;j<qtd-1;j++){
            pilha[j]=pilha[j+1];
        }
        qtd--;
        return p;  
}

void menu(){

    int  i , o , dow;
        int ctas = 0;
            scanf("%d", &ctas);

    if(ctas != 0){
        for(i=0; i<ctas; i++){
            push(i+1);
        }

        printf("\nDiscarded Cards:");
        while(qtd >= 2){
            o = pop(); //-> descarta uma carta
            printf(" %d " , o);             
            if(qtd >= 2){
                printf(",");
            }
            else if(qtd == 1){
                printf("\n");
            }       
            o = pop();  //-> descarta uma segunda descartada
            push(o);  // -> insere novamente a segunda descartada
         
        }
            pop();  // remove a penultima carta no ultima passagem
        
        printf("Remainig card: %d\n" ,o);
    }//ifão
    else{
        
    }

}

int main(){
    menu();
    return 0;
}