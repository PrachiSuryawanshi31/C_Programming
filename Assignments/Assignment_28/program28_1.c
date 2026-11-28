/*1.Accept N numbers from user and return difference between summation of even elements and summation of odd elements.

Input: N : 6
        Elements : 85   66  3   80  93  88
Output: 53 (234 - 181)

*/

#include<stdio.h>
#include<stdlib.h>


int Difference(int Arr[],int iLenght)
{
    int iCnt = 0 , iEvenSum = 0, iOddSum = 0;

    for(iCnt = 0; iCnt < iLenght; iCnt++)
    {
        if((Arr[iCnt]) % 2 == 0)
        {
            iEvenSum = iEvenSum + Arr[iCnt];
        }
        else 
        {
            iOddSum = iOddSum + Arr[iCnt];
        }
    }
    
    return (iEvenSum - iOddSum);

}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements: \n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize *sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return EXIT_FAILURE;
    }

    printf("Enter elements : \n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    iRet = Difference(p , iSize);

    printf("Result is : %d",iRet);

    free(p);

    return EXIT_FAILURE;
}