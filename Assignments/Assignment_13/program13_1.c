/*1.Write a program which accept number from user and return the count of even digits.

input: 2395
ouput:1

input:1018
output:2

input:-1018
output: 2

input: 8462
output: 4
*/

#include<stdio.h>
#include<stdlib.h>

int CountEven(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;

        if((iDigit % 2) == 0 )
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

    iRet = CountEven(iValue);

    printf("%d \n",iRet);

    return EXIT_SUCCESS;
}