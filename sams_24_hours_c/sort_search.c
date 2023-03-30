#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int Sort(int *ptr_array, int size)
{
    int temp = 0, i;

    for (i = 0; i < size - 1; i++)
    {
        if (ptr_array[i] < ptr_array[i + 1])
        {
            continue;
        }

        if (ptr_array[i] > ptr_array[i + 1])
        {
            temp = ptr_array[i + 1];
            ptr_array[i + 1] = ptr_array[i];
            ptr_array[i] = temp;
            i = 0;
        }
    }
    
}

int main()
{
    int array[] = {1, 12, 8, 6, 81, 4, 56, 7, 3, 5, 2, 7};
    int size = 12;
    int *ptr_array = array;

    Sort(ptr_array, size);

    printf("Finished sorting!\n");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    
    
    return 0;
}

