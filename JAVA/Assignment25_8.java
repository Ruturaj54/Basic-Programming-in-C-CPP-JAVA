//Problem statement : 7.Write a java program which accepts N numbers from user and store it into Array and 
//display the largest number from that array

import java.util.*;


class Assignment25_8
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);
        Scanner sobj1 = new Scanner(System.in);

        System.out.println("Enter the Number of Array elements You want to store : ");
        int No = sobj.nextInt();

        int Arr[] = new int[No]; 
        int Largest = Arr[0];

        System.out.print("Enter the "+No);
        System.out.print(" Array Elements : \n");

        for(int i = 1,iCnt = 0;iCnt < No;iCnt++,i++)
        {
             System.out.print("Enter the "+i+" Element : ");
            Arr[iCnt] = sobj1.nextInt();
            if(Largest < Arr[iCnt])
            {
                Largest = Arr[iCnt];
            }
        }

        System.out.println("Your Entered Array Elements are : ");
        
        for(int iCnt = 0;iCnt < No;iCnt++)
        {
            System.out.print(Arr[iCnt]);
            System.out.print("\t");

        } System.out.println();

        System.out.println("Largest Array Element is : "+Largest);
        sobj.close();
        sobj1.close();
    }
    
}




