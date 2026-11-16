/*4.Accept Charecter from user and check wheter it is capital or not (A-Z).

Input: g
Output: True

Input:F
Output: False
*/
#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSmall(char ch)
{
    if((ch >= 'a') && (ch <= 'z'))
    {
        return 1;
    }

    else
    {
        return 0;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = 0;

    printf("Enter Character: \n");
    scanf(" %c",&cValue);

    bRet = ChkSmall(cValue);

    if(bRet == 1)
    {
        printf("It is Small case Character");
    }

    else
    {
        printf("It is not small Case Character");
    }

    return EXIT_SUCCESS;
}