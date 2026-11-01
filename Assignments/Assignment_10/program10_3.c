/*3.Write a program which accept distance in kilometer and convert it into mete.
1 killometer = 1000 Meter

input : 5
output: 5000

input: 12
output: 12000
*/

#include<stdio.h>
#include<stdlib.h>

int KMtoMeter(int iNo)
{
    int iKmConverter = iNo * 1000;
    
    return iKmConverter; 
}


int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Distance: ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meter is : %d",iRet);
    return EXIT_SUCCESS;
}

