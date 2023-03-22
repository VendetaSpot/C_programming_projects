#include <stdio.h>
#include <string.h>
// #include <time.h>
// #include <stdarg.h>


int num_arr(int *arr, int max)
{
    int sum = 0;
    *(arr+3) = 9;
    for (int i = 0; i < max; i++)
    {
        arr[i] *= 2;
        sum += arr[i];
    }
    printf("Sum: %d\n", sum);
}

void str_arr(char *str)
{
    printf("%s\n", str);
}

int multi_num_arr(int *ptr_arr, int multi_arr[2][5])
{
    printf("multi-ptr: %d\n", ptr_arr[2]);
    printf("multi-original: %d\n", multi_arr[0][2]);
}

int main()
{
    int arr[] = {1,2,3,4,5};
    char str[] = "Hello";
    int multi_arr[2][5] = {
        7,8,9,1,2,
        2,5,6,4,8
    };

    int *ptr_arr = arr;
    char *ptr_str = str;
    int *ptr_multi_arr = &multi_arr[0][0];

    multi_num_arr(ptr_multi_arr, multi_arr);
    num_arr(ptr_arr, 5);
    str_arr(ptr_str);
    
    return 0;
}
