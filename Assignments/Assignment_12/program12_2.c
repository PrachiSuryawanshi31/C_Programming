/*2. Write a program which accept number from user and check whether it contains 0 in it or not.

Input:2395
Output: There is no Zero

Input:1018
output:It contain Zero 

Input:9000
output:It Contain Zero

Input: 10687
output: It Contain zero
*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CHKZero(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo /10;

        if(iDigit == 0)
        {
            return TRUE;
        } 
    }

    return FALSE;
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number:");
    scanf("%d",&iValue);

    bRet = CHKZero(iValue);

    if(bRet == TRUE)
    {
        printf("It Contains Zero");
    }

    else
    {
        printf("There is no Zero");
    }

    return EXIT_SUCCESS;
}

