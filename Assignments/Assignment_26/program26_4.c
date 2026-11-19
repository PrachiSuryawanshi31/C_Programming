/*4.Accept Character from user and check whether it is special symbol or not (!,@,#,$,%,^,&,*).

Input : %
Output: It is Special Character

Input: d
Output: It is not Special Character
*/

#include<Stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSpecial(char ch)
{
    if((ch == '!') || (ch == '@')|| (ch == '#')|| (ch == '$')||
       (ch == '%') || (ch == '^')|| (ch == '&')|| (ch == '*'))
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
    char cValue ='\0';
    BOOL bRet = 0;

    printf("Enter the character: \n");
    scanf("%c",&cValue);

    bRet = ChkSpecial(cValue);

    if(bRet == 1)
    {
        printf("It is Special Character \n");
    }

    else
    {
        printf("It is not a special Character.\n");
    }

    return EXIT_SUCCESS;
}