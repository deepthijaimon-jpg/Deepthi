#include <stdio.h>
int main() 
{
    int num, ognum, digit, count = 0, sum = 0, product = 1;
    printf("\nEnter a positive integer: ");
    scanf("%d", &num);
    ognum = num;
    if(num == 0) 
    {
        count=1;
        sum = 0;
        product=0;
    } 
    else 
    {
        while(num > 0) 
        {
            digit = num % 10; 
            sum += digit;     
            product *= digit; 
            num /= 10;        
            count++;          
        }
    }
    printf("\nNumber of digits in %d: %d", ognum, count);
    printf("\nSum of digits in %d: %d", ognum, sum);
    printf("\nProduct of digits in %d: %d", ognum, product);
    return 0;
}
