#include <stdio.h>


void LowerCase(char *ptr)
{
	if (*ptr >= 'A' && *ptr <= 'Z')
	{
		*ptr += 32;
	}
}

void Swap(char *ptr_start, char *ptr_end)
{
	int temp = 0;

	temp = *ptr_start;
	*ptr_start = *ptr_end;
	*ptr_end = temp;
}

void ReverseToLower(char *ptr_start, size_t size)
{
	char *ptr_end = ptr_start + size;
	while (ptr_start <= ptr_end)
	{
		Swap(ptr_start, ptr_end);
		LowerCase(ptr_start);
		LowerCase(ptr_end);

		++ptr_start;
		--ptr_end;
	}
}

int main()
{
  char str[] = "HelLo wORLd";
  int size = sizeof(str) - 1;
  char *ptr_start = str;

  ReverseToLower(ptr_start, size - 1);

  for (int i = 0; i < size; i++)
  {
  	printf("%c", str[i]);
  }

  return 0;
}

// #include <stdio.h>


// void Reverse(char str[], int size)
// {
//   int i = 0, temp = 0;

//   for (i = 0; i <= (size - 1) / 2; ++i)
//   {
//     temp = str[i];
//     str[i] = str[size - 1 - i];
//     str[size - 1 - i] = temp;
//   }

//   printf("Reversed: %s\n", str);
// }

// void LowerCase(char str[])
// {
//   int i = 0;

//   for (i = 0; str[i]; ++i)
//   {
//     if (str[i] >= 'A' && str[i] <= 'Z')
//     {
//       str[i] = str[i] + 32;
//     }
//   }

//   printf("Lower: %s\n", str);
// }

// int main()
// {
//   char str[] = "HelLo wORLd";
//   int size = sizeof(str) - 1;

//   LowerCase(str);
//   Reverse(str, size);

//   return 0;
// }