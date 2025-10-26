//WAPC to input the coordinates of two points (x1, y1) and (x2, y2). Calculate the slope and display the same.
#include <stdio.h>
int main() 
{
    float x1, y1, x2, y2, slope;   
             
    printf("\nEnter x1: ");
    scanf("%f", &x1);
    printf("\nEnter y1: ");
    scanf("%f", &y1);
    printf("\nEnter x2: ");
    scanf("%f", &x2);
    printf("\nEnter y2: ");
    scanf("%f", &y2);
    
    if(x2-x1==0) 
    { 
        printf("\nThe slope is undefined");
    } 
    else
    {
        slope=(y2-y1)/(x2-x1);
        printf("\nThe slope of the line is: %.2f", slope); 
    }
    return 0;
}
