#include<stdio.h>

int main(){

    int x , j = 0;

    scanf("%d", &x);


   while(j < x){
       j++;

       if(j % 2 != 0){
           printf("%d\n", j);
       }
   }

    return 0;
}


