/* 
    Write a program that acts as a simple 'printing' calculator. The program should allow the user to type expressions in the form
    number  operator

    The following operators should be recognized by the program 
    +   -   *   /   S   E

    The S operator tells the program to set the "accumulator" to the typed-in number. The E operator tells the program that execution
    is to end. The artihmetic operations are performed on the contents of the accumulator with the number that was keyed in acting as
    the second operand. 
*/

#include <stdio.h>

void prompt();

int main(void)
{
    float accumulator;
    char operator;
    
    printf("Please enter a value for the accumulator and the 'S' character sepearated by a space: ");
    scanf("%f %c", &accumulator, &operator);
    float value = accumulator;

    while (operator != 'E')
    {
        if (value == 0 && operator == '/')
        {
            printf("Cannot divide by zero.\n");
            prompt();
            scanf("%f %c", &value, &operator);
        }

        switch (operator)
        {
            case '+':
                accumulator += value;
                printf("%f\n", accumulator);
                break;
    
            case '-':
                accumulator -= value;
                printf("%f\n", accumulator);
                break;
    
            case '*':
                accumulator *= value;
                printf("%f\n", accumulator); 
                break;
    
            case '/':
                accumulator /= value;
                printf("%f\n", accumulator);
                break;
    
            case 'S':
                accumulator = value;
                printf("%f\n", accumulator);
                break;
                
            default:
                printf("Unknown operator. Please use +, -, *, /, S, or E.\n");
        }

        prompt();
        scanf("%f %c", &value, &operator);
    }

    printf("%f\n", accumulator); // Print when 'E' operator is entered

    return 0;
}

void prompt()
{
    printf("Please enter a value and an operator separated by a space for calculation on the accumulator: ");
}