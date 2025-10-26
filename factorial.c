//WAPC to input a positive integer from the user. Find and display the factorial of the number.
#include <stdio.h>
int main()
{
    int num, i, factorial=1;
    printf("\nEnter a positive number: ");
    scanf("%d" ,&num);
    if(num<0)
    printf("\n%d is not a positive number", num);
    else
    {
        for(i=1;i<=num;i++)
            factorial=factorial*i;
    }
    printf("\nFactorial id %d", factorial);
    return 0;
}
