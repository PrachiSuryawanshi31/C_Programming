/*1.Write a program which accept string from user and accept one character.
check whether that character is present in string or not.

Input: Marvellous Multi OS
       : e
Output: Character Found

Input: Marvellous Multi OS
       : w
Output: Character not Found*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

//typedef int BOOL

bool ChkChar(char *str, char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return 1;
        }
        
        return 0;

        str++;
    }
}

int main()
{
    char arr[200];
    char cValue ='\0';
    bool bRet = 0;

    printf("Enter String: \n");
    scanf("%[^'\n']s",arr);

    printf("Enter the Character: \n");
    scanf(" %c",&cValue);

    bRet =ChkChar(arr,cValue);

    if(bRet == 1)
    {
        printf("Character Found");
    }

    else
    {
        printf("Character not found");
    }

    return EXIT_SUCCESS;
}