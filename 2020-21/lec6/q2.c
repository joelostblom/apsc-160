
#include <stdio.h>

int main(void) {

    int count = 0;

    while( count < 3 ){
       count++;
       printf( "%d", count );
    }
    printf( "%d", count );

    return 0;
}