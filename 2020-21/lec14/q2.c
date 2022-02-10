#include <stdio.h>
#define SIZE 4

void update_array(int array[]) {
    for (int i = 0; i < SIZE; i++) {
        array[i] = i;
    }
}

int main(void) {
    int data[SIZE] = {0};
    update_array(data);
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", data[i]);
    }
    return 0;
}

