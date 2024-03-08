//Write a java program which accept one word from user through command line and 
//display length of that word.

import java.util.*;

class Assignment26_8
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the word here : ");
        String Str1 = sobj.nextLine();

        System.out.println("Length of the Word "+Str1+" is : "+Str1.length());

        sobj.close();
    }
    
}
