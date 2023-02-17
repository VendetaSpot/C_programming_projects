#include <stdio.h>
#include <stdlib.h>

/* PSEUDOCODE:
  set heigth to user input number
  for row from 1 to height:
    for column from 1 to (height - row):
      print a space
    for left hash from 1 to row:
      print #
    print middle space  
    for right hash from 1 to row:
      print #
    print new line
*/

void main() {
  printf("--------> Create pyramid! -------->\n\n");

  int height, row, column;

  do
  {
    printf("Enter Height between 1-20: ");
    scanf("%d", &height);
  } while (height < 1 || height > 8);

  for (row = 1; row <= height; row++) // row
  {
    // print SPACE for left pyramid alignment
    for (column = 1; column <= (height - row); column++)
    {
      printf(" "); 
    }

    for (int left_hash = 1; left_hash <= row; left_hash++)
    {
      printf("#");
    }

    printf("  "); // print middle SPACE

    for (int right_hash = 1; right_hash <= row; right_hash++)
    {
      printf("#");
    }

    printf("\n");
  }

  system("pause\n");

  printf("------------------------\n");
}