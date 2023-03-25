#include <stdio.h>
#include <string.h>
#include <stdlib.h>


// int main()
// {
//    int terminate = 0;
//    int user_allocate;
//    float *ptr_arr1;
//    float *ptr_arr2;

//    printf("Enter number of bytes to allocate: ");
//    scanf("%d", &user_allocate);

//    ptr_arr1 = malloc(user_allocate * sizeof(float));
//    ptr_arr2 = calloc(user_allocate, sizeof(float));

//    if (ptr_arr1 == NULL)
//       printf("malloc() failed.");
//    else if (ptr_arr2 == NULL)   
//       printf("calloc() failed.");
//    else
//    {
//       for (int i = 0; i < user_allocate; i++)
//       {
//          printf("ptr1= %f, ptr2=%f", ptr_arr1[i], ptr_arr2[i]);
//       }
//       free(ptr_arr1);
//       free(ptr_arr2);
//       terminate = 0;
//    }    

//    return terminate;
// }

int main()
{
   int user_allocate, terminate = 0, sum = 0;
   int *ptr_arr;

   printf("Enter number of bytes to allocate: ");
   scanf("%d", &user_allocate);

   ptr_arr = malloc(user_allocate * sizeof(int));

   if (ptr_arr == NULL)
   {
      printf("malloc() failed.");
      terminate = 1;
   }
   else
   {
      *ptr_arr = 0;
      for (int i = 1; i<user_allocate; i++)
      {
         ptr_arr[i] = i;
         printf("%d ", ptr_arr[i]);
         sum += ptr_arr[i];
      }
   }

   free(ptr_arr);

   printf("Sum: %d", sum);

   return terminate;
}