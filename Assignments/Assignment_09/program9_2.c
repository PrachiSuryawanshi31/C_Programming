/*2.Accept amount is US dollar and return its corresponding value in India currency. Consider 1 $ as 70 rupees

input: 10
output: 700

input: 3
output: 210

input: 1200
output: 84000

*/

#include<stdio.h>
#include<stdlib.h>

int DollarToINR(int iNo)
{
    int iRupees = iNo * 70;

    return iRupees;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number of USD : ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is: %d ",iRet);

    return EXIT_SUCCESS;
}