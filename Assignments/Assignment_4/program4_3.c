/*3. Find the Greater of Two Numbers
Problem Statement : Accept two integers and determine which number is greater.
 If both numbers are equal,display an appropriate message.
*/

#include<stdio.h>
#include<stdlib.h>

void FindGreater(int iFirst, int iSecond)
{
    if(iFirst > iSecond)
    {
        printf("%d is Greater",iFirst);
    }

    else if(iFirst < iSecond)
    {
        printf("%d is Greater",iSecond);
    }

    else if(iFirst == iSecond)
    {
        printf("Both Numbers are Equal");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter two numbers: \n");
    scanf("%d %d", &iValue1, &iValue2);

    FindGreater(iValue1, iValue2);

    return EXIT_SUCCESS;
}