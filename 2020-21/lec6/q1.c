#include <stdio.h>

int main( void ) {
    int a = 88;

    if (a > 0)
        if (a > 100) 
            printf( "A" ); 
        else
            printf( "B" );

    printf( "C" );

    return 0;
}