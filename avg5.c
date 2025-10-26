//WAPC to input five integers from the user. Calculate and print the average.
#include <stdio.h>
int main()
{
    int number, sum, i;
    float avg;
    printf("\nEnter 5 numbers: ");
    for(i=0;i<5;i++)
    {
            scanf("%d", &number);
            sum = sum+number; 
    }       
    avg=sum/5.0f;
    printf("The average is: %f\n", avg);
    return 0;
}
