/* 
    Write a program that subtracts the value 15 from 87 and display the result,
    together with an appropriate message, at the terminal.
*/

#include <stdio.h>

int main(void)
{
    int a = 87;
    int b = 15;
    int c = a - b;

    printf("%i minus %i is equal to %i\n", a, b, c);

    return 0;
}