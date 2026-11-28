/*4.Accept N number from user and display all such elements which are  divisible by 3 or 5

Input : N : 6
        Elements : 85 66 3 15 93 88
Output: 15
*/

#include<Stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
    int iCnt  = 0;

    iCnt = 0;
    while(iCnt < iLength)
    {
        if(((Arr[iCnt] % 3) == 0) && ((Arr[iCnt] % 5)== 0))
        {
            printf("%d",Arr[iCnt]);
        }

        iCnt++;
    }
}

int main()
{
    int iSize = 0 , iCnt = 0;
    int *p = NULL;

    printf("Enter number of Elements : \n");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize * sizeof(int));

    if(NULL == p)
    {
        printf("Error: Unable to allocate the memory \n");

        return EXIT_FAILURE;
    }
    
    printf("Enter Elements: \n");

    for(iCnt = 0 ; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    Display(p, iSize);

    free(p);

    return EXIT_SUCCESS;
}