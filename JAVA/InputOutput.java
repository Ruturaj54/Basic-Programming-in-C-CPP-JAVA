import java.util.*;

class InputOutput
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the 1st number:");
        int No1 = sobj.nextInt();

        System.out.println("Enter the 2nd NUmber:");
        int No2 = sobj.nextInt();

        int Ans = 0;
        
        Ans = No1 + No2;

        System.out.println("Addition is:"+Ans);
        sobj.close();

    }
}

/*
    Datatypes to accept        Method of Scanner class

    boolean                       nextBoolean()
    byte                          nextByte()
    int                           nextInt()
    float                         nextFloat()
    double                        nextDouble()
    long                          nextLong
    short                         nextShort()
    String                        nextLine()

*/