//WAPC to display the sum of the first ‘n’ odd numbers and the sum of the first ‘n’ even numbers separately. Here, ‘n’ is the user input.
#include <stdio.h>
int main()
{
    int num,i,sumodd, sumeven;
    printf("\nEnter a number: ");
    scanf("%d",&num);
    for(i=0;i<=num;i++)
    {
            if(num%2==0)
                  sumeven+=i;
            else
                  sumodd+=i;
    }
    printf("\nSum of even numbers: %d",sumeven);
    printf("\nSum of odd numbers: %d",sumodd);
    return 0;
}
            
            
