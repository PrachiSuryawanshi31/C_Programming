/*3.Write a program which accept string from user and accept one character.
Return index of first occurrence of that character.

Input: Marvellous Multi OS
       : M
Output: 0

Input: Marvellous Multi OS
       : w
Output: -1


Input: Marvellous Multi OS
       : e
Output: 4
*/


#include<stdio.h>
#include<stdlib.h>

int CountChar(char *str, char ch)
{
    int index = 0;

    while(str[index] != '\0')
    {
        
        if(str[index] == ch) 
        {
            return index;
        }
      
        index++;
    }

    return -1;
}

int main()
{
    char arr[200]={'\0'};
    char cValue ='\0';
    int iRet = 0;

    printf("Enter String: \n");
    scanf("%[^'\n']s",arr);

    printf("Enter the Character: \n");
    scanf(" %c",&cValue);

    iRet =CountChar(arr,cValue);
   
    printf("Character frequency is : %d ",iRet);
    
    return EXIT_SUCCESS;
}