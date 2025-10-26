//WAPC to input two integers and display the contents after swapping.
#include <stdio.h>
int main() 
{
    int num1, num2, temp;
    printf("\nEnter the first integer: ");
    scanf("%d", &num1);
    printf("\nEnter the second integer: ");
    scanf("%d", &num2);
    printf("\nFirst order: %d %d", num1, num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("\nAfter swapping num1: %d, num2: %d", num1, num2);
    return 0;
}
