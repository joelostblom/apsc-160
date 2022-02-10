#include <stdio.h>


int add_numbers() {
    // Add multiple numbers together
    int numbers[] = {1, 2, 3};
    int sum = 0;

    for (int i = 0; i < 3; i++) {
        sum += numbers[i];
    }

    return sum;
}

int main(){
    printf("%d", add_numbers());
    
    return 0;
}

// This is just a function that return 6 everytime, useless with no flexibility. just return 6.
// good walk thourh error message
/*How would you add an arbitrary set of numbers from an array together?
1. Use the built in array sum function
2. Loop through the array and add up each number
3. There is no way add numbers from arrays, we need to create separate variables for each number.
*/

// int add_numbers() {
//     int numbers[] = {1, 2, 3};
//     int sum = 0;
//     size_t size = sizeof numbers / sizeof numbers[0];

//     for (int i = 0; i < size; i++) {
//         sum += numbers[i];
//     }

//     return sum;
// }