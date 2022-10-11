#include<stdio.h>
#include<stdlib.h>

typedef struct elemento{
    int valor;
    struct elemento * prox;
    struct elemento * ant;
}elemento;

typedef struct lista{
    int qtd;
    struct elemento * inicio;
    struct elemento * fim;
}lista;

lista * aloca_lista(){
    lista * nov;
    nov = (lista*)malloc(sizeof(lista));
    nov->qtd =0;
    nov->inicio = NULL;
    nov->fim = NULL;
    return nov;
}
elemento * aloca_elemento(){
    elemento * nov;
    nov=(elemento*)malloc(sizeof(elemento));
    nov->valor = 0;
    nov->prox = NULL;
    nov->ant = NULL;
    return nov;
}

void inserir(lista * l1 , int x){
    elemento * novo , * aux , * ant;
    novo = aloca_elemento();
    novo -> valor = x;

    if(l1->inicio == NULL){
        l1->inicio = novo;
    }
    else{
        aux = l1->inicio;
        while(aux->prox != NULL){
            aux = aux -> prox;
        }
        aux -> prox = novo;
    }
    l1->qtd++;

}

void valida(lista * l1){
    
}