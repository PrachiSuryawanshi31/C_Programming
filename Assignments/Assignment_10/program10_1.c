/*1.Write a program which accept radius of circle from user and calculate its area.
Consider value of PI as 3.14 .Area = pI * Radius * Readius

Input : 5.3
output: 88.2026

input: 10.34
output: 339.6224

*/

#include<stdio.h>
#include<stdlib.h>

double CircleArea(float fRadius)
{
    float PI = 3.14;

    float fAreaOfCircle = 3.14 * fRadius * fRadius;

    return fAreaOfCircle;
}

int main()
{

    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Radius: ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle is : %lf",dRet);

    return EXIT_SUCCESS;
}