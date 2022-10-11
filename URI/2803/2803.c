#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void cidades(){
    int i;
    char cid_validas[5] = {"roraima","acre","amazonas","para","rondonia","tocantins"};
    gets(cidade);

    for(i = 0; i <= cid_validas[5];i++){
     i = cid_validas[i];

    if(strcmp(cidade , cid_validas[i] ) == 0){
        printf("Regiao Norte\n");
    }
    else{
        printf("Outra regiao\n");
        }
    }
}

int main(){
    cidades();
    return 0;
}