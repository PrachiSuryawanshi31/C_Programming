/*2.Accept number of rows and number of columns from user and display below patern.

Input:  iRow = 4        iCol = 4
Output: A   B  C   D
        a   b  c   d
        A   B  C   D
        a   b  c   d
*/

#include<stdio.h>
#include<stdlib.h>


void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = '\0';

    for(i = 1; i <= iRow; i++)
    {
        if((i % 2) != 0)
        {
            ch = 'A';
        }

        else
        {
            ch = 'a';
        }

        for(j = 1 ; j <= iCol; j++, ch++)
        {
            printf("%c  \t", ch);
            
        }

        printf("\n");
    }
}


/*
void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch1 = '\0', ch2 = '\0';

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1 , ch1 ='A', ch2 = 'a'; j <= iCol; j++ , ch1++ , ch2++)
        {
            if((i % 2) != 0)
            {
                printf("%c  \t", ch1);
            }

            else
            {
                printf("%c \t", ch2);
            }
            
        }

        printf("\n");
    }
}*/

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns: \n");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}
