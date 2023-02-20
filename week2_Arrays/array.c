#include <stdio.h>
#include "../myFunctions.h"

float average(int len, int array[]);

int main()
{
  int length = 3;
  int scores[length];

  for (int i = 0; i < length; i++)
  {
    scores[i] = get_int("Number: ");
  }

  printf("Average: %.1f\n", average(length, scores));
  printf("scores[0]: %p\n", &scores[0]);
  printf("scores pointer: %p\n", &scores);
}

float average(int len, int array[])
{
  int sum = 0;
  for (int i = 0; i < len; i++)
  {
    sum += array[i];
  }
  return sum / len;
}