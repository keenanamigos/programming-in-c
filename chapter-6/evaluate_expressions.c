#include <stdio.h>

int main(void)
{
    float value1, value2;
    char operator;

    printf("Please type your expression: ");
    scanf("%f %c %f", &value1, &operator, &value2);
    
    switch (operator)
    {
        case '+':
            printf("%.2f\n", value1 + value2);
            break;

        case '-':
            printf("%.2f\n", value1 - value2);
            break;

        case '*':
            printf("%.2f\n", value1 * value2);
            break;

        case '/':
            printf("%.2f\n", value1 / value2);
            break;

        default:
            printf("Please enter a symbol for addition, subtraction, multiplication, or division.\n");
    }

    return 0;
}