#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int sort(int *ptr_array, int size)
{
    int temp = 0, i;

    for (i = 0; i < size - 1; i++)
    {
        if (ptr_array[i] < ptr_array[i + 1])
        {
            continue;
        }

        while (ptr_array[i] > ptr_array[i + 1])
        {
            temp = ptr_array[i + 1];
            ptr_array[i + 1] = ptr_array[i];
            ptr_array[i] = temp;
        }

        while (ptr_array[i] < ptr_array[i - 1])
        {
            temp = ptr_array[i - 1];
            ptr_array[i - 1] = ptr_array[i];
            ptr_array[i] = temp;
            --i;
        }
    }
    
}

int main()
{
    int array[] = {1, 12, 8, 6, 81, 4, 56, 7, 3, 5, 2, 7};
    int size = 12;
    int *ptr_array = array;

    sort(ptr_array, size);

    printf("\nFinished sorting!\n");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    
    
    return 0;
}

