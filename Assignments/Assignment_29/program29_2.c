/*1. Accept N number from user and return difference between frequency of even numbers and odd numbers.

Input: N : 6
        Elements : 85   66  3   80  93  88 90

Output: 1 (4 - 3)        */

#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iLength)
{
    int iCnt = 0 , iCountEven = 0 , iCountOdd = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2)== 0)
        {
            iCountEven++;
        }
        else
        {
            iCountOdd++;
        }
    }

    return (iCountEven - iCountOdd);
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
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
    
    iRet = CountEven(p , iSize);

    printf("Result is : %d",iRet);

    free(p);

    return EXIT_SUCCESS;
}