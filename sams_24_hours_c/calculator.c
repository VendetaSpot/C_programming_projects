#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

double Calculator(double x, double y, char op)
{
    switch (op)
    {
    case '+':
        return x + y;
        break;
    case '-':
        return x - y;
        break;
    case '*':
        return x * y;
        break;
    case '/':
        return x / y;
        break;
    default:
        printf("Something went wrong!\n");
        break;
    }

    return 0.0;
}

int main() 
{
    float x = 10, y = 15, result = 0;
    char op = ' ';
    
    do 
    {
        fflush(stdin);
        printf("Enter an operator (+, -, *, /), to exit press x: ");
        scanf("%c", &op);
        if (op == 'x') break;
        while (op != 'x' && op != '+' && op != '*' && op != '/')
        {
            fflush(stdin);
            printf("Enter an operator (+, -, *, /), to exit press x: ");
            scanf("%c", &op);
        }
        result = Calculator(x, y, op);
        printf("Result: %.2f\n", result);
    } while (op != 'x');

    system("pause\n");
    
    return 0;
}