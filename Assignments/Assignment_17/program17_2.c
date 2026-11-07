/* 2.Accept number of rows and number of columns from user and display below patern.

Input:  iRow = 4        iCol = 5

Output: 2   4   6    8   10   
        1   3   5    7   9
        2   4   6    8   10   
        1   3   5    7   9      
*/


#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iNo = 0;

    for(i = 1; i <= iRow; i++)
    {
        if((i % 2) == 0)
        {
            iNo = 1;
        }
        else
        {
            iNo = 2;
        }

        for(j = 1; j <= iCol; j++)
        {
            printf(" %d \t ",iNo);

            iNo = iNo + 2;
        }

        printf(" \n ");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows ans number of columns: \n");
    scanf("%d %d",&iValue1 , &iValue2);

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}