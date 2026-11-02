/*3.Write a program which accept number from user nd count frequency of 2 in it.

Input: 2395
output:1

Input: 1018
output:0

Input: 9000
output:0

Input:922432
output:3
*/

#include<stdio.h>
#include<stdlib.h>

int CountTwo(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;

        if(iDigit == 2)
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

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    iRet = CountTwo(iValue);

    printf("%d \n",iRet);

    return EXIT_SUCCESS;
}