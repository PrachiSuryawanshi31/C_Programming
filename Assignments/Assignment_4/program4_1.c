/*1.Check Whether a Number is poistive or Negative
problem Statement:write a C program that accept an integer from the user and
determines whether the entered number is positive,negative, or zero.

Expected output 
 input : 15  -> Positive Number
 input : -8 -> Negative number
 input : 0 -> Zero 
*/

#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int iValue)
{
    if(iValue > 0)
    {
        printf("Positive Number");
    }

    else if(iValue < 0)
    {
        printf("Negative Number");
    }

    else if(iValue == 0)
    {
        printf("Zero");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number:\n");
    scanf("%d",&iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}