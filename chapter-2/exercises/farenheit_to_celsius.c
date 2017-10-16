/* 
    Write a program that converts 27 degrees fahrenheit to Celsius 
    Formula: C = (F - 32) / 1.8
*/

#include <stdio.h>

// Functions
float convertFahrenheitToCelsius(float fahrenheitValue);

int main(void)
{
    float fahrenheitValue = 27;
    float celsius = convertFahrenheitToCelsius(fahrenheitValue);
    printf("%f degrees Fahrenheit converted to Celsius is equal to %f degrees\n", fahrenheitValue, celsius);

    return 0;
}

float convertFahrenheitToCelsius(float fahrenheitValue)
{
    float celsiusValue = ((fahrenheitValue - 32) / 1.8);
    return celsiusValue;
}