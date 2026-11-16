/*3.Accept Character from user and check whether it is digit or not (0-9).

Input:7
output: TRUE

Input:d
output: False
*/

#include<stdio.h>
#include<stdlib.h>


#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char ch)
{
    if((ch >= '0') && (ch <= '9'))
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
    scanf("%c",&cValue);

    bRet = ChkDigit(cValue);
    
    if(bRet == 1)
    {
        printf("It is digit \n");
    }

    else
    {
        printf("It is not digit \n");
    }

    return EXIT_SUCCESS;
}