/*5.Write a program whih accept number from user and return difference between summation of all its factors and non factors

input: 12
output: -34    (16 - 50)

input: 10
output: -29    (8 - 37)
*/

#include<stdio.h>
#include<stdlib.h>

int FactDiff(int iNo)
{
    int iCnt = 0, iFactSum = 0, iNonFactSum = 0;
    int iDiff = 0;

    for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iFactSum = iFactSum + iCnt;
        }
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iNonFactSum = iNonFactSum + iCnt;
        }
    }

    iDiff = iFactSum - iNonFactSum;

    return iDiff;

}

int main()
{

    int iValue = 0;
    int iRet = 0;

    printf("Enter Number: \n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}