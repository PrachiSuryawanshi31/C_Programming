/*2.Write program which accept one number from user and check whether that number is greater than 100 or Not.

Input:101
outout: Greater 

Input:39
outout: Smaller 
*/

#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;

#define TRUE 1
#define False 0

BOOL ChkGreater(int iNo)
{
    if(iNo >= 100)
    {
        return 1;
    }

    else
    {
        return 0 ;
    }
}

int main()
{

    int iValue = 0;
    BOOL bRet = 0;

    printf("Please enter number : \n");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);

    if(bRet == TRUE)
    {
        printf("Greater");
    }

    else
    {
        printf("Smaller");
    }

    return EXIT_SUCCESS;
}