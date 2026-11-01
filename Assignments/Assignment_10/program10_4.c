/*4. Write a program which accept temprature in Fahrenheit and convert it into celsius.
1 celsius = (Fahrenheit - 32) * (5/9) 

Input: 10
output: -12.22222   (10 - 32)* (5/9)

Input: 34
output: -1.11111   (34 - 32)* (5/9)

*/

#include<stdio.h>
#include<stdlib.h>

double FhtoCs(float fTemp)
{
    double iAns = 0;

    iAns = (fTemp - 32) * (0.5555);

    return iAns;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Temperature in Farenheit: ");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("%lf",dRet);

    return EXIT_SUCCESS;
}