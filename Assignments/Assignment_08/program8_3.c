/*Write a program to find Factorial of given number

Input :5
output: 120 (5*4*3*2*1)

input: -5
output: 120 (5*4*3*2*1)

intput: 4
output: 24  (4*3*2*1)
*/

#include<stdio.h>
#include<Stdlib.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 0;

    iFact = 1;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt =1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is %d ",iRet);

    return EXIT_SUCCESS;
}