#include <stdio.h>

int main(void) {

     int a = 2;

     if (a > 0) {
         printf("A"); 
         if (a <= 5)
             printf("B"); 
     } else {
          printf("C"); 
     }

    return 0;
}