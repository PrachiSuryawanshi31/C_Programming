/*3.Write a program which accept number from user and return the count of digits in between 3 and 7.

Input:2395
output:1

Input:1018
output:0

input:4521
output:2

input: 9922
output: 0
*/

#include<stdio.h>
#include<stdlib.h>

int CountRange(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;

        if((iDigit > 3) && (iDigit < 7))
        {
            iCount++;
        }
    }

    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}