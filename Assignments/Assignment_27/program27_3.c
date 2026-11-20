/*3.Write a program which accept string from user and return difference between frequency of small character and frequency of capital characters.

Input: MarvellouS
Output: 6   (8 - 2)
*/

#include<stdio.h>
#include<stdlib.h>

int difference(char *str)
{
    int iCapitalCnt= 0, iSmallCnt= 0;

    while( *str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCapitalCnt++;
        }

        else if((*str >= 'a') && (*str <= 'z'))
        {
            iSmallCnt++;
        }

        str++;
    }

    return iSmallCnt - iCapitalCnt;

}

int main()
{
    char arr[200];
    int iRet = 0;

    printf("Enter String :\n");
    scanf("%[^'\n']s",arr);

    iRet =difference(arr); 

    printf("%d",iRet);

    return EXIT_SUCCESS;
}