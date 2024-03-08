import java.util.*;

class Addition
{
    public static void main(String Args[])
    {
        Scanner Sobj = new Scanner(System.in);

        System.out.println("Enter the 1st Number:");
        int No1 = Sobj.nextInt();

        System.out.println("Enter the 2nd number:");
        int No2 = Sobj.nextInt();

        int Ans = 0;

        Ans = No1 + No2;

        System.out.println("Addition of:"+Ans);
        Sobj.close();

    }
}






