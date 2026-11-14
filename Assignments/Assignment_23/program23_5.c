/*5.Writ a program which accept string from user and count number of white space

input: "Marvellous"
output: 0

Input: MarvellouS Infosystem
output:1

input: MarvellouS Infosystem By Piyush Manohar Khairnnar
output: 5 */

#include<stdio.h>
#include<stdlib.h>

int CountWhite(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
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
    int iRet = 0;

    printf("Enter String: \n");
    scanf("%[^'\n']s",arr);

    iRet = CountWhite(arr);

    printf("%d", iRet);

    return EXIT_SUCCESS;
}