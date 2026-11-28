/*1. Accept N number from user and check whether that numbers contains 11 in it or not.

Input: N : 6
        Elements : 85   66  11   80  93  88 90

Output: 11 is present

Input: N : 6
        Elements : 85   66  3   80  93  88 90

Output: 11 is absent
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define TRUE 1
#define False 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength)
{
    int iCnt = 0;
    bool bFlag = false;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            bFlag = true;
            break;
        }
    }

    return bFlag;
}

int main()
{
    int iSize = 0, iCnt = 0;
    int *p = NULL;
    bool bRet = 0;
    
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

    bRet = Check(p , iSize, iValue);

    if(bRet == 1)
    {
        printf("11 is present");
    }

    else
    {
        printf("11 is absent");
    }
    free(p);

    return EXIT_SUCCESS;
}