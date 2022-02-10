#include <stdio.h>
#include <assert.h>


int add_numbers(int* numbers, int numbers_length) {
    // Add multiple numbers together
    int sum = 0;

    for (int i = 0; i < numbers_length; i++) {
        sum += numbers[i];
    }

    return sum;
}

void test_add_numbers(){
    int my_numbers[] = {1, 2, 3};
    assert(add_numbers(my_numbers, 3) == 6);
}

void main(){
    int my_numbers[] = {1, 2, 3};
    // size_t my_numbers_length = sizeof my_numbers / sizeof my_numbers[0];
    test_add_numbers();

    printf("%d", add_numbers(my_numbers, my_numbers_length));
}