/*2.Write a program which accept range from user and display all even numbres in between that rang

input: 23  35
output: 24  26 28 30 32 34

input: 10  18
output: 10 12 14 16 18

input: 10  10
output: 10

input : 90 18
output: Invalid range

input: -10  2
output : -10  -8  -6  -4  -2  0  2
*/

#include<stdio.h>
#include<stdlib.h>

void RangeDisplayEven(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iStart < iEnd)
    {
        for(iCnt = iStart; iCnt <= iEnd; iCnt++)
        {
            if((iCnt %2 ) == 0)
            {
                printf("%d \t",iCnt);
            }
        }
    }

    else
    {
        printf("Invalid range");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Staring point: ");
    scanf("%d",&iValue1);

    printf("Enter Ending point: ");
    scanf("%d",&iValue2);
    
    RangeDisplayEven(iValue1, iValue2);

    return EXIT_SUCCESS;
}