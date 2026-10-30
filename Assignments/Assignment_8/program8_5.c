/*4.Write a program which accept number from user and display it table.

input : 2
output: 20  18  16  14  12  10  8   6   4   2

input : 5
output: 50  45  40  35  30  25  20  15  10  5

input : -5
output: 50  45  40  35  30  25  20  15  10  5*/

#include<stdio.h>
#include<stdlib.h>

void TableRev(int iNo)
{
    int iCnt = 0 , iAns = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        iAns = iNo * iCnt;

        printf("%d \t",iAns);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    TableRev(iValue);

    return EXIT_SUCCESS;
}