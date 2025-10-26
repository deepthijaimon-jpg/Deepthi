//WAPC to check if a triangle is valid or not. If it is valid, check and print if it is isosceles, scalene or equilateral.
#include <stdio.h>
int main() 
{
    float side1, side2, side3;
    printf("\nEnter the lengths of the three sides of the triangle:\n");
    scanf("%d %d %d",&side1, &side2, &side3);
    
    if(side1+side2>side3 && side1+side3>side2 && side2+side3>side1) 
    {
        printf("\nThe triangle is valid");
        if (side1==side2 && side2==side3) 
        {
            printf("\nThe triangle is an equilateral triangle");
        }
        else if(side1==side2 || side2==side3 || side1==side3) 
        {
            printf("\nThe triangle is an isosceles triangle");
        } 
        else 
        {
            printf("\nThe triangle is a scalene triangle");
        }
    } 
    else 
    {
        printf("\nThe triangle is not valid");
    }
    return 0;
}
