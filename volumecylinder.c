//WAPC to input radius and height of a cylinder. Calculate the volume of the cylinder.
#include <stdio.h>
#define PI 3.142
int main()
{
    float radius, height, volume;
    printf("\nEnter the radius");
    scanf("%f",&radius);
    printf("\nEnter the height");
    scanf("%f",&height);
    volume = PI * radius * radius * height;
    printf("\nVolume of the cylinder: %.2f",volume);
    return 0;
}


    
