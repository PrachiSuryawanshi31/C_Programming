#include<stdio.h>
#include<stdlib.h>

void Display(int *ptr)
{
    printf("%d \n",ptr[0]);     //11
    printf("%d \n",ptr[1]);     //21
    printf("%d \n",ptr[2]);     //51
    printf("%d \n",ptr[3]);     //101
    printf("%d \n",ptr[4]);     //111
    
}

int main()
{
    int Arr[5] = {11, 21, 51, 101, 111};

    Display(Arr);  //Display(100);

    return EXIT_SUCCESS;
}