import java.util.Scanner;

class program346
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

    public static float Average(int Arr[])
    {
        int iSum = 0, iCnt = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }

        return ((float)iSum / (float)Arr.length);
    }

    public static void main(String A[])
    {   
        int iCnt = 0, iSize = 0, iRet = 0;
        int ptr[] = null; 
        float fRet = 0.0f;

        Scanner scanner = null;

        scanner = new Scanner(System.in);

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

        fRet = Average(ptr);
        System.out.println("Average is : "+fRet);
        
        //Step 3: deallocate the memory
        scanner = null;
        ptr = null;

        System.gc();
    }
}