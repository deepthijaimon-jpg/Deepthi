/*WAPC to initialize the array with 10 integers of your choice. Input an integer from the user. Check and display whether or not the input 
entered by the user is present in the array or not. Use the binary search technique (Hint: Make sure the array elements are sorted).*/
#include<stdio.h>
int main()
{
    int first, last, mid, num, flag=0;
    int arr[]={7,19,25,29,32,40,44,58,60,61};
    printf("Enter the number to be searched: ");
    scanf("%d",&num);
    first=0;last=9;
    while(first<=last)
    {
           mid=(first+last)/2;
           if(arr[mid]==num)
           {
                 flag=1;
                 break;
           }
           else if(arr[mid]<num)
                 first=mid+1;
           else
                 last=mid-1;
           }
           if(flag==1)
           printf("The number %d is in index %d", num, mid);
           else
           printf("The number %d is not present in the array", num);
           return 0;
}
