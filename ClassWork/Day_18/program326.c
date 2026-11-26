#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
    int iCnt = 0;

    printf("Elements of the Array are: \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("%d \n",Arr[iCnt]);
    }
    
}

int main()
{
    int *ptr = NULL;
    int iSize = 0, iCnt = 0;

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
    
    Display(ptr,iSize);

    //Strp 3:Free the Memory

    free(ptr);

    return EXIT_SUCCESS;
}