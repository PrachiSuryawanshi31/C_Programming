/* 3.Accept number of rows and number of columns from user and display below patern.

Input:  iRow = 5        iCol = 4

Output: a   b   c    d   e
        1   2   3    4   5   
        a   b   c    d   e     
        1   2   3    4   5   
        a   b   c    d   e 
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, iNo = 0;
    char ch = '\0';

    for(i = 1; i <= iRow; i++)
    {
        if((i % 2) == 0)
        {
            iNo = 1;
        }

        else
        {
            ch = 'a';
        }

        for(j = 1; j <= iCol; j++)
        {
            if(i % 2 == 0)
            {
                printf("%d \t", iNo);
                iNo++;
            }
            else
            {
                printf("%c \t", ch);
                ch++;
            }
            
        }

        printf("\n");
    }

}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns : \n");
    scanf("%d %d",&iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}

