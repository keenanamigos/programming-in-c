#include <stdio.h>

int main(void)
{
    int a = 56;
    int b = 90;
    int c = 12;
    int d = 14;

    int result;

    // Subtraction
    result = b - a;
    printf("b - a = %i\n", result);

    // Multiplication
    result = a * d;
    printf("a * d = %i\n", result);

    // Division
    result = b / c;
    printf("b / c = %i\n", result);

    // Addition
    result = b + d;
    printf("b + d = %i\n", result);
    
    return 0;
}