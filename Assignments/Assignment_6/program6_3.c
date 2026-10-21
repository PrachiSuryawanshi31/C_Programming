/*3. Calculate Shopping Discount
Problem Statement : Accept the total purchase amount and calculate the final payable amount after applying 
the following discount. Negative purchase amounts are invalid.

Purchase Amount             Discount
Below rs.1000                   0%
rs.1000 to below rs.5000        10%
rs.5000 and above               20%

Expected Output:
Input: 800 -> payable Amount = 800.00
Input: 2000 -> payable Amount = 1800.00
Input: 6000 -> payable Amount = 4800.00
*/

#include<stdio.h>
#include<stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if(fAmount <=0)
    {
        printf("Invalid Purchase Amount");
    }
    
    else if(fAmount <= 1000)
    {
        fFinalAmount = fAmount;

        printf("Payable Amount = %f",fFinalAmount);
    }

    else if((fAmount >= 1000) && (fAmount < 5000))
    {
        fFinalAmount = fAmount - (fAmount * 0.10);
        
        printf("Payable Amount = %f",fFinalAmount);
    }

    else if(fAmount >= 5000)
    {
        fFinalAmount = fAmount - (fAmount * 0.20);
        
        printf("Payable Amount = %f",fFinalAmount);
    }

}

int main()
{
    float fAmount = 0.0f;
    float fFinalAmount = 0.0f;

    printf("Enter purchase amount: \n");
    scanf("%f", &fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}