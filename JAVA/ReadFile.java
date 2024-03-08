import java.io.*;

class ReadFile
{
    public static void main(String Agrs[]) 
    {
        try
        {
           FileInputStream fobj = new FileInputStream("PPA.txt");
           int i = 0;  //when data get over while reading it returns -1 so we use here integer

           while((i = fobj.read()) != -1)
           {
            System.out.print((char)i); //typecasting integre i into Char
           }
           System.out.println();
           fobj.close();
        }
        catch(Exception obj)
        {
            System.out.println(obj);
        }
       
    }
}