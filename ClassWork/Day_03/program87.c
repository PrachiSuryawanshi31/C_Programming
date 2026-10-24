#include<stdio.h>
#include<stdlib.h>

void CheckDivisiable(int iNo)
{
    if((iNo % 3) == 0 )   
    {
        if((iNo % 5) == 0)
        {
            printf("it is divisible by 3 and 5");
        }
        else
        {
            printf("It is not divisiable by 5 ");
        }
    }
    else
    {
        printf("It is not divisible by 3 ");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    CheckDivisiable(iValue);

    return EXIT_SUCCESS;
}