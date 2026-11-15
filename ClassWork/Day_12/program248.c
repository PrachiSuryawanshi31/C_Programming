//a    e    i     o     u
#include<stdio.h>
#include<stdlib.h>

int countVowelsX(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str == 'a') 
        || (*str == 'e') 
        || (*str == 'i') 
        || (*str == 'o') 
        || (*str == 'u'))
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

    iRet = countVowelsX(Arr);

    printf("Frequency of Vowels is : %d \n",iRet);
    
    return EXIT_SUCCESS;
}