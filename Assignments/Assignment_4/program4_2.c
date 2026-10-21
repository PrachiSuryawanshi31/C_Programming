/*2._Check EVEN or ODD Number
Problem statement:Accept an interger from the user and determine whether it is even or odd.
an even number is comletely divisible by 2.
Expected output ->
 input : 24  ->Even Number
 input : 17 ->Odd number
*/
#include<stdio.h>
#include<stdlib.h>

void CheckEvenOdd(int iValue)
{
    if((iValue % 2) ==0)
    {
        printf("Even Number");
    }

    else
    {
        printf("Odd Number");
    }
}

int main()
{

    int iValue = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;
}