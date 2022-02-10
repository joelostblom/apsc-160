#include <stdio.h>


int add_numbers(int *numbers, int size) {
    // Add multiple numbers together
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += numbers[i];
    }

    return sum;
}

// # or return int
void main() {
    int my_numbers[] = {1, 2, 3, 4, 5}; 
    int size = sizeof my_numbers / sizeof my_numbers[0];
    printf("%d", add_numbers(my_numbers, size));
    // size_t size = sizeof numbers / sizeof numbers[0];
    // printf("%zu", size);

    // printf("%d", add_numbers(my_numbers, size));
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