import java.io.*;

class DeleteFile
{
    public static void main(String Agrs[]) 
    {
        try
        {
           File fobj = new File("PPA.txt");
           fobj.delete();
        }
        catch(Exception obj)
        {
            System.out.println(obj);
        }
    }
}