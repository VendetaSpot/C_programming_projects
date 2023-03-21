#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdarg.h>

void greet(char *str, ...)
{
    va_list arglist; // va_list array is declared by name arglist
    va_start(arglist, str); // va_start() macro has to be called before the arguments are processed.
    int x = va_arg(arglist, int); // fetch next argument
    int y = va_arg(arglist, int); // fetch next argument
    int ch = va_arg(arglist, int); // fetch next argument
    va_end(arglist); // must be called, otherwise the behavior of the program is undefined

    printf("%s\n", str);
    printf("%d %d %c", x, y, ch);
}

int main()
{
    char str[] = "Hello";
    char *ptr_str = str;
    int x = 10;
    int y = 15;
    char ch = 'z';
    
    greet(ptr_str, x, y, ch);

    return 0;
}

// int MultiNums(int x, ...)
// {
//     int result = 1, argument;
//     va_list arglist;
//     va_start(arglist, x);
//     for (int i = 0; i < x; i++)
//     {
//         argument = va_arg(arglist, int);
//         printf("arguments: %d\n", argument);
//         result *= argument;
//     }
//     va_end(arglist);

//     return result;
// }

// int main()
// {
//     printf("1: %d\n", MultiNums(3, 2, 5, 7));
//     printf("2: %d\n", MultiNums(5, 1, 2, 3, 4, 5));
//     printf("3: %d\n", MultiNums(2, 7, 6));
//     printf("4: %d\n", MultiNums(4, 2, 4, 6, 3));

//     return 0;
// }