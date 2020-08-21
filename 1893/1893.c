#include<stdio.h>

int main(){ 

    int pri, seg;
    scanf( "%d%d", &pri, &seg );

	if( 3 <= seg && seg <= 96 && seg > pri ){
     printf( "crescente\n" );
    }
	else if( 3 <= seg && seg <= 96 && seg < pri ){ 
        printf( "minguante\n" );
    }    
	else if( 0 <= seg && seg <= 2 ){
         printf( "nova\n" );	
    }
    else if( 97 <= seg && seg <= 100 ){
         printf( "cheia\n" );
    }
    
    return 0;
}
