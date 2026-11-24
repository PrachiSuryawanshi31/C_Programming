/*1.Write a progarm which display ASCII table.
Table contain symbol,Decimal,Hexadecimal and Octal representation of every member from 0 to 255*/


#include<stdio.h>
#include<stdlib.h>

void DisplayASCII()
{
    int iNo = 0;

    printf("Dec \t Hex \t Oct \t Char \n");
    printf("---------------------\n");

    for(iNo =1; iNo <= 127; iNo++)
    {
        if((iNo < 32) || (iNo >= 127))
        {
            printf("%d\t%x\t%o\t-\n",iNo,iNo,iNo);
        }
        else
        {
            printf("%d\t%x\t%o\t%c\n",iNo,iNo,iNo,iNo);
        }
    }

    
}

int main()
{
    DisplayASCII();

    return EXIT_SUCCESS;
}