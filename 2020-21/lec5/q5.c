#include <stdio.h>

int main(void) {

     int data = 3;

     if (data < 4) {
          printf("A");
          if (data == 0)
               printf("B");
     } else {
          printf("C"); 
     }
          
    return 0;
}