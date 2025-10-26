//WAPC to input two numbers and swap them without using a third variable.
#include <stdio.h>
int main() 
{
    int num1, num2;
    printf("\nEnter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("\nFirst order: %d, %d", num1, num2);
    num1 = num1+num2;
    num2 = num1-num2;
    num1 = num1-num2;
    printf("\nAfter swap num1: %d, num2: %d", num1, num2);
    return 0;
}
