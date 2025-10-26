/*WAPC to do the following:
Input: height (m), weight (kg).
Calculate BMI = weight / (height²).
Classify:
BMI < 18.5 ? Underweight
18.5 = BMI < 25 ? Normal
25 = BMI < 30 ? Overweight
= 30 ? Obese
If overweight or obese and age > 40 ? print "Consult doctor".*/
#include <stdio.h>
int main() 
{
    float height, weight, bmi;
    int age;
    printf("\nEnter your height(m): ");
    scanf("%f", &height);
    printf("\Enter your weight(kg): ");
    scanf("%f", &weight);
    printf("\nEnter your age(yr): ");
    scanf("%d", &age);
    bmi = weight/(height*height);
    printf("\nBMI: %.2f\n", bmi);
    
    if(bmi < 18.5) 
        printf("\nClassification: Underweight");
    else if (bmi >= 18.5 && bmi < 25) 
        printf("\nClassification: Normal");
        
    else if (bmi >= 25 && bmi < 30) 
    {
        printf("\nClassification: Overweight");
        if (age > 40) 
            printf("\nConsult doctor");
    }
    else 
    { 
        printf("\nClassification: Obese");
        if (age > 40) 
            printf("\nConsult doctor");
    }
    return 0;
}
