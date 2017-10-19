/* 
    Write a program to generate and print a table of the first 10 factorials
*/

#include <stdio.h>

void generateTable(int n);
int getFactorial(int n);

int main(void)
{
    printf("TABLE OF FACTORIAL VALUES\n\n");
    printf(" n       Factorial\n");
    printf("------------------\n");
    generateTable(10);

    return 0;
}

void generateTable(int n)
{
    int i;

    for (i = 0; i <= n; ++i)
    {
        int factorialValue = getFactorial(i);
        printf("%2i     %6i\n", i, factorialValue);
    }
}

int getFactorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    
    return n * getFactorial(n - 1);
}

