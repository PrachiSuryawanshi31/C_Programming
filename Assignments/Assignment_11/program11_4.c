/*4.Write a program which accept range from user and return addition of all even numbers in between that range.
(Range should contains positive numbers only)

input: 23  30
output: 108

input: 10  18
output : 70

input : -10 2
output: Invalid range

input: 90 18
output:invalid range
*/

#include<stdio.h>
#include<stdlib.h>


int RangeSumEven(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;
    
    if((iStart <= 0) || (iEnd <= 0) || (iStart >= iEnd))
    {
        return -1;
    }
        
    else
    {
        for(iCnt = iStart; iCnt <= iEnd; iCnt++)
        {
            if((iCnt % 2) == 0)
            {
                iSum = iSum + iCnt;   
            }
        }
    }
    
    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet =0;

    printf("Enter Staring point: ");
    scanf("%d",&iValue1);

    printf("Enter Ending point: ");
    scanf("%d",&iValue2);
    
    iRet = RangeSumEven(iValue1, iValue2);
    
    if(iRet == -1)
    {
        printf("Invalid range");
    }
    else
    {
        printf("Addition is : %d",iRet);
    }

    return EXIT_SUCCESS;
}