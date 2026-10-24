/*
    -------------------------------------------------
                Operation &&
    ------------------------------------------------
        Result1     Result2      Final Result
    -------------------------------------------------
        TRUE        TRUE            TRUE
        TRUE        FALSE           FALSE
        FALSE       TRUE            FALSE   ->short circuit evalution
        FALSE       FALSE           FALSE   ->short circuit evalution
    --------------------------------------------------
    */



#include<stdio.h>
#include<stdlib.h>

void CheckDivisiable(int iNo)
{
    if(((iNo % 3) == 0 ) && ((iNo % 5) == 0))   
    {
        printf("it is divisible ");
    }

    else
    {
        printf("It is not divisible");
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