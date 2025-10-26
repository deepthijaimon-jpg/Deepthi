/*WAPC to input a positive integer. Check and print if the number is perfect or not. A perfect number is a number which is equal to the sum of 
all its proper divisors (excluding itself). Example: 28 = 1 + 2 + 4 + 7 + 14*/
#include <stdio.h>
int main()
{
    int num,sum,i;
    printf("\nEnter a number: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
            if(num%i==0)
                   sum=sum+i;
    }
    if(num==sum)
    printf("%d is a perfect number", num);
    else
    printf("%d is not a perfect number", num);
    return 0;
}
