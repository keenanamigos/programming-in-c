#include <stdio.h>

int main(void)
{
    int n, triangularNumber;

    printf("TABLE OF TRIANGULAR NUMBERS\n\n");
    printf("n   Sum from 1 to n\n");
    printf("--- ---------------\n");

    for (n = 1; n <= 10; n += 1)
    {
        triangularNumber += n;
        printf("%i      %i\n", n, triangularNumber);
    }

    return 0;
}