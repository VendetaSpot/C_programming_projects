#include <stdio.h>


void Reverse(char str[], int size)
{
  int i = 0, temp = 0;

  for (i = 0; i <= (size - 1) / 2; ++i)
  {
    temp = str[i];
    str[i] = str[size - 1 - i];
    str[size - 1 - i] = temp;
  }

  printf("Reversed: %s\n", str);
}

void LowerCase(char str[])
{
  int i = 0;

  for (i = 0; str[i]; ++i)
  {
    if (str[i] >= 'A' && str[i] <= 'Z')
    {
      str[i] = str[i] + 32;
    }
  }

  printf("Lower: %s\n", str);
}

int main()
{
  char str[] = "HelLo wORLd";
  int size = sizeof(str) - 1;

  LowerCase(str);
  Reverse(str, size);

  return 0;
}