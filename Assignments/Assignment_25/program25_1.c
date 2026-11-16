/*1.Accept Charecter from user and check wheter it is alphabet or not (A-Z a-z).
Input: F
Output: True

Input:&
Output: False
*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    if((ch >= 'A') && (ch <= 'Z') ||
       (ch >= 'a') && (ch <= 'z'))
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

    printf("Enter the Character: \n");
    scanf("%c",&cValue);

    bRet = ChkAlpha(cValue);

    if(bRet == 1)
    {
        printf("It is Character");
    }

    else
    {
        printf("It is not Character");
    }

    return EXIT_SUCCESS;
}