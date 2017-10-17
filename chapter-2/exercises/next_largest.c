/* 
    Write a program to find the next largest even multiple for the following values of i and j:
    i: 365, 12258, 996
    j: 7, 23, 4
*/

#include <stdio.h>

int findNextLargest(int i, int j);

int main(void)
{
    int result;

    // i: 256, j: 7 => Test from the given book example
    result = findNextLargest(256, 7);
    printf("The next largest even multiple is: %i\n", result);

    // i: 365, j: 7
    result = findNextLargest(365, 7);
    printf("The next largest even multiple is: %i\n", result);

    // i: 12258, j: 23
    result = findNextLargest(12258, 23);
    printf("The next largest even multiple is: %i\n", result);

    // i: 996, j: 4
    result = findNextLargest(996, 4);
    printf("The next largest even multiple is: %i\n", result);

    return 0;
}

int findNextLargest(int i, int j)
{
    int result = i + j - i % j;

    return result;
}