//Problem statement :10. Write a java program which creates Jagged array. Number of rows and size of each 
//row should be accepted from user?

import java.util.*;


class Assignment25_10
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);
        Scanner sobj1 = new Scanner(System.in);
         Scanner sobj2 = new Scanner(System.in);

        System.out.println("Enter the Number of Rows You want in Array : ");
        int iRow = sobj.nextInt();

        int Arr[][] = new int[iRow][]; 

        
        for(int i = 1,iCnt = 0;iCnt < iRow; iCnt++,i++)
        {
            System.out.println("Enter the length of Row "+i+" : ");
            int RowLen = sobj1.nextInt();

            Arr[iCnt] = new int[RowLen];
            System.out.println("Enter the Elements of Row : ");
            for(int jCnt = 0;jCnt < RowLen;jCnt++)
            {
                Arr[iCnt][jCnt] = sobj2.nextInt();
            }

        }

        System.out.println("Your Entered Array Elements are : ");
        
        for(int i = 0;i < Arr.length;i++)
        {
            for(int j = 0;j < Arr[i].length;j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
        
        sobj.close();
        sobj1.close();
        sobj2.close();
    }
    
}
