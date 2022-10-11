#include<stdio.h>

void notas( int notas){

    if(notas == 0){
    printf("E\n");
    }
else if(notas <= 1 || notas <=35){
    printf("D\n");
     }
else if(notas <= 36 || notas <=60){
    printf("C\n");
    }
else if(notas <=61 || notas <=85){
    printf("B\n");
    }
else if(notas <=86 || notas < 101){
    printf("A\n");
     }
}

int main(){
    int valor;
    scanf("%d",&valor);
    notas(valor);
    return 0;
}