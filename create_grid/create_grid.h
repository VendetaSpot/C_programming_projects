#include <stdio.h>
#include <stdlib.h>

// Create grid with user columns and rows
int create_grid(int rows, int columns)
{
  for (int i = 1; i <= rows; i++)
  {
    printf("\n");
    printf("|");
    for (int j = 1; j <= columns; j++)
    {
      printf(" ## ");
      printf("|");
    }
    printf("\n");
  }
  printf("\n");

  return 0;
}