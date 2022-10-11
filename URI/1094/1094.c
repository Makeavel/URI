#include<stdio.h>
#include<stdlib.h>

int contador(int numRepeticao){

    int i , quantia , totalColeho = 0 , totalRatos = 0 , totalSapos = 0 , total = 0 ;
    char animal;
    float percentC , percentR , percentS ;
    
    for(i = 0 ; i < numRepeticao ; i++){
        scanf("%d %c", &quantia , &animal);

        if(quantia >= 1 && quantia <= 15){

            if(animal == 'C'){
                totalColeho = totalColeho + quantia;
            }
            else if(animal == 'R'){
                totalRatos = totalRatos + quantia;
            }
            else if(animal == 'S'){
                totalSapos = totalSapos + quantia;
            }
            else{
                //não está no escopo de testes
            }           
        }
        else{
            return -1;
        }
    }// FIM_FOR

    // contagem total de cobaias
    total = totalColeho + totalRatos + totalSapos;
    //calculando porcentagens 
    percentC = ((totalColeho * 100.0) / total);
    percentR = ((totalRatos * 100.0) / total);
    percentS = ((totalSapos * 100.0) / total);
    
    // Printando resultados finais
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", totalColeho);
    printf("Total de ratos: %d\n", totalRatos);
    printf("Total de sapos: %d\n", totalSapos);
    printf("Percentual de coelhos: %.2f %%\n", percentC);
    printf("Percentual de ratos: %.2f %%\n", percentR);
    printf("Percentual de sapos: %.2f %%\n", percentS);

}
int main(){
    // num de repetições
    int n;
    scanf("%d", &n);
    contador(n);
    return 0;
}