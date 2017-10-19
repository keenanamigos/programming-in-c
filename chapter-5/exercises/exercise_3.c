/* 
    Write a program that generates a table of triangular numbers using the formula: n (n + 1) / 2.
    Have the formula generate 

*/

#include <stdio.h>

void generateTable(int startingValue, int endingValue);
int getNthTriangularNumber(int n);

int main(void)
{
    int startingValue = 1;
    int endingValue = 50;
    printf("TABLE OF TRIANGULAR NUMBERS\n\n");
    printf("From %i to %i\n", startingValue, endingValue);
    printf("-------------\n");
    generateTable(startingValue, endingValue);

    return 0;
}


void generateTable(int startingValue, int endingValue)
{
    int triangularNumber;

    for(int i = startingValue; i <= endingValue; ++i)
    {
        triangularNumber = getNthTriangularNumber(i);
        printf("%7i\n", triangularNumber);
    }
}

int getNthTriangularNumber(int n)
{
    return n * (n + 1) / 2;
}