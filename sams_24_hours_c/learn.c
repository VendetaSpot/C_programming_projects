#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

void PrintArr(int arr[]);

void FindDup(int arr[], int size)
{
	int i = 0, j = 0;
    int new_arr[10] = {0};
	new_arr[0] = arr[0];
	
	for (i = 0; i < size; i++)
	{
		if (new_arr[j] != arr[i])
		{
			new_arr[++j] = arr[i];
		}
	}

    PrintArr(new_arr);
}


void PrintArr(int arr[])
{
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
}


int main()
{
	int array[] = {1, 2, 2, 3, 4, 4, 4, 5, 5};
	int size = sizeof(array) / sizeof(int);
	FindDup(array, size);
	return 0;
}