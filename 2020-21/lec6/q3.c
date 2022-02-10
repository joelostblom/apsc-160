
#include <stdio.h>

int main(void) {

    int count = 3;

    while( count > 0 ){
       count--;
       printf( "%d", ++count );
    }

    return 0;
}