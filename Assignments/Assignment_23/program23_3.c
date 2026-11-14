/*3. Write a program which accept string from user and toggle case.

Input: "Marvellous Multi OS"

output: mARVELLOUS mULTI oS
*/

#include<stdio.h>
#include<stdlib.h>

void strtoggleX(char *str)
{
    char FirstLetter = 0;

    FirstLetter = 1;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            FirstLetter = 1;
            
        }

        else if(FirstLetter == 1)
        {
            if((*str >= 'A') && (*str <= 'Z'))
            {
                *str = *str + 32;
            }

             FirstLetter = 0;
        }

        else
        {
            if((*str >= 'a') && (*str <= 'z'))
            {
                *str = *str - 32;
            }
        }

        str++;
    }
}

int main()
{
    char arr[200];

    printf("Enter String : \n");
    scanf("%[^'\n']s",arr);

    strtoggleX(arr);

    printf("Modified string is : %s",arr);

    return EXIT_SUCCESS;
}