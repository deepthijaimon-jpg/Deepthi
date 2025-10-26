/*With the help of 4 user-defined functions, design a basic calculator capable of addition, subtraction, multiplication and division.*/
#include <stdio.h>

double add(double num1, double num2) 
{
    return num1 + num2;
}
double subtract(double num1, double num2) 
{
    return num1 - num2;
}
double multiply(double num1, double num2) 
{
    return num1 * num2;
}
double divide(double num1, double num2) 
{
    if (num2 == 0) 
    {
        printf("Error: Division by zero is not allowed.\n");
        return 0; 
    }
    return num1 / num2;
}

int main() 
{
    char symbol;
    double num1, num2, result;

    printf("\nEnter an operator (+, -, *, /): ");
    scanf(" %c", &symbol); 
    printf("\nEnter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch(symbol) 
    {
        case '+':
            result = add(num1, num2);
            printf("\nResult: %.2lf", result);
            break;
        case '-':
            result = subtract(num1, num2);
            printf("\nResult: %.2lf", result);
            break;
        case '*':
            result = multiply(num1, num2);
            printf("\nResult: %.2lf", result);
            break;
        case '/':
            result = divide(num1, num2);
            if (num2 != 0) 
            {
                printf("\nResult: %.2lf", result);
            }
            break;
        default:
            printf("\nError: Invalid operator");
            break;
    }
    return 0;
}
