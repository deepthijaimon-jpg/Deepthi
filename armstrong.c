/*WAPC to input a positive integer. Assume that the number is of 3 digits. Check and print if the number is Armstrong or not. An Armstrong 
number is a number that is equal to the sum of its own digits each raised to the power of the number of digits 
for example, 153 = 1³ + 5³ + 3³.*/
#include <stdio.h>
int main() 
{
    int num, ognum, rem, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    ognum = num;
    if(num<100 || num>999) 
    {
        printf("\n%d is not a three-digit number", num);
    }
    while(ognum!=0) 
    {
        rem = ognum%10;
        result += rem*rem*rem;
        ognum /= 10;
    }
    if (result == num) 
    {
        printf("\n%d is an Armstrong number", num);
    } 
    else 
    {
        printf("\n%d is not an Armstrong number", num);
    }
    return 0;
}
