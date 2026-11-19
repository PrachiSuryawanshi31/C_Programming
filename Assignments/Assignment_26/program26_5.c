/*5.Accept character from user and display its ASCII value in decimal, octal and hexadecimal format.

Input: A
Output: Decimal     65
        Octal       0101
        Hexadecimal 0X41
*/

#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
    {
        printf("Decimal : %d \n Octal : 0%o \n Hexadecimal : 0X%x",ch,ch,ch);
    }

    else if((ch >= 'a') && (ch <= 'z'))
    {
        printf("Decimal : %d \n Octal : 0%o \n Hexadecimal : 0X%x",ch,ch,ch); 
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter Character: \n");
    scanf(" %c",&cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}