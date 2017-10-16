#include <stdio.h>

int main(void)
{
    int someInteger = 100;
    float someFloat = 908.21;
    double someDouble = 2.98;
    char someChar = 'e';

    _Bool someBoolean = 0;

    printf("Integer: %i\n", someInteger);
    printf("Float: %f\n", someFloat);
    printf("Double: %g\n", someDouble);
    printf("Char: %c\n", someChar);
    printf("Boolean: %i\n", someBoolean);

    return 0;
}