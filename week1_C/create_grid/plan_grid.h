#include <stdio.h>
#include <stdlib.h>
#include "create_grid.h"

// Get user inputs for rows and columns
void plan_grid()
{
  int n_row, n_col; // Get number of rows and columns

  // Ask for integer input, if integer is negative, continue asking.
  do
  {
    printf("Enter row number between 1 upto 30: ");
    scanf("%i", &n_row);
  }
  while (n_row < 1 || n_row > 30);

  do
  {
    printf("Enter column number between 1 upto 30: ");
    scanf("%i", &n_col);
  }
  while (n_col < 1 || n_col > 30);

  // Create and print the grid
  create_grid(n_row, n_col);
}