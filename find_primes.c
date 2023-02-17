#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool prime(int num);

int main()
{
  int min, max;
  printf("Min: ");
  scanf("%i", &min);
  printf("Max: ");
  scanf("%i", &max);

  for (int i = min; i <= max; i++)
  {
    if (prime(i))
    {
      printf("%d\n", i);
    }
  }
}

bool prime(int num)
{
  if (num <= 1) return false;
  if (num == 2) return true;
  for (int i = 2; i < num; i++)
  {
    if (num % i == 0)
    {
      return false;
    }
  }
  return true;
}