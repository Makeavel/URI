#include<stdio.h>

int calculo(){

    int numA , numB , sum=0 , i ;

    scanf("%d %d", &numA , &numB);

    if( numA > 0 && numB > 0){
        
        if(numA < numB){

            for(i = numA ; i <= numB ; i++){               
                sum = sum + numA;
                numA += 1;
                printf("%d ", i);
                
            }
           
        }
        else if(numA > numB){

            for(i = numB ; i <= numA ; i++){
                sum = sum + numB;
                numB += 1;
                printf("%d ", i);
                
            }           
        }
        // Se A e B forem de mesmo valor cai aqui:       
        else{
            printf("%d " , sum);
        }
        printf("Sum=%d\n", sum);
    }

    else{
        return;
    }
}

int main(){
     calculo();
    return 0;
}
