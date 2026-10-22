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
        Accept Second number as No2.
        Create a Variable as Ans to store result
        Perform the Addition and store into Ans
        display the result from Ans
    End
*/
//////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////
//
// Step 3 : Decide the programming language
//          we select C Programming
//
//////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////
//
//Step 4: Write a Program
//
//////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////
//
// Function Name : Addition
// Input         : Integer , Integer
// Output        : Integer
// Description   : Performs Addition
// Date          : 4/10/2026 
// Author        : Prachi Dhanaraj Suryawanshi 
//
//////////////////////////////////////////////////////////

int Addition(int iNo1 , int iNo2)
{
    int iAns = 0;
    
    iAns = iNo1 + iNo2;     //Business  logic

    return iAns;
}

//////////////////////////////////////////////////////////
//
//Entry point of the application
//
//////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0 , iResult = 0;

    printf("Enter First Number: \n");
    scanf("%d",&iValue1);

    printf("Enter Second Number : \n");
    scanf("%d",&iValue2);

    iResult = Addition(iValue1, iValue2);        

    printf("Addition is : %d \n",iResult);

    return 0;
}

//////////////////////////////////////////////////////////
//
// Step 5: Test the program 
// 
//      Tested test cases
//
//      Input1      Input2      Output
//-------------------------------------------
//      10          11          21
//      11          0           11
//      0           11          11
//      20          -9          11
//      -9          20          11
//      -20         -11         -31
//--------------------------------------------
//////////////////////////////////////////////////////////