/* 
    Write a program that generates a table of triangular numbers using the formula: n (n + 1) / 2.
    Have the formula generate 

*/

#include <stdio.h>

void generateTable(int startingValue, int endingValue);
int getNthTriangularNumber(int n);

int main(void)
{
    int startingValue = 5;
    int endingValue = 50;
    printf("TABLE OF TRIANGULAR NUMBERS\n\n");
    printf("n       Triangular Number\n");
    printf("-------------------------\n");
    generateTable(startingValue, endingValue);

    return 0;
}


void generateTable(int startingValue, int endingValue)
{
    int triangularNumber;

    for(int i = startingValue; i <= endingValue; ++i)
    {
        if (i % 5 == 0)
        {
            triangularNumber = getNthTriangularNumber(i);
            printf("%1i     %10i\n", i, triangularNumber);
        }   
    }
}

int getNthTriangularNumber(int n)
{
    return n * (n + 1) / 2;
}