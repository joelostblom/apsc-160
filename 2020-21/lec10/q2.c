#include <stdio.h>

int upper(int x) {
    if (x > 0)
        return 1;
    else
        return 0;
}

int lower(int x) {
    if (x > 0)
        return 1;
    return 0;
}

int main(void) {
    printf("%d", lower(2));
    printf("%d", upper(2));
    printf("%d", lower(0));
    printf("%d", upper(0));
    return 0;
}