/*4.Write a program which accept number from user and display it table.

input : 2
output: 2   4   6   8   10  12  14  16  18  20

input : -5
output: 5   10  15  20  25  30  35  40  45  50*/

#include<stdio.h>
#include<stdlib.h>

void Table(int iNo)
{
    int iCnt = 0;
    int iAns = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= 10; iCnt++)
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

    Table(iValue);

    return EXIT_SUCCESS;
}