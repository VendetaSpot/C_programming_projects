#include <stdio.h>


int IsSumFound(int *ptr_start, int size, int sum, size_t *ptr_found)
{
	int *ptr_end = ptr_start + size - 1;
	int *ptr_save_start = ptr_start;

	while (ptr_start < ptr_end)
	{
		if (*ptr_start + *ptr_end < sum)
		{
			++ptr_start;
		}
		else if (*ptr_start + *ptr_end > sum)
		{
			--ptr_end;
		}
		else if (*ptr_start + *ptr_end == sum)
		{
			*ptr_found = ptr_start - ptr_save_start;
			++ptr_found;
			*ptr_found = ptr_end - ptr_save_start;
			return 1;
		}
	}

	return 0;
}


int main()
{
  int array[] = {2, 4, 7, 12, 14};
  int sum = 19;
  size_t found[] = {0, 0};
  size_t size = sizeof(array) / sizeof(int);
  int result = IsSumFound(array, size, sum, found);

  if (result)
  {
  	printf("index1: %d, index2: %d", found[0], found[1]);
  }
  else
  {
  	printf("%d", result);
  }

  return 0;
}