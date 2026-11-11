//Accept one number from user and print thar number of * on screen 
#include<stdio.h>
#include<stdlib.h>

void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("* ");
    }
}

int main()
{
    int iValue = 0;
    iValue = 5;

    Accept(iValue);

    return EXIT_SUCCESS;
}