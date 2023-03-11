#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
  char s[10] = {0}, *t;
  printf("Enter: ");
  scanf("%s", s);
  t = malloc(strlen(s) + 1);

  for (int i = 0, len = strlen(s) + 1; i < len; i++)
  {
    t[i] = s[i];
  }
  
  printf("s: %s\n", t);
  printf("t: %s\n", t);
  printf("t: %p\n", &t);
  
  free(t);

}
