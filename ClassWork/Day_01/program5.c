/*
    Step 1 :  Understand the problem statement
    Step 2 :  Write the algorithm
    Step 3 :  Decide the programming language
    Step 4 :  Write a program 
    Step 5 :  Test the program
*/

/////////////////////////////////////////////////////////
//
// Step 1: Understand the problem statement
//         User id going to enter any 2 integers 
//         and we have to perfrom addition                      
//
//////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////
//
// Step 2: Write the alogrithm
/*
    START
        Accept first number as No1.
        Accept Second number as No1
        Create a Variable as Ans to store result
        Perform the Addition and store into Ans
        display the result from Ans
    End
*/
//////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////
//
// Step 3 : Decide the programming language
//          we sselect c Programming
//
//////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////
//
//Step 4: Write a Program
//
//////////////////////////////////////////////////////////

#include<stdio.h>


int main()
{
    int iValue1 = 0, iValue2 = 0 , iResult = 0;

    printf("Enter First Number: \n");
    scanf("%d",&iValue1);

    printf("Enter Second Number : \n");
    scanf("%d",&iValue2);

    iResult = iValue1 + iValue2;        //Business  logic

    printf("Addition is : %d \n",iResult);

    return 0;
}