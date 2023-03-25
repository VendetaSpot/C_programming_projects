#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

enum items {NUM_OF_ITEMS = 3, a_TO_A = 'a' - 'A'};
enum status {success = 0, failed = 1};
typedef char *ARR_OF_STRINGS[NUM_OF_ITEMS];
typedef char *PTR_STR;

void Convert2Upper(PTR_STR src_str, PTR_STR dest_str)
{
   int i = 0;
   for (i; i < src_str[i]; i++)
   {
      if (src_str[i] >= 'a' && src_str[i] <= 'z')
      {
         dest_str[i] = src_str[i] - a_TO_A;
      }
      else
      {
         dest_str[i] = src_str[i];
      }
   }
   dest_str[i] = '\0';
}

int main()
{
   ARR_OF_STRINGS arr;
   ARR_OF_STRINGS food = {"chocolate", "sushi", "pizza"};
   int i;

   for (i = 0; i < NUM_OF_ITEMS; i++)
   {
      arr[i] = malloc(strlen(food[i]) + 1 * sizeof(char));
      if (arr[i] == NULL)
      {
         printf("malloc() failed");
         return failed;
      }
      else
      {
         Convert2Upper(food[i], arr[i]);
         printf("%s\n", food[i]);
      }
   }

   for (i = 0; i < NUM_OF_ITEMS; i++)
   {
      printf("%s ", arr[i]);
      free(arr[i]);
   }

   printf("\n");
   return success;
}