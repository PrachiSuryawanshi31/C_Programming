import java.util.Scanner;

class program343
{
    public static void main(String A[])
    {   
        int iCnt = 0, iSize = 0;
        int ptr[] = null;   // int *ptr = NULL;

        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter the number of elements: \n");
        iSize =scanner.nextInt();
        
        //ptr = (int *)malloc(sizeof(int)*iSize);  ->c
        //ptr = new int[iSize]; ->cpp
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

        //Step 3: deallocate the memory
    }
}