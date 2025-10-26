/*WAPC to do the following:
Input: age, citizenship status (Y/N), criminal record (Y/N).
Eligible if: age = 18 and citizenship = Y and no criminal record.
If age = 60, print "Senior Citizen Eligible".
If not eligible, specify why.*/
#include<stdio.h>
int main() 
{
    int age;
    char citizenship, criminalrecord;
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Are you a citizen?(type Y/N): ");
    scanf("%c", &citizenship);
    printf("Do you have a criminal record?(type Y/N): ");
    scanf("%f", &criminalrecord);
    if (age>=18 && (citizenship=='Y' || citizenship=='y') && (criminalrecord=='N' || criminalrecord=='n')) 
    {
        if(age >= 60) 
            printf("\nSenior Citizen Eligible");
        else 
            printf("\nEligible");
    } 
    else 
    {
        printf("\nNot eligible. Reason:");
        if (age < 18) 
            printf("\n- Age is less than 18");
        if (citizenship!='Y' && citizenship!='y') 
            printf("\n- Not a citizen");
        if (criminalrecord!='N' && criminalrecord!='n') 
            printf("\n- Has a criminal record");
    }
    return 0;
}
