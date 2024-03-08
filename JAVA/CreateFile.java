import java.io.*;

class CreateFile
{
    public static void main(String Agrs[]) 
    {
        try
        {
        File fobj = new File("PPA.txt");
        fobj.createNewFile();
        }
        catch(Exception obj)
        {
            System.out.println(obj);
        }
    }
}