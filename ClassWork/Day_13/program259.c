
#include<stdio.h>
#include<stdlib.h>

int countDigitsX(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= '0' ) && (*str <= '9'))
        {
            iCount++;
        }
        str++;
    }

    return iCount;
}

int main()
{
    char Arr[100] = {'\0'};
    int iRet = 0;

    printf("Enter String: \n");
    //fgets(Arr, sizeof(Arr),stdin);
    scanf("%[^'\n']s",Arr);

    iRet = countDigitsX(Arr);

    printf("Frequency of digit is : %d \n",iRet);
    
    return EXIT_SUCCESS;
}