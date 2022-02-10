#include <stdio.h>

int main(void){

    int numbers[] = {1,2,3,4,5,6};
    int size = 6;
    int index = 0;
    int sum = 0;

    while(index < size) {
        sum += numbers[++index];
    }
    printf("%d\n", sum);

    return 0;
}