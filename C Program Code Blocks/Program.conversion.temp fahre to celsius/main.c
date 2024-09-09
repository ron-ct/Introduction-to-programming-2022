/*Program for converting temperature from degrees fahrenheit to celsius*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float celsius,fahrenheit;

    /*Input of temperature in fahrenheit by user*/
    printf("Enter the temperature in degrees fahrenheit: ");
    scanf("%f",&fahrenheit);

    /*Fahrenheit to celsius conversion formula */
    celsius = (fahrenheit - 32) * 5/9;

    /*Print the value of celsius*/
    printf("%.2f Fahreinheit = %.2f celsius",fahrenheit,celsius);

    return 0;
}
