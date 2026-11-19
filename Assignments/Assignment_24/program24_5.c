/*5.Write a program which accept string from user and reverse that string in place.

Input: "abcd"
Output: dcba

Input:"abba"
Output: abba
*/

#include<stdio.h>
#include<stdlib.h>

void StrRevX(char *str)
{
    char *start = str;

    while(*str != '\0')
    {
        str++;
    }

    str--;

    printf("Reverse String: ");

    while(str >= start)
    {
        printf("%c",*str);
        str--;
    }
}

int main()
{
    char arr[20];

    printf("Enter string:");
    scanf("%[^'\n']s",arr);

    StrRevX(arr);

    return EXIT_SUCCESS;
}
