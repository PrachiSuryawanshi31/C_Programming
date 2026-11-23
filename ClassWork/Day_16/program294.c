#include<stdio.h>
#include<stdlib.h>

int main()
{
    int No1 = 14;
    int No2 = 11;

    int Ans = 0;

    Ans = No1 ^ No2;    //Bitwise XOR

    printf("%d \n",Ans);    //5

    return EXIT_SUCCESS;
}