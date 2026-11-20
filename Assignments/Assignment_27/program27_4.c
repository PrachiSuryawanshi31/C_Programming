/*4.Write a program  which accept string from user and check whether it contains vowels in it or not.

Input:marvellous
output: TRUE

Input:Demo
output:TRUE

Input:XYZ
output:FALSE
*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char *str)
{
    while(*str != '\0')
    {
        if((*str =='A')||(*str == 'E')||(*str =='I')||(*str =='O')|| (*str =='U')||
           (*str =='a')||(*str == 'e')||(*str =='i')||(*str =='o')|| (*str =='u'))
        {
            return 1;
        }
        str++;
    }
}

int main()
{
    char arr[200];
    BOOL bRet = 0;

    printf("Enter String :\n");
    scanf("%[^'\n']s",arr);

    bRet =ChkVowel(arr); 

    if(bRet == 1)
    {
        printf("Contain Vowel");
    }

    else
    {
        printf("Their is no Vowel");
    }

    return EXIT_SUCCESS;
}