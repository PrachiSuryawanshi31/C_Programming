/*5.Accept dividion of student from user and depends on the dividion display exam timeing. There are 4 division in school as A,B,C,D.
Exam of Division A at 7AM, B at 8 : 30 AM, c at 9:20 AM and D at 10:30 AM
(Application should be case insensitive)

Input: C
Output: Your exam at 9:20AM

Input: d
Output: Your exam at 10:30AM

*/

#include<stdio.h>
#include<stdlib.h>

void DisplaySchedule(char chDiv)
{
    if((chDiv == 'A') || (chDiv == 'a'))
    {
        printf("Your exam at 7 AM");
    }

    else if((chDiv == 'B') || (chDiv == 'b'))
    {
        printf("Your exam at 8:30 AM");
    }
    
    else if((chDiv == 'C') || (chDiv == 'c'))
    {
        printf("Your exam at 9:20 AM");
    }

    else if((chDiv == 'D') || (chDiv == 'd'))
    {
        printf("Your exam at 10:30 AM");
    }

    else
    {
        printf("There is no any division");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter Your Division : ");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return EXIT_SUCCESS;
}