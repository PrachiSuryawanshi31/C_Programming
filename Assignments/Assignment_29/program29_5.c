/*1. Accept N number from user and accept one another number as No , return frequency of No from it.

Input: N : 6
       No : 66
        Elements : 85   66  3   66  93  88 

Output: 2

Input: N : 6
        No : 12
        Elements : 85   11  3  15  11  111

Output: 0
*/

#include<stdio.h>
#include<stdlib.h>

int frequency(int Arr[], int iLength , int iNo)
{
    int iCnt = 0 , iCount = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
        }
    }

    return iCount;
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0 , iValue = 0;
    int *p = NULL;    
    
    printf("Enter Number of Elements : \n");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize * sizeof(int));

    if(NULL == p)
    {
        printf("Error: Unable to allocate the memory \n");
        return EXIT_FAILURE;
    }

    printf("Enter number of elemens : \n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    printf("Enter the number that you want to search \n");
    scanf("%d",&iValue);

    iRet = frequency(p , iSize, iValue);

    printf("%d",iRet);

    free(p);

    return EXIT_SUCCESS;
}