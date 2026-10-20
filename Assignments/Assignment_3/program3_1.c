//Write a program which accept one number from user and print that number of even numbers on screen.

#include<Stdio.h>
#include<Stdlib.h>

void PrintEven(int iNo)
{
    int iCnt = 0;
    int iCount = 1;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    iCnt = 1;

    while(iCount <= iNo)
    {
        if((iCnt % 2) == 0)
        {
            printf("%d ",iCnt);
            iCount ++;
        }

        iCnt ++;
    }
/*
    for(iCount = 1; iCount <= iNo; iCnt++)
    {
        if((iCnt % 2)==0)
        {
            printf("%d ",iCnt);
            iCount ++;
        }
        
    }
*/
}


int main()
{
    int iValue = 0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return EXIT_SUCCESS;
}