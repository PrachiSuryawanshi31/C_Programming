//Input : 10
// 1  3  5  7 9

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int icnt = 0;

    for(icnt = 1; icnt <= iNo; icnt += 2)    //icnt+=2 is short hand operator
    
    {
        printf("%d \t",icnt);
    }

    printf("\n");
}

int main()
{

    int iValue = 0;

    printf("Enter the Frequency: \n");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}