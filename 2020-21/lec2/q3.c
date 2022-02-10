/* Author: Joel Ostblom
   Date: Sep 13, 2021
   Purpose: A program that takes a user input and prints it.
*/

#include <stdio.h>

int main(void) { 
    double speed;
    printf("Input your speed in km/h: ");
    scanf("%lf", &speed);

    printf("Your speed is %lf km/h.\n", speed);

    return 0;
}

