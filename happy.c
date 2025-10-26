/*WAPC to input a positive integer. Check whether it is Happy or not. Happy Number � A number that eventually reaches 1 when replaced repeatedly
 by the sum of the squares of its digits. Example: 19 ? 1�+9�=82 ? 8�+2�=68 ? 6�+8�=100 � ? 1*/
/*WAPC to input a positive integer. Check whether it is Happy or not. Happy Number � A number that eventually reaches 1 when replaced 
repeatedly by the sum of the squares of its digits. Example: 19 ? 1�+9�=82 ? 8�+2�=68 ? 6�+8�=100 � ? 1*/
#include <stdio.h>
int main() 
{
    int num, ognum, sumsq, digit;
    printf("\nEnter a positive integer: ");
    scanf("%d", &num);
    ognum = num;
    while(num!=1 && num!=4) 
    {
        sumsq = 0;
        while(num > 0) 
        {
            digit = num%10;
            sumsq += digit*digit;
            num /= 10;
        }
        num = sumsq;
    }
    if(num == 1) 
    {
        printf("\n%d is a Happy Number", ognum);
    } 
    else 
    {
        printf("\n%d is not a Happy Number", ognum);
    }
    return 0;
}
