/*2.Accept character from user.If it is capital then display all the characters from the input characters till z.
if input charater is small then print all the characters in reverse order till a. in other case return directly.

 Input: Q
 Output:Q R S T U V W X Y Z
 
 Input:m
 Output:m l k j i h g f e d c b a
 
 Input:8
 Output:
 */

 #include<stdio.h>
 #include<stdlib.h>

 void Display(char ch)
 {
    int i;
    if(ch >= 'A' && ch <= 'Z')
    {
        for(i = ch; i<='Z'; i++)
        {
            printf("%c \t",i);
        }
    }

    else if(ch >= 'a' && ch <= 'z')
    {
         for(i = 'a'; i <= ch; i++)
        {
            printf("%c \t",i);
        }
    }

    
 }

 int main()
 {
    char cValue = '\0';

    printf("Enter the character: \n");
    scanf("%c",&cValue);

    Display(cValue);

    return EXIT_SUCCESS;
 }