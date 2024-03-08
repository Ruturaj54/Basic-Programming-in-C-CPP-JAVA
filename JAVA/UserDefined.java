import java.util.*;

public class UserDefined 
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter your age:");
        int iAge = sobj.nextInt();
        try
        {
            if(iAge < 18)
            {
                //AgeInvalid aobj = newAgeInvalid("Your age is below 18");
                //throw aobj;
                throw new AgeInvalid("Your Age is below 18");
            }
            else
            {
                System.out.println("Login Sucessful..");
            }
        }
        catch(AgeInvalid obj)
        {
            System.out.println("Inside catch block");
            System.out.println(obj);
        }

    }
    
}

class AgeInvalid extends Exception
{
    public AgeInvalid(String str)
    {
        super(str);  //super is used to acces the parent class data
        //
    }
}
