/*Check Voting Eligibility
Problem Statement : Accept the age of a person and determine whether the person is eligible to vote.
A person must be at least 18 years old to vote.A negative age should be considered invalid.

Excepted Output :
Input: 21 -> Eligible for voting
Input: 16 -> Not Eligible for voting
Input: -5 -> Invalid Age
*/

#include<stdio.h>
#include<stdlib.h>

void CheckVotingEligibility(int iAge)
{
    if(iAge > 18)
    {
        printf("Eligible for voting");
    }

    else if(iAge < 18)
    {
        printf("Not Eligible for voting");
    }

    else 
    {
        printf("Invalid Age");
    }
}

int main()
{
    int iAge = 0;

    printf("Enter your age:");
    scanf("%d", &iAge);

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}