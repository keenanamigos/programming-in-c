#include <stdio.h>

int main(void)
{
    float firstFloat = 123.125;
    float secondFloat;
    int firstInt = -150;
    int secondInt = -150;

    char someChar = 'a';

    firstInt  = firstFloat; // Implicit conversion from Int to Float
    printf("%f assigned to an int produces %i\n", firstFloat, firstInt);

    firstFloat = secondInt; // Implicit conversion from Float to Int
    printf("%i assigned to a float produces %f\n", secondInt, firstFloat);

    firstFloat = secondInt / 100;
    printf("%i divided by 100 produces %f\n", secondInt, firstFloat);

    secondFloat = secondInt / 100.0;
    printf("%i divided by 100.0 produces %f\n", secondInt, secondFloat);

    secondFloat = (float) secondInt / 100; // Explicit type cast to a float
    printf("(float) %i divided by 100 produces %f\n", secondInt, secondFloat);

    return 0;
}