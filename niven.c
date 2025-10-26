/*WAPC to input a positive integer. Check whether it is Niven or not. Niven number – A number divisible by the sum of its digits. 
Example: 18 ÷ (1+8) = 2*/
#include <stdio.h>
int main() 
{
    int num, ognum, sum= 0, digit;
    printf("\nEnter a positive integer: ");
    scanf("%d", &num);
    ognum = num;
    while (num > 0) 
    {
        digit = num%10;
        sum = sum+digit; 
        num = num/10; 
    }
    if (sum!=0 && ognum%sum==0) 
        printf("\n%d is a Niven number", ognum); 
    else 
        printf("\n%d is not a Niven number", ognum);
    return 0;
}
