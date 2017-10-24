/* 
    Write a program that takes an integer keyed in from the terminal and extracts and displays
    each digit of the integer in English. So, if the user types in 932, the program should display:
    nine three two

    Rememebr to display "zero" if the user types in just a zero.    
*/

#include <stdio.h>

int getNumbersInEnglish(int number); 
int getAmountOfDigits(int number);

int main(void)
{
    int number, numberOfDigits;

    printf("Please enter a number: ");
    scanf("%i", &number);

    if (number == 0)
    {
        printf("zero\n");
    }

    return 0;
}

int getNumbersInEnglish(int number)
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

