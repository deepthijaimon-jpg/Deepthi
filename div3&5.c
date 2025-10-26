//WAPC to check and print if a number is divisible by both 3 and 5.
#include <stdio.h>
int main() 
{
    int num;
    printf("\nEnter an integer: ");
    scanf("%d", &num);
    if((num%3==0) && (num%5==0)) 
    {
        printf("\n%d is divisible by both 3 and 5", num);
    } 
    else 
    {
        printf("\n%d is not divisible by both 3 and 5", num);
    }
    return 0;
}
