#include<stdio.h>
#include<stdlib.h>

typedef struct elemento{
    char valor;
    char SimNao;
    struct elemento * prox;
    struct elemento * ant;
}elemento;
typedef struct lista{
    int qtd;
    struct elemento * inicio;
    struct elemento * fim;
}lista;

lista * aloca_lista(){
    lista * nil;
    nil = (lista*)malloc(sizeof(lista));
    nil -> qtd = 0;
    nil -> inicio = NULL;
    nil -> fim = NULL;
    return nil;
}
elemento * aloca_elemento(){
    elemento * novo;
    novo = (elemento*)malloc(sizeof(elemento));
    novo -> valor = NULL;
    novo -> SimNao = NULL;
    novo ->ant = NULL;
    novo -> prox = NULL;
    return novo;
}

void inserir_lista(lista * l1 , int x , int y){
    elemento * novo , * aux , * ant;
    novo = aloca_elemento();
    novo -> valor = x;
    novo ->SimNao = y;
    if(l1->inicio == NULL){
        l1->inicio = novo;
        l1->fim = novo;
    }
    else{
        aux = l1->fim;
        novo -> ant = aux;
        aux -> prox = novo;
    }
    l1->qtd++;
}   


int main(){

    lista * l1 = aloca_lista();

    return 0;
}