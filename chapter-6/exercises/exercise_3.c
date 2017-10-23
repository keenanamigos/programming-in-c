/* 
    Write a program that accepts two integer values typed in by the user. Display the result
    of dividing the first integer by the second, to three-decimal-place accuracy. Remember to have the program
    check for division by zero.
*/

#include <stdio.h>

int main(void)
{
    int value1, value2;

    printf("Please enter two values separated by a space to get the value of the first number divided by the second: ");
    scanf("%i %i", &value1, &value2);

    if (value2 == 0)
    {
        printf("Cannot divide by zero.\n");
    }
    else 
    {
        printf("%i divided by %i equals %i\n", value1, value2, value1 / value2);
    }

    return 0;
}