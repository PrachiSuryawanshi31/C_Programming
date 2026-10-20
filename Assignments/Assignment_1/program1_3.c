//Program to print 5 to 1 numbers on screen

#include<stdio.h>
#include<stdlib.h>

void Display()
{
    int i = 0;
    int j = 0;

    j = 5;

    while( i < j)
    {
        printf("%d ",j);
        j--;
    }
}

int main()
{
    Display();

    return EXIT_SUCCESS;
}