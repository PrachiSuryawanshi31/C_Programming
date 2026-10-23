#include<stdio.h>
#include<stdlib.h>

float Avrage( int iNo1 , int iNo2)
{
    float fAns =0.0f;

    //typecasting
    fAns = ((float)iNo1 + (float)iNo2)/2;
    
    return fAns; 
}

int main()
{
    int iValue1 = 0, iValue2 = 0 ;
    float fResult = 0.0f;

    printf("Enter First number : \n");
    scanf("%d",&iValue1);

    printf("Enter Second number: \n");
    scanf("%d",&iValue2);

    fResult = Avrage(iValue1 , iValue2);

    printf("Avrager is : %f",fResult);    

    return EXIT_SUCCESS;
}