/*WAPC to input a positive integer. Check whether the number is abundant or not. Abundant Number – A number for which the sum of proper 
divisors is greater than the number. Example: 12 ? 1+2+3+4+6=16 > 12*/
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
    if(num<sum)
    printf("%d is a abundant number", num);
    else
    printf("%d is not a abundant number", num);
    return 0;
}
