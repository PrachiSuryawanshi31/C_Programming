/*5. Write a program which accept area in square feet and convert it into square meter.
1 square feet = 0.0929 Square meter

input: 5
output: 0.464515

input: 7
output:0.650321
*/

#include<stdio.h>
#include<stdlib.h>

double SquareMeter(int iNo)
{
    double areaInSqMeter = 0.0;

    areaInSqMeter = iNo * 0.0929;

    return areaInSqMeter;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet: ");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Area in Square meter is : %lf",dRet);

    return EXIT_SUCCESS;
}