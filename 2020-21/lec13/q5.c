#include <stdio.h>

void increment_value(int x[]) {
    x[0]++;
    printf("x[0] = %d in the function\n", x[0]ww);
}

int main(void) {
    int x[6] = {0,1};
    // int x = 5;
    increment_value(x);
    printf("x[0] = %d in main", x[0]);

   return 0;


}

