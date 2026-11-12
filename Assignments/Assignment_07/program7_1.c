/*1. Write a Program which accept number from user and print that number of $ * on screen

Input : 5
Output:&  *  $  *  $  *  $  *  $  *  $  *

Input : 3
Output:&  *  $  *  $  *  $  *  

Input : -3
Output:&  *  $  *  $  *  $  * 

*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    //updator
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$ * \t");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}