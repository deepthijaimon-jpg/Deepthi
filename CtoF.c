//WAPC to input the temperature in Celsius and output it in Fahrenheit.
#include <stdio.h>
int main()
{
    float Celsius, Fahrenheit;
    printf("\nEnter the temperature in Celsius: ");
    scanf("%f",&Celsius);
    Fahrenheit=Celsius+32;
    printf("\nFahrenheit to Celsius: %.2f", Fahrenheit);
    return 0;
}
