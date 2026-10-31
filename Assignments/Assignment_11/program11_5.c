/*1.Write a program which accept range from user and display all numbers in between that range.

Input: 23  35
output: 23 24 25 26 27 28 29 30 31 32 33 34 35

Input: 10  18
output: 10 11 12 13 14 15 16 17 18

input: 10  10
output: 10

input: -10  2
output : -10 -9 -8 -7 -6 -5 -4 -3 -2 -1 0 1 2

input : 90 18
output: Invalid range

*/

#include<stdio.h>
#include<stdlib.h>

void RangeDisplayRev(int iStart, int iEnd)
{
    int iCnt =0;
    
    if(iStart <= iEnd)
    {
        for(iCnt = iEnd; iCnt >= iStart; iCnt--)
        {
            printf("%d \t",iCnt);
        }
    }
    else
    {
        printf("Invalid Number ");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Starting point: ");
    scanf("%d",&iValue1);

    printf("Enter ending point:");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1, iValue2);

    return EXIT_SUCCESS;
}