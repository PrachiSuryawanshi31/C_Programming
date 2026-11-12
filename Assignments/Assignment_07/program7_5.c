/*5. Write a program which accept N and print first 5 multiples of N.

input: 4
output: 4   8   12  16  20
*/

#include<stdio.h>
#include<stdlib.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    int iAns = 0;

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        iAns = iCnt * iNo;
        
        printf("%d \t",iAns);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return EXIT_SUCCESS;
}