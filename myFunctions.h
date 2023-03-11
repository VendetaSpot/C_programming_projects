#include <stdio.h>
#include <string.h>

void get_string(char *text)
{
  char s[20] = {0};
  printf("%s", text);
  fgets(s, 20, stdin);
  printf("%c", s);
}

// int get_int(int n)
// {

// }