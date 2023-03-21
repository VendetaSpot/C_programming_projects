#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdarg.h>



int MultiNums(int x, ...)
{
    int result = 1, argument;
    va_list arglist;
    va_start(arglist, x);
    for (int i = 0; i < x; i++)
    {
        argument = va_arg(arglist, int);
        printf("arguments: %d\n", argument);
        result *= argument;
    }
    va_end(arglist);

    return result;
}

int main()
{
    printf("1: %d\n", MultiNums(3, 2, 5, 7));
    printf("2: %d\n", MultiNums(5, 1, 2, 3, 4, 5));
    printf("3: %d\n", MultiNums(2, 7, 6));
    printf("4: %d\n", MultiNums(4, 2, 4, 6, 3));

    return 0;
}
