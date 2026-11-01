/*2.Write a program which accept width & height of reactabgle from user and calculate its area.
area = widht * height

Input: 5.3  9.78
output: 51.834
*/

#include<stdio.h>
#include<stdlib.h>

double RectArea(float fWidth, float fHeight)
{
    double dArea = fWidth * fHeight;

    return dArea;
}


int main()
{

    float fValue1 = 0.0f, fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter width: ");
    scanf("%f",&fValue1);

    printf("Enter height: ");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of reactangle is: %lf",dRet);

    return EXIT_SUCCESS;
}