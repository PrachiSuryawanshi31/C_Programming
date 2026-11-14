/*4. Write a program which accept string from user and toggle case.

Input: "marve89llous121"
output:89121
input:"Demo"
output:

*/

#include<stdio.h>
#include<stdlib.h>

void DisplayDigit(char *str)
{
    while(*str != '\0')
    {
        if((*str >= '0') &&(*str <= '9') )
        {
            printf("%c",*str);
       }

       str++;
    }
}

int main()
{
    char arr[200];

    printf("Enter String : \n");
    scanf("%[^'\n']s",arr);

    DisplayDigit(arr);

    return EXIT_SUCCESS;
}
