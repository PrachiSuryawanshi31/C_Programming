/*1. Write a program which accept number from user and display its digits in reverse order

Input : 2395
Output:5
       9
       3
       2

Input : 1018
Output:8
       1
       0
       1

Input :-1018
Output:8
       1
       0
       1

Input : 9000
Output:9
       0
       0
       0
*/

#include<stdio.h>
#include<stdlib.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;
    int iRev= 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
        
        printf("%d \n",iRev);

    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return EXIT_SUCCESS;
}