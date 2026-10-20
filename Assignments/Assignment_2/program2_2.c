//Accept one number from user and print that number of * on screen

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    if(iNo < 0)         //updater
    {
        iNo = -iNo;
    }

    while (iNo >= 1)
    {
        printf(" * ");
        iNo-- ;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number \n");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}