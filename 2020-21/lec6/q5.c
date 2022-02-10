
#include <stdio.h>

int main(void) {

    int check = 4;

    while (check < 0)
    {
       check--;
       printf( "%d ", check-- );
    }

    return 0;
}