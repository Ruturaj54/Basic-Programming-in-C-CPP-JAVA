import java.io.*;

class WriteFile
{
    public static void main(String Agrs[]) 
    {
        try
        {
            String Data = "Marvellous Infosystems";
            byte Arr[] = Data.getBytes();

            FileOutputStream fobj = new FileOutputStream("PPA.txt");
            fobj.write(Arr);
            fobj.close();
        }
        catch(Exception obj)
        {
            System.out.println(obj);
        }
    }
}