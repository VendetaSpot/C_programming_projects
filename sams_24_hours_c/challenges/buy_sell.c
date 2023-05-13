#include <stdio.h>


int *Bursa(int *ptr_start, int size, int *ptr_profit)
{
	int *ptr_end = ptr_start + size - 1;
	int *ptr_save_start = ptr_start;
	int buy = *ptr_start, buy_i = 0, sell_i = 0, profit = 0;

	while (ptr_start < ptr_end)
	{
		if (buy > *ptr_start)
		{
			buy = *ptr_start;
			buy_i = ptr_start - ptr_save_start;
		}
		else if (*ptr_start - buy > profit)
		{
			sell_i = ptr_start - ptr_save_start;
			profit = *ptr_start - buy;
		}

		*ptr_profit = profit;
		*(ptr_profit + 1) = buy_i;
		*(ptr_profit + 2) = sell_i;

		++ptr_start;
	}

	return ptr_profit;
}

int main()
{
  int array[] = {6, 12, 3, 5, 1, 4, 9, 2};
  int size = sizeof(array) / sizeof(int);
  int profit[] = {0, 0, 0};

  Bursa(array, size, profit);

  printf("profit: %d, buy: %d, sell: %d", profit[0], profit[1], profit[2]);

  return 0;
}