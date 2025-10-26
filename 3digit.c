#include <stdio.h>
int main() 
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if(num>=100 && num<=999) 
    {
        if (num%3 == 0) 
        {
            printf("\n%d is a 3-digit number and is divisible by 3", num);
        } 
        else 
        {
            printf("\n%d is a 3-digit number but is not divisible by 3", num);
        }
    }
    else
    {
        printf("\n%d is not a 3-digit number", num);
    }
    return 0;
}
