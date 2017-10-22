#include <stdio.h>

int main(void)
{
    int number;

    printf("Please enter a number: ");
    scanf("%i", &number);

    if (number < 0)
    {
        number = -number;
    }

    printf("The absolute value is %i\n", number);

    return 0;
}