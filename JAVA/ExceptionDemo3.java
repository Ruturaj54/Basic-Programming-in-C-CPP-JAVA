import java.util.*;


public class ExceptionDemo3
{
    public static void main(String Args[])
    {  
        Demo dobj = new Demo();
        try
        {
            System.out.println("Inside try block");
            dobj.Division();
        }
        catch(ArithmeticException obj)
        {
            System.out.println("Inside catch");
        }
        finally
        {
            System.out.println("Inside Finally block");
        }
    }
    
    
}

class Demo
{
    public void Division() throws ArithmeticException     //kutra pasun savdhan i.e exception yevu shakta
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the first number:");
        int iNo1 = sobj.nextInt();

        System.out.println("Enter the second number:");
        int iNo2 = sobj.nextInt();

        int iAns = 0;
        iAns = iNo1 / iNo2;
        System.out.println("Division is:"+iAns);

    }
}