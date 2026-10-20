//Accept on character from user and check whether that character is vowel (a,e,i,o,u) or not

#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;

# define TRUE 1
# define FALSE 0

BOOL ChkVowel(char chValue)
{
    if( (chValue == 'A') || (chValue == 'a') ||
        (chValue == 'E') || (chValue == 'e') ||
        (chValue == 'I') || (chValue == 'i') ||
        (chValue =='O')  || (chValue == 'o') ||
        (chValue =='U')  || (chValue =='u')) 
    
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue ='\0';
    BOOL bRet = FALSE;

    printf("Enter character \n");
    scanf("%c",&cValue);

    bRet =ChkVowel(cValue);

    if(bRet == 1)
    {
        printf("It is Vowel");
    }

    else
    {
        printf("It is not Vowel");
    }

    return EXIT_SUCCESS;
}