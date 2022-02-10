#include <stdio.h>

int x = 2;

int increment_value(int x) {
    x++;
    printf("x = %d in the function\n", x);
    return x;
}

int main(void) {
    x = increment_value(x);
    printf("x = %d in main", x);

    return 0;
}