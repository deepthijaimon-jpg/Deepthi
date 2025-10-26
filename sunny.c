/*WAPC to input a positive integer. Check whether the number is Sunny or not. Sunny Number – A number for which the next number is a perfect square. 
Example: 8 (since 8+1=9 which is 3²)*/
#include <stdio.h>
int main() 
{
    int num, nxtnum, i,square=1, flag=0;
    printf("\nEnter a positive integer: ");
    scanf("%d", &num);
    nxtnum=num+1;
    for(i=1;i<num;i++)
    {
            square=i*i;
            if(nxtnum==square)
            {
                   flag=1;
                   break;
            }
    }  
    if(flag==1)
          printf("%d is a sunny number",num);
    else
          printf("%d is not a sunny number",num);
    return 0;
}       
    
