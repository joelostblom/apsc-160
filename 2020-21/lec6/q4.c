
#include <stdio.h>

int main(void) {

    int count = -1; 

    do {
        count--;
        printf( "%d", count++ ); 
    } while( count > 0 ); 

    return 0;
}