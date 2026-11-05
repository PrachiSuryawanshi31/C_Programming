/*5. Write a program which accpet total marks & obtained marks from user and calculate percentage.

Input: 1000  745
Output: 74.5%

*/

#include<stdio.h>
#include<stdlib.h>

float Percentage(int iNo1, int iNo2)
{
    float fAns = 0.0f;

    fAns = ((float)iNo2 / iNo1) * 100;

    return fAns;

}

int main()
{

    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0;

    printf("Please enter total marks :");
    scanf("%d",&iValue1);

    printf("please enter obtained marks:");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("%f" ,fRet);

    return EXIT_SUCCESS;
}