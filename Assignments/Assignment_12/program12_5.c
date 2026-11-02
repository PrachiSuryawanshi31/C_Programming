/*5.Write a program which accept number user and count frequency of such a digits which are less than 6.

input: 2395
output:3

input:1018
output:3

input: 9440
output:3

input: 96672
output: 1
*/

#include<stdio.h>
#include<stdlib.h>

int Count(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;

        if(iDigit < 6)
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

    iRet = Count(iValue);
    
    printf("%d",iRet);

    return EXIT_SUCCESS;
}