#include <ctype.h>
#include <stdio.h>
#include <string.h>

// Player 1 & Player 2 enters a string.
// string characters will be summed by value assigned to each character.
// the player with the highest sum wins!

int run_check(char *player);

void main()
{
  char player1[20] = {0}, player2[20] = {0}; // initialize players array to length 20 with 0's.
  
  printf("Player 1: ");
  scanf("%s", player1);
  printf("Player 2: ");
  scanf("%s", player2);

  int x = run_check(player1);
  int y = run_check(player2);

  if (x > y)
  {
    printf("Player 1 wins!");
  }
  else if (x < y)
  {
    printf("Player 2 wins!");
  }
  else
  {
    printf("Tie!");
  }
}

int run_check(char *player)
{
  char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  int values[] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
  int sum = 0;

  for (int i = 0; i < strlen(player); i++) // check next string char
  {
    for (int j = 0; j < strlen(letters); j++) // letters array
    {
      if (tolower(player[i]) == tolower(letters[j])) // check if string char index value same as letters index value
      {
        sum += values[j]; // find that index in values array and add to SUM
        break; // if char found exit loop
      }
    }
  }

  return sum;
}