/* 
    Write a program that asks the user to type in two integer values at the terminal. 
    Test these two numbers to determine if the first is evenly divisble by the second,
    and then display the appropriate message at the terminal
*/

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int value1, value2;
    bool isEvenlyDivisible;

    printf("Please enter two numbers separated by a space to test if the first is divisible by the second: ");
    scanf("%i %i", &value1, &value2);

    isEvenlyDivisible = (value1 % value2 == 0);

    if (isEvenlyDivisible)
    {
        printf("%i is evenly divisible by %i\n", value1, value2);
    }
    else
    {
        printf("%i is NOT evenly divisible by %i\n", value1, value2);
    }

    return 0;
}