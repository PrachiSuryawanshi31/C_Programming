

#include<stdio.h>
#include<stdlib.h>

void countFrequencyX(char *str)
{
    int iCountSmall = 0, iCountCapital = 0, iCountDigits = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCountCapital++;
            
        }

        else if((*str >= 'a') && (*str <= 'z'))
        {
            iCountSmall++;
        }

        else if((*str >= '0') && (*str <= '9'))
        {
            iCountDigits++;
        }

        str++;
    }

    printf("Number of Capital Letter is : %d \n",iCountCapital);
    printf("Number of Small Letter is : %d\n",iCountSmall);
    printf("Number of Digit is : %d \n",iCountDigits);

}

int main()
{
    char Arr[100] = {'\0'};
    int iRet = 0;

    printf("Enter String: \n");
    //fgets(Arr, sizeof(Arr),stdin);
    scanf("%[^'\n']s",Arr);

    countFrequencyX(Arr);
    
    return EXIT_SUCCESS;
}