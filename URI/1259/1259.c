#include<stdio.h>
#include<stdlib.h>

typedef struct elemento
{
    int valor;
    struct elemento * prox;
}elemento;
typedef struct lista{

    int qtd;
    struct elemento * inicio;
}lista;

lista * aloca_lista(){
    lista * novo;
    novo = (lista*)malloc(sizeof(lista));
    novo -> qtd = 0;
    novo -> inicio = NULL;
    return novo;
}
elemento * aloca_elemento(){
    elemento * novo;
    novo = (elemento*)malloc(sizeof(elemento));
    novo -> valor = 0;
    novo -> prox = NULL;
    return novo;
}

void inserir_par(lista * l1 , int x){
    elemento * aux , * novo;
    novo = aloca_elemento();
    novo -> valor = x;
    if(l1->inicio == NULL){
        l1->inicio = novo;
    }
    aux = l1->inicio;
    while(aux->prox != NULL){
        aux = aux->prox;
    }
    aux->prox = novo;
    l1->qtd++;
}

void inserir_impar(lista * l2, int x){
    elemento * aux , * novo;
    novo = aloca_elemento();
    novo -> valor = x;
    if(l2->inicio == NULL){
        l2->inicio = novo;
    }
    aux = l2->inicio;
    while(aux->prox != NULL){
        aux = aux->prox;
    }
    aux->prox = novo;
    l2->qtd++;
}

int sort_da_vida(lista * l1){

}

void mostrar(lista * l1 , lista * l2){
    
}
int main(){

    lista * l1 = aloca_lista();
    lista * l2 = aloca_lista();

    int n_repeticoes , numero , k ;

    scanf("%d" , &n_repeticoes);

    for(k=0; k<= n_repeticoes ; k++){

        scanf("%d", &numero);

        if(numero %2 == 0){
            inserir_par(l1,numero);
        }
        else{
            inserir_impar(l2,numero);
        }
    }// for

    return 0;
}