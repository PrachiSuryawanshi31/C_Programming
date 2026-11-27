import java.util.Scanner;

class program342
{
    public static void main(String A[])
    {
        //int Arr[5] = {0};       //Not Allowed
        
        int Arr[] = new int [5];
        int iCnt = 0;

        Scanner scanner = new Scanner(System.in);
        
        System.out.println("Enter the Elements: ");

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt]=scanner.nextInt();
        }

        System.out.println("Elements of an array are: ");
        
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
    }
}