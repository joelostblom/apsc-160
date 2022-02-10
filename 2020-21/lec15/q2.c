#include <stdio.h>

int main(void) {
    int row, col;
    int data[][2] = {
        {4, 6},
        {3, 7},
        {1, 8}
    };

    for (row = 0; row < 3; row++) {
        printf("\n");
      for (col = 0; col < 2; col++)
        printf("%d ", data[row][col]);
    }
}
