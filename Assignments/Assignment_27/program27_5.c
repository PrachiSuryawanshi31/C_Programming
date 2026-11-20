/*5.Write a program which accept string from user and display it in reverse order.

Input:MarvellouS
Output:SuollevraM
*/

#include<stdio.h>
#include<stdlib.h>

void Reverse(char *str)
{
    char *start = str;

    while(*str != '\0')
    {
        str++;
    }
    str--;

    printf("Reverse String is :");

    while(str >= start)
    {
        printf("%c",*str);
        str--;
    }

    printf("\n");
}

int main()
{
    char arr[200];

    printf("Enter String: \n");
    scanf("%[^'\n']s",arr);

    Reverse(arr);

    return EXIT_SUCCESS;
}