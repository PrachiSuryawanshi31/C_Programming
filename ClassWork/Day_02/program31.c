#include<stdio.h>
#include<stdlib.h>

int main()
{
    char sName [30];
    int iAge = 0;
    float fMark = 0.0f;
    
    printf("Enter your name : \n");
    scanf("%[^'\n']s",sName);       //Enter Remains in input buffer

    printf("Enter your Age: \n");
    scanf(" %d",&iAge);             //space added

    printf("Enter your marks: \n");
    scanf("%f",&fMark);

    printf("welcome %s \n",sName);
    printf("Age is: %d  \n",iAge);
    printf("Marks is: %f \n",fMark);

    return EXIT_SUCCESS;
}