/*5.Write a program which accept number from user and return difference between summation of even digits and summation of odd digits.

input: 2395
output: -15  (2 -17)

input: 1018
output: 6  (8 -2)

input: 8440
output: 16  (16 -0)

input: 5733
output: -18  (0 -18)

*/

#include<stdio.h>
#include<stdlib.h>

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iEvenSum = 0, iOddSum = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;

        if((iDigit % 2) == 0)
        {
            iEvenSum = iEvenSum + iDigit;
        }

        else
        {
            iOddSum =  iOddSum + iDigit;
        }
    }

    return iEvenSum - iOddSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}