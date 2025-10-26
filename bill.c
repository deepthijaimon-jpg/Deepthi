/*WAPC to input the number of units of electricity consumed by a consumer. Calculate and print the electricity bill based on the following criteria:
First 100 units: Rs. 2 per unit
Next 200 units: Rs. 3 per unit
Above 300 units: Rs. 4 per unit
A surcharge of 2.5% is levied on the bill if the number of units consumed exceeds 300 units.*/
#include <stdio.h>
int main() 
{
    int units;
    float amount = 0.0;
    float surcharge = 0.0;
    float total = 0.0;
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);
    if(units<=100) 
    {
        amount = units*2.0;
    } 
    else if(units<=300) 
    {
        amount = (100*2.0)+((units-100)*3.0);
    } 
    else
    { 
        amount = (100*2.0)+(200*3.0)+((units-300)*4.0);
    }
    
    if(units>300) 
    {
        surcharge = amount*0.025; 
    }
    total = amount+surcharge;

    printf("\nUnits Consumed: %d", units);
    printf("\nBill Amount: Rs. %.2f", amount);
    if(surcharge>0) 
    {
        printf("\nSurcharge (2.5%%): Rs. %.2f", surcharge);
    }
    printf("\nTotal Bill: Rs. %.2f", total);
    return 0;
}
