// Write a java program which accept N words from user through command line and 
//display length of largest word.

import java.util.Scanner;

class Assignment26_9
{
    public static void main(String args[]) {
       Scanner sobj = new Scanner(System.in);
       System.out.println("Enter a word here :");
       String str = sobj.nextLine();
       
       str += " "; 
       String word = "", lWord = "";
       int len = str.length();
       
       for (int i = 0; i < len; i++) {
           char ch = str.charAt(i);
           if (ch == ' ') {
               
                if (word.length() > lWord.length())
                    lWord = word;
                    
                word = "";
           }
           else {
               word += ch;
           }
       }
       
       System.out.println("The longest word: " + lWord +
        ": The length of the word: " + lWord.length());
        sobj.close();
    }
    
}