/*5.Accept number from user and display below pattern.

Input: 8

Output: 2   4   6   8   10  12  14  16     
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    int iAns = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iAns = iCnt * 2;

        printf("%d \t",iAns);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements : \n");
    scanf("%d",&iValue);
    
    Pattern(iValue);

    return EXIT_SUCCESS;
}