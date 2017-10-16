/* 
    Write a program to evaluate the polynomial showed here:
    3x^3 - 5x^2 + 6
    Given that x = 2.55
*/

#include <stdio.h>
#include <math.h>

double evaluatePolynomial(double x);

int main(void)
{
    double x = 2.55;
    double result = evaluatePolynomial(x);
    
    printf("The result of 3x^3 - 5x^2 + 6 given that x = %g is %g\n", x, result);
    return 0;
}

double evaluatePolynomial(double x)
{
    double result = pow(3 * x, 3) - pow(5 * x, 2) + 6;
    return result;
}