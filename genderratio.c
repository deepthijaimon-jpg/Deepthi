//WAPC to find the gender ratio based on the number of males and number of females entered as inputs.
#include <stdio.h>
int main() 
{
    int males;
    int females;
    double gender_ratio;
    printf("\nEnter the number of males: ");
    scanf("%d", &males);
    printf("\nEnter the number of females: ");
    scanf("%d", &females);
    if(males>0) 
    {
        gender_ratio = ((double)females/males)*1000;
        printf("\nGender Ratio (females per 1000 males): %.2f", gender_ratio);
    } 
    else 
    {
        printf("\nCannot calculate gender ratio: Number of males cannot be zero.");
    }
    return 0;
}
