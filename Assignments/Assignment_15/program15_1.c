/*1.Write a program which accept name fro user and printf that name.

Input: Piyush Khairnar
Output:Your name is : Piyush Khairnar

*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char Name[30];

    printf("Please Enter Full name: \n");
    scanf("%[^'\n']s",&Name);

    printf("Your name is : %s",Name);

    return EXIT_SUCCESS;
}