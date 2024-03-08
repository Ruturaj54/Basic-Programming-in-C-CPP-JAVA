import java.util.*;

class OOP
{
    public static void main(String Args[])
    {
        int No1 = 0,No2 = 0,Ans = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("enter the 1st number:");
        No1 = sobj.nextInt();

        System.out.println("Enter the 2nd Number:");
        No2 = sobj.nextInt();

        Arithmetic aobj = new Arithmetic(No1,No2);

        Ans = aobj.Addition();

        System.out.println("Addition is:"+Ans);

        Ans = aobj.Substraction();

        System.out.println("Substraction is:"+Ans);
        sobj.close();

    }
}

class Arithmetic
{
    public int Value1;
    public int Value2;

    //Arithmetic aobj = new arithmetic(No1,No2);
    //Arithmetic aobj = new arithmetic(15,6);

    public Arithmetic(int A,int B)
    {
        this.Value1 = A;
        this.Value2 = B;
    }

    public int Addition()
    {
        int Result = 0;
        Result = this.Value1 + this.Value2;
        return Result;
    }
 
    public int Substraction()
    {
        int Result = 0;
        Result = this.Value1 - this.Value2;
        return Result;
    }


}