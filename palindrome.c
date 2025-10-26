/*WAPC to input a positive integer from the user. Check and
 print if the number is palindrome or not. A palindrome number is a number that remains the same when its digits are reversed. 
 for example, 121.*/
#include <stdio.h>
int main() 
{
    int num, reverse = 0, rem, ognum;
    printf("\nEnter a positive integer: ");
    scanf("%d", &num);
    ognum = num;
    while (num > 0) 
    {
        rem = num%10;
        reverse = reverse*10+rem;
        num /= 10;
    }
    if (ognum == reverse) 
    {
        printf("\n%d is a palindrome", ognum);
    } else 
    {
        printf("\n%d is not a palindrome", ognum);
    }
    return 0;
}
