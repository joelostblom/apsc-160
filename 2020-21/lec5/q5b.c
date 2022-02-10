#include <stdio.h>

int main(void) {
     int game_over = 1;
     int your_turn = 0;

     if ( game_over == 0 ) {
          if ( your_turn == 1 ) {
               printf ("Your Move\n");
          }
     } else {
          printf ("The game is over\n");
     }
          
    return 0;
}