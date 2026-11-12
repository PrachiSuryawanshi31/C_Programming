/*5. Write a program which return difference between Even Factorial and odd factorial of given number.

input: 5
output: -7      (8 - 15)

input: -5
output: -7      (8 - 15)

input: 10
output: 2895     (3840 - 945)
*/


#include<stdio.h>
#include<stdlib.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iEvenFact = 0;
    int iOddFact = 0;

    iEvenFact = 1;
    iOddFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iEvenFact = iEvenFact * iCnt;
        }
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            iOddFact = iOddFact * iCnt;
        }
    }


    return iEvenFact - iOddFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is: %d",iRet);

    return EXIT_SUCCESS;
}