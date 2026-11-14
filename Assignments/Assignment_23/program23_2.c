/*.2 Write a program which accept string from user and convert it into upper case.

Input: "Marvellous Multi OS"

output: MARVELLOUS MULTI OS
*/

#include<stdio.h>
#include<stdlib.h>

void struprX(char *str)
{   
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }

        str++;
    }
}


int main()
{
    char arr[200];

    printf("Enter String: \n");
    scanf("%[^'\n']s",arr);

    struprX(arr);

    printf("Modified String : %s \n",arr);
    
    return EXIT_SUCCESS;
}
