/*5. Calculate Employee Bonus
Problem Statement : Accept an employee's monthly salary and completed years of service. 
Calculate the bonus using these rules : more than 10 yars of service earns a bonus of 15% 
of monthly salaray : 5 to 10 years earns 10%; less than 5 years earns 5%. 

salary must be positive and year of service cannot be negative.

Expected Output:
Input:30000  12 -> Bonus = 4500.00
Input:20000  7 -> Bonus = 2000.00
Input:10000  2 -> Bonus = 500.00
*/

#include<Stdio.h>
#include<stdlib.h>

void CalculateBonus(float fSalary, int iYear)
{
    float fBonus = 0.0f;

    if(iYear >= 10)
    {
        fBonus =(fSalary * 15/100);

        printf("Bonus = %f",fBonus);
    }

    else if(iYear >=5)
    {
        fBonus =  (fSalary * 10 /100);

        printf("Bonus = %f",fBonus);
    }

    else if(iYear >= 0)
    {
        fBonus =  (fSalary * 5/100);

        printf("Bonus = %f",fBonus);
    }

   else
   {
      printf("Invalid years of service \n");
   }

}

int main()
{
    float fSalary = 0.0f;
    int iYears = 0;

    printf("Enter Salary and years of service: ");
    scanf("%f %d", &fSalary, &iYears);

    CalculateBonus(fSalary, iYears);

    return EXIT_SUCCESS;
}