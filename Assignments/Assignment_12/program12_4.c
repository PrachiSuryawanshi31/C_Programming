/*4. Write a program which accept number from user and count frequency of 4 in it .

Input: 2395
ouput: 0

Input: 1018
output:0

Input:9440
output:2

Input: 922432
ouput: 1
*/

#include<stdio.h>
#include<stdlib.h>

int CountFour(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;

        if(iDigit == 4)
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

    iRet = CountFour(iValue);

    printf("%d \n",iRet);

    return EXIT_SUCCESS;
}