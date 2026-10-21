/*5. Identify Character Type
Problem Statement: Accept a single character and determine whether it is an uppercase alphabet,lowercase alphabet, digit or special Character.Use character comparisons without using library character- classification functions.

Expected Output :
Input A -> UpperCase Alphabet
Input m -> LowerCase Alphabet
Input 7 -> digit
Input @ -> Special Character
*/
#include<stdio.h>
#include<stdlib.h>

void CheckCharacterType(char cValue)
{
    if((cValue >= 'A') && (cValue <= 'Z'))
    {
        printf("Uppercase Alphabet");
    }

    else if((cValue >= 'a') && (cValue <= 'z'))
    {
        printf("Lower Alphabet");
    }

    else if((cValue >= '0') && (cValue <= '9' ))
    {
        printf("Digit");
    }

    else
    {
        printf("Special Charecter");
    }
}

int main()
{
    char cValue ='\0';

    printf("Enter a character: \n");
    scanf("%c", &cValue);

    CheckCharacterType(cValue);

    return EXIT_SUCCESS;
}