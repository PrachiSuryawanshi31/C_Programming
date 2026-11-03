/*2. write a program which accept number from user and display its factors in decreasing order.

input:12
output: 6   4   3   2   1

input: 13
output: 1

intput: 10
output: 5   2   1
*/

#include<stdio.h>
#include<stdlib.h>

void FactRev(int iNo)
{
    int iCnt = 0;

    for(iCnt = (iNo/2); iCnt >= 1; iCnt--)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d \t", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    FactRev(iValue);

    return EXIT_SUCCESS;
}