/*WAPC to do the following:
Input: account balance, withdrawal amount.
Follow the given rules:
Withdrawal amount must be a multiple of 100.
Withdrawal must not exceed balance.
Maintain a minimum balance of ?500 after withdrawal.
Output: Transaction success or failure with reason.*/
#include <stdio.h>
int main() 
{
    float acc_balance;
    float withdrawal;
    const int min_balance = 500;
    printf("\nEnter your current account balance: ");
    scanf("%f", &acc_balance);
    printf("\nEnter the amount you wish to withdraw: ");
    scanf("%f", &withdrawal);

    if((int)withdrawal%100 != 0) 
    {
        printf("\nTransaction failed: Withdrawal amount should be in multiples of 100");
    }
    else if(withdrawal>acc_balance) 
    {
        printf("\nTransaction failed: Insufficient balance");
    }
    else if(acc_balance - withdrawal < min_balance) 
    {
        printf("Transaction failed: Withdrawal would leave the account below the minimum balance of ?%d.\n", min_balance);
    }
    else 
    {
        acc_balance = acc_balance-withdrawal;
        printf("\nTransaction successful");
        printf("\nPlease collect your cash");
        printf("\nYour new balance is: ?%.2f", acc_balance);
    }
    return 0;
}
