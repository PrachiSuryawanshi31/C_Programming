//8998
//7007
//14341

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


bool CheckPalindrome(int iNo)
{
    int iDigit = 0;
    int iRev= 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;    

        iRev = (iRev * 10) + iDigit;
        
        iNo = iNo / 10;
    }
    
    if(iRev == iNo)         //issue  due to after while iNo become 0 then it compare iNo = 0 to iRev
    {
        return true;
    }

    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = 0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

   bRet = CheckPalindrome(iValue);

   if(bRet == true)
   {
        printf("Number is Palindrome \n");
   }

   else
   {
        printf("Number is not Palindrome\n");
   }

    return EXIT_SUCCESS;
}