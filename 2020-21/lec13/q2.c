#include <stdio.h>
 
int main () {

//    int a;
	
   /* for loop execution */
//    for(int a = 10; a < 20; a = a + 1 ){
    //   printf("value of a: %d\n", a);
//    }
    int data[] = { 2, 4, 8, 16, 32 };
    int index;

    for (index=0; index<7; index+2)
    {
       printf("%d ", data[ index ]);
    //    printf("%d ", index);
       index++;
    }
   return 0;
}