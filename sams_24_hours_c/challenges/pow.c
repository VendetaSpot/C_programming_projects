#include <stdio.h>
#include <string.h>
#include <stdlib.h>

double main()
{
	double decimal = 1;
	int x = -2, y = -3, result = 1;

	if (y < 0)
	{
		for (int i = 0; i > y; i--)
		{
			decimal /= x;
		}
		printf("%f", decimal);
		return decimal;
	}
	
	if (y > 0)
	{
		for (int i = 0; i < y; i++)
		{
			result *= x;
		}
	}
	printf("%d", result);
	return result;
}

float Pow(float x, float y)
{
    float result = 1;
    int i = 0;

    for (i = 0; y - i != 0 && y + i != 0; i++)
    {
        result *= x;
    }
    if (0 > y)
    {
        return 1/result;
    }
    else
    {
        return result;
    }
}

float main()
{
    float x = -5, y = -3;
    
    printf("%f", Pow(-5, -3));
}