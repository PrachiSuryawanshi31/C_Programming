/*2.Accept Charecter from user and check wheter it is capital or not (A-Z).
Input: F
Output: True

Input:d
Output: False
*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCapital(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
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

    bRet = ChkCapital(cValue);
    
    if(bRet == 1)
    {
        printf("It is Capital Character\n");
    }

    else
    {
        printf("It is not Capital Character \n");
    }

    return EXIT_SUCCESS;
}