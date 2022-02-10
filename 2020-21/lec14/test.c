#include <stdio.h>

int search( int array[ ], int size, int toFind ) {
    int index;
    int value = -1;
    
    for (index = 0; value == -1 || index < size; ++index) {
        if (array[index] == toFind) {
            value = index;
        }
    }
    
    return value;
}

int main(void) {
    int value = 0;
    int arr1[] = {0,1,2,3,4,5,6};
    value = search(arr1, 6, 3);
    printf("%d", value);
}