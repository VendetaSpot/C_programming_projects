#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>

// k - key 3
// p - plain text Hi
// p[0] = H - 7
// p[1] = i - 8
// cipher:
// c[0] = K
// c[1] = L

bool only_digits(char *str);
char *rotate(char *str, int n);

int main(int argc, char *argv[])
{
  argv[1] = "1"; // 0-9
  int k;
  char text[20] = {0};

  if (argv[1] == 0 || argc > 2)
  {
    printf("Error! No args received or more than one exist!");
    return 1;
  }

  if (only_digits(argv[1]) == false)
  {
    printf("Usage: %s key\n", argv[0]);
    return 1;
  }
  else
  {
    printf("passed\n");
    // return 0;
  }

  k = atoi(argv[1]); // covert argv[1] - key to integer
  printf("plaintext: ");
  fgets(text, 20, stdin);

  printf("%s", rotate(text, k));

}

char *rotate(char *str, int n)
{
  for (int i = 0; i < strlen(str); i++)
  {
    if (str[i] != '\n')
    {
      int offset = islower(str[i]) ? 'a' : 'A';
      str[i] = (str[i] - offset + n) % 26 + offset;
    }
  }

  return str;
}

bool only_digits(char *str)
{
  for (int i = 0; i < strlen(str); i++)
  {
    if (isdigit(str[i]) == 0)
    {
      return false;
    }
  }
}