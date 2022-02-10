#include <stdio.h>


void print_array() {
    // Print out all the numbers of an array
    int numbers[3] = {1, 2, 3};

    for (int i = 0; i < 3; i++) {
        printf("%d\n", numbers[i]);
    }
}

void main() {
    print_array();
}

/*How would you create and print an array?
1. Pass the array to printf
2. Loop through the array and pass each number to printf
3. There is no way to print arrays 
*/
// Follow up with reminder of size tips

// void print_array() {
//     int numbers[3] = {1, 2, 3};
//     size_t numbers_length = sizeof numbers / sizeof numbers[0];

//     for (int i = 0; i < numbers_length; i++) {
//         printf("%d\n", numbers[i]);
//     }
// }

