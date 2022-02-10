#include <stdio.h>


int add_two_numbers(int x, int y) {
    // Add two numbers
    return x + y;
}


int main() {
    int sum = add_two_numbers(5, 4);
    printf("%d", sum);

    return 0;
}


// make sure to double check int retunrn 0 vs void for the main function
/*
The program will return 9
The program will print 9
The program will error
*/