/* 
    Write a program that calculates the sum of digits of an integer. For example,
    the sum of the digits of the number 2155 is 2 + 1 + 5 + 5. The program should
    accept any arbitrary integer typed in by the user
*/

#include <stdio.h>

int calculateSumOfDigits(int number);
int getAmountOfDigits(int number);

int main(void)
{
    int number, sum;

    printf("Please enter an integer: ");
    scanf("%i", &number);

    sum = calculateSumOfDigits(number);
    printf("The sum of the integers in the given integer is %i\n", sum);

    return 0;
}

int calculateSumOfDigits(int number)
{
    int sum;
    int numOfDigits = getAmountOfDigits(number);

    for (int i = 0; i < numOfDigits; ++i)
    {
        sum += number % 10; // Get right-most digit
        number = number / 10; // Remove the right-most digit
    }

    return sum;
}

int getAmountOfDigits(int number)
{ 
    int numOfDigits = 0;

    while (number != 0)
    {
        number = number / 10;
        ++numOfDigits;
    }

    return numOfDigits;
}