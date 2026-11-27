import java.util.Scanner;

class program345
{
    public static int Summation(int Arr[])
    {
        int iSum = 0, iCnt = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }

        return iSum;
    }

    public static void main(String A[])
    {   
        int iCnt = 0, iSize = 0, iRet = 0;
        int ptr[] = null; 

        Scanner scanner = null;

        scanner = new scanner(System.in);

        System.out.println("Enter the number of elements: \n");
        iSize =scanner.nextInt();
        
        
        //Allocate the Memory
        ptr = new int[iSize];

        
        //Step 2 :Use the Memory
        System.out.println("Enter the Elements: ");

        for(iCnt = 0; iCnt < ptr.length; iCnt++)
        {
            ptr[iCnt]=scanner.nextInt();
        }

        System.out.println("Elements of an array are: ");
        
        for(iCnt = 0; iCnt < ptr.length; iCnt++)
        {
            System.out.println(ptr[iCnt]);
        }

        iRet = Summation(ptr);

        System.out.println("Summation is : "+iRet);
        
        //Step 3: deallocate the memory
        scanner = null;
        ptr = null;

        System.gc();
    }
}