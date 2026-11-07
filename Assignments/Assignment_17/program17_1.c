/* 1.Accept number of rows and number of columns from user and display below patern.

Input:  iRow = 4        iCol = 4

Output: 1   2   3    4   
        5   6   7    8   
        9   1   2    3  
        4   5   6    7        
*/


#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iNo = 0;

    for(i = 1, iNo = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf(" %d \t",iNo);
            
             iNo++; 

            if(iNo > 9)
            {
                iNo = 1;
            }

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