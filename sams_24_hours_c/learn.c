#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

enum status {finished = 0, failed = 1};

int main(int argc, char *argv[])
{
   if (argc < 3)
   {
      printf("Enter two arguments exactly!");
      return failed;
   }
   else
   {
      for (int i = 0; i < argc; i++)
      {
         printf("%s\n", argv[i]);
      }
   }
   
   return finished;
}