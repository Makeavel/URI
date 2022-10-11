#include<stdio.h>
#include<string.h>

void cidade(){

    char cidade[20];
    scanf("%s", cidade);

    if(strcmp(cidade , "roraima") == 0){
        printf("Regiao Norte");
    }
    else{
    if(strcmp(cidade , "acre") == 0){
        printf("Regiao Norte");
        }
        else{
    if(strcmp(cidade, "amazonas") == 0){
        printf("Regiao Norten");
        }
        else{
    if(strcmp(cidade ,"para") == 0){
        printf("Regiao Norte");
        }
        else{
    if(strcmp(cidade , "rondonia") == 0){
        printf("Regiao Norte"); 
        }
        else{
    if(strcmp(cidade ,"tocantins") == 0){
        printf("Regiao Norte");
        }
        else{
            printf("Outra regiao");
            }
           }
          }
      }
     }
    }
}

int main(){
    cidade();
    return 0;
}