/*3.Write a program to find even Factorial of given number

input : 5
output : 8      (4 * 2)

input : -5
output : 8      (4 * 2)

input : 10
output : 3840      (10 * 8 * 6 * 4 * 2)
*/

#include<stdio.h>
#include<stdlib.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 0;

    iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) ==0)
        {
            iFact = iFact * iCnt;
        }
    }

    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is : %d ",iRet);

    return EXIT_SUCCESS;
}