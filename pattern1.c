//WAPC to display the following series of numbers: 1, 2, 4, 8, …, n-terms. Here, ‘n’ is user input.
#include <stdio.h>
int main()
{
    int num,i;
    printf("\nEnter a number: ");
    scanf("%d",&num);
    for(i=1;i<=num;i+i)
    {
            printf("\n%d",i);
    }
    return 0;
}
