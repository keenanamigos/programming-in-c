#include <stdio.h>

int main(void)
{
    float value1, value2;
    char operator;

    printf("Please type your expression: ");
    scanf("%f %c %f", &value1, &operator, &value2);
    
    if(operator == '+')
    {
        printf("%.2f\n", value1 + value2);
    }
    else if (operator == '-')
    {
        printf("%.2f\n", value1 - value2);
    }
    else if (operator == '*')
    {
        printf("%.2f\n", value1 * value2);
    }
    else if (operator == '/')
    {
        printf("%.2f\n", value1 / value2);
    }
    else
    {
        printf("Please enter a symbol for addition, subtraction, multiplication, or division.\n");
    }

    return 0;
}