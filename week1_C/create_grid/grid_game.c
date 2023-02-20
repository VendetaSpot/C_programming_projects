#include <stdio.h>
#include <stdlib.h>
#include "plan_grid.h"

// start code.exe
// scanf("%d", &n_row); //get the address of &n_row where the value will be stored.


void main() {
  printf("--------> Create a grid game! -------->\n\n");

  char inp;

  // Run function, while input is y.
  do 
  {
    plan_grid();
    printf("Create grid again? y/n: ");
    fflush(NULL);
    inp = getc(stdin);
  } 
  while (inp == 'y');

  system("pause\n"); // Press any key to exit

  printf("------------------------\n");
}