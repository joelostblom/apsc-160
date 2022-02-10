#include <stdio.h>

#define ROWS 2
#define COLS 1


void print_array(int data[][]);

int main(void) {
    int data[][2] = {
        {4, 6},
        {3, 7},
        {1, 8}
    };
    int temp = data[0][0];
    data[0][0] = data[ROWS][COLS];
    data[ROWS][COLS] = temp;

    print_array(data);
}

void print_array(int data[][2]) {
    for (int i = 0; i < 3; i++) {
        printf("\n");
        for (int j = 0; j < 2; j++)
            printf("%d ", data[i][j]);
    }
}
