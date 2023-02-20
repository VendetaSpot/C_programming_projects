#include <stdio.h>
#include "../myFunctions.h"

int main()
{
  char c1 = 'H';
  char c2 = 'I';
  char c3 = '!';

  printf("%p\n", c1);
  printf("%p\n", c2);
  printf("%p\n", c3);

  printf("%c%c%c", c1, c2, c3);
}