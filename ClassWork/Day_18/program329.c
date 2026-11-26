#include<stdio.h>
#include<stdlib.h>

int Summation(int Arr[],int iLength)
{
    int iCnt = 0, iSum = 0;

    printf("Elements of the Array are: \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }

    return iSum;
    
}

float Average(int Arr[], int iLength)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    
    return (float)(iSum /iLength);
} 

int main()
{
    int *ptr = NULL;
    int iSize = 0, iCnt = 0, iRet = 0;
    float fRet =0.0f;

    printf("Enter No. of Elements you wants :\n");
    scanf("%d",&iSize);

    //Step 1: Allocate the Memory
    ptr =(int *)malloc(sizeof(int)* iSize);

    //Step 2:Use the Memory
    printf("Enter the Elements: \n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    
    iRet = Summation(ptr,iSize);
    fRet = Average(ptr,iSize);
    
    printf("Summation is : %d \n",iRet);
    printf("Average is : %f \n",fRet);

    //Strp 3:Free the Memory

    free(ptr);

    return EXIT_SUCCESS;
}