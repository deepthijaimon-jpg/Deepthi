//WAPC to display the first ‘n’ natural numbers where ‘n’ is the user input.
#include <stdio.h>
int main()
{
    int num,i;
    printf("\nEnter a number: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
            printf("\n%d",i);
    }
    return 0;
}
