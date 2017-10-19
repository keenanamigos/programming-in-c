/* 
    Write a program to generate and display a table of n and n^2 for integer values ranging from
    1 to 10. Be certain to print appropriate column headings
*/
#include <stdio.h>

void generateTable(int startingValue, int endingValue);

int main(void)
{
    printf("TABLE OF n And n^2 Values\n\n");
    generateTable(1, 10);

    return 0;
}

void generateTable(int startingValue, int endingValue)
{
    int n, nSquared;

    printf("n     n^2\n");
    printf("-     ---\n");

    for (n = startingValue; n <= endingValue; ++n)
    {
        nSquared = n * n;

        printf("%1i   %4i\n", n, nSquared);
    }
}