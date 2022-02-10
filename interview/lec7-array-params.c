#include <stdio.h>


int multiply_values(int values[], int size, int multiplier) {
    /* Add multiple values
     
     Parameters
        values: Array of the values to be added together
        size: Size of the array
        multiplier: Value to multiply each value of the array by
     
    */
    //
    for (int i = 0; i < size; i++) {
        values[i] = values[i] * multiplier;
        printf("%d", values[i]);

    }
    return values;
}

int main() {
    int my_values[] = {1, 2, 3, 4};
    multiply_values(my_values, 4, 2);

    return 0;
}