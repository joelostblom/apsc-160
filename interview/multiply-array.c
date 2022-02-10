#include <stdio.h>


int multiply_numbers(int *numbers, int size) {
    // Multiply each number in an array with a constant
    for (int i = 0; i < size; i++) {
        numbers[i] = numbers[i] * 2;
    }
}

int main() {
    int my_numbers[] = {1, 2, 3};
    multiply_numbers(my_numbers, 3);

    for (int i = 0; i < 3; i++) {
        printf("%d", my_numbers[i]);
    }

    return 0;
}

// emailing them an int in the email body, but array as a link to a file. You wouldn't want it to send the entire thing. But don't say it is the reason for creating the language this way
// add another number when size is hardcoded insdie, the sum is still 6, what is going on?
// make sure to say what a.out is or add extension
// What do you think will happen?
// 1. It will print just as before
// 2. It will print only the first elemnt of the array
// 3. There will be an error

// Do the same thing but we are getting an error
// note: expected ‘int’ but argument is of type ‘int *’
// Change to just print the array to show what is happening
// This error should be familiar from previous class, show next file

// Change input arg to * num
// Add size and show error
// Move size outside and add additional param

    // size_t size = sizeof numbers / sizeof numbers[0];