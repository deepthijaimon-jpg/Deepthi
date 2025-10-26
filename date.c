/*WAPC to do the following:
Input: day, month, year.
Check the following:
Month between 1 and 12.
Correct days in month (30 vs 31 days).
February: 28 days normally, 29 days if leap year.
Output: "Valid date" or "Invalid date".*/
#include <stdio.h>
int main() 
{
    int day, month, year;
    printf("Enter date (DD|MM|YYYY): ");
    scanf("%d %d %d", &day, &month, &year);
    
    if(year<=0) 
        printf("\nInvalid date");

    else if (month<1 || month>12) 
        printf("\nInvalid date");

    else if (day<1 || day>31) 
        printf("\nInvalid date");
    
    else if ((month==4 || month==6 || month==9 || month==11) && day>30) 
        printf("\nInvalid date");
        
    else if(month == 2) 
    {
        int leap = 0;
        if((year%4==0 && year%100!=0) || (year%400==0)) 
            leap = 1;
        if(leap&&day <= 29) 
            printf("\nValid date");
        else if(!leap && day <= 28) 
            printf("\nValid date");
        else 
            printf("\nInvalid date");
    }
    else 
        printf("\nValid date");
    return 0;
}
