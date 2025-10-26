/*WAPC to accept the weight of a parcel in kilograms and calculate the rate per kilogram based on the following criteria:

Weight in kilograms
Rate per kilogram
First 5 kilograms
Rs. 800
Next 5 kilograms
Rs. 700
Above 10 kilograms
Rs. 500

Also input the type of the courier (‘I’ for International and ‘D’ for Domestic). If the type of the courier is International, an additional amount of Rs. 1500 is levied.
*/
#include <stdio.h>
int main() 
{
    float weight; char type;
    float amount = 0.0;
    float surcharge = 0.0;
    float total = 0.0;
    printf("Enter the weight of parcel in kg: ");
    scanf("%d", &weight);
    printf("Input the type of the courier (‘I’ for International and ‘D’ for Domestic)");
    scanf("%c", &type);
    if(weight<=5) 
    {
        amount = weight*800.0;
    } 
    else if(weight<=10) 
    {
        amount = (5*800.0)+((weight-5)*700.0);
    } 
    else
    { 
        amount = (5*800.0)+(5*700.0)+((weight-10)*500.0);
    }
    
    if(type=='I')
    {
         amount=amount+1500;
    }
    printf("\nWeight of parcel in Kg: %f",weight);
    printf("\nBill Amount: Rs. %.2f", amount);
    if(surcharge>0) 
    {
        printf("\nSurcharge (2.5%%): Rs. %.2f", surcharge);
    }
    printf("\nTotal Bill: Rs. %.2f", total);
    return 0;
}
