#include <stdio.h>

int main(void){
    int my_array[4.0] = { 1, 2, 3, 4 };
    int arr_size = 6;
    int my_array2[arr_size];
    for (int i = 0; i < arr_size; i++)
        printf("%d", my_array[i]);
}


// int MaxSubarraySum( int numbers[], int arr_size ) {
//     // some useful local variables
//     int my_array[4] = { 1, 2, 3, 4 };
//     int i, j, last_index;
//     int max_sum = -1111111;
//     int current_sum;
//     // you may declare any other variables you think may be useful
//     for (i = 0; i < arr_size; i++) {
//         current_sum = numbers[i];
//         for (j = i; j < arr_size; j++) {
//             current_sum += numbers[j];
//             if (current_sum > max_sum) {
//                 max_sum = current_sum;
//                 last_index = j;
//             }
//         }
//     }
//     /* replace the following line with your own solution */
//     return last_index;
// }


// #include <stdio.h>
// #include <stdlib.h>

// int nextValue(int n);

// int main(void) {
//     int user_value;
//     user_value = scanf("%d", &user_value);
//     // print_value = nextValue(user_value);
//     printf("%d ", user_value);
//     // printf("%d", user_value);
//     while (user_value != LAST_VALUE) {
//         user_value = nextValue(user_value);
//         printf("%d ", user_value);
//     }
//     // printf("%d", nextval);
//     // for (int i = 0; i < LAST_VALUE; i++) {
//         // printf("%d ", nextValue(i));
//     return 0;

//     /* continue your program */
// }