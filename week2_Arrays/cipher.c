#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>

// this program takes one command line argument n as a number between 1-9,
// and encrypts the text by shifting each letter n places.

int main(int argc, char **argv)
{
  char plaintext[20] = {0}; // array initialized with 20 chars and zeroes
  int key = atoi(argv[1]); // converts ASCII to integer

  if (argc != 2) // program should accept only one argument, else exit program
  {
    printf("Usage: ./ceasar k");
    return 1;
  }

  for (int i = 0; i < strlen(argv[1]); i++)
  {
    if (isalpha(argv[1][i])) // if char is letter, exit program
    {
      printf("Usage: ./caesar key\n");
      return 1;
    }
  }

  printf("plaintext: ");
  fgets(plaintext, 20, stdin);

  for (int i = 0; i < strlen(plaintext); i++)
  { 
    if (!isalpha(plaintext[i])) // print the char if not alpha
    {
      printf("%c", plaintext[i]);
      continue;
    }
    // check char offset from a or A if its lower o upper case, and shift letters.
    int offset = isupper(plaintext[i]) ? 65 : 97;
    plaintext[i] = (plaintext[i] - offset + key) % 26 + offset;

    printf("%c", plaintext[i]);
  }
  
  return 0;
}