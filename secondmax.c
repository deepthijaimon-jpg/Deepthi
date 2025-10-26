/*WAPC to input an array of ‘n’ elements from the user. Find and display the second highest element of the array.*/
#include<stdio.h>
int main()
{
    int num, max, second, j, i;
    int arr[num];
    printf("Enter the number of elements stored in the array: ");
    printf("%d",&num);
    for(i=0;i<num;i++)
    {
             printf("\nEnter the integer: ");
             scanf("%d", arr[i]);
    }
    max=arr[0];
    for(j=0;j<num;j++)
    {
             if(arr[j]>max)
             {
                  second=max;
                  max=arr[j];
             }
    }
    printf("%d is the secondmost element in the array", second);
    return 0;
}
