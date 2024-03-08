//Problem statement :8.Write a java program which accepts N numbers from user and store it into Array and 
//display the average of all the numbers from array.

import java.util.*;


class Assignment25_9
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);
        Scanner sobj1 = new Scanner(System.in);

        System.out.println("Enter the Number of Array elements You want to store : ");
        int No = sobj.nextInt();

        int Arr[] = new int[No]; 
        int Sum = 0;

        System.out.print("Enter the "+No);
        System.out.print(" Array Elements : \n");

        for(int i = 1,iCnt = 0;iCnt < No;iCnt++,i++)
        {
             System.out.print("Enter the "+i+" Element : ");
            Arr[iCnt] = sobj1.nextInt();
            
            Sum = Sum + Arr[iCnt];   
        }

        System.out.println("Your Entered Array Elements are : ");
        
        for(int iCnt = 0;iCnt < No;iCnt++)
        {
            System.out.print(Arr[iCnt]);
            System.out.print("\t");

        } System.out.println();

        float Avg = (Sum/No);

        System.out.println("Average of Array Element is : "+Avg);
        sobj.close();
        sobj1.close();
    }
    
}
