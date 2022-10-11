#include<stdio.h>
#include<math.h>

void calcula(float x1 , float y1, float x2 , float y2){

    float distancia ;

    distancia = sqrt(pow(x2 - x1,2)+pow(y2-y1,2));
    printf("%.4f\n", distancia);
}


int main(){

    float x1 , x2, y1 , y2;
    scanf("%f %f", &x1 , &y1);
    scanf("%f %f", &x2 , &y2);
    calcula(x1 , y1 , x2 , y2);
    return 0;
}