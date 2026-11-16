/*2.Write a program which accept string from user and accept one character.
Return frequency of that character .

Input: Marvellous Multi OS
       : M
Output: 2

Input: Marvellous Multi OS
       : w
Output: 0
*/

#include<stdio.h>
#include<stdlib.h>

int CountChar(char *str, char ch)
{
    int iCount = 0;


    while(*str != '\0')
    {
        
        if(*str == ch) 
        {
            iCount++;
        }
        str++;
    }

    return iCount;
}

int main()
{
    char arr[200];
    char cValue ='\0';
    int bRet = 0;

    printf("Enter String: \n");
    scanf("%[^'\n']s",arr);

    printf("Enter the Character: \n");
    scanf(" %c",&cValue);

    bRet =CountChar(arr,cValue);
 
    printf("Character frequency is : %d ",bRet);
    
    return EXIT_SUCCESS;
}