class Overloading
{
    public static void main(String Args[])
    {
        Arithmetic aobj = new Arithmetic();
        int iRet = 0;
        double dRet = 0.0;

        iRet = aobj.Addition(10,11);
        System.out.println("Addition is :"+iRet);

        iRet = aobj.Addition(10,11,30);
        System.out.println("Addition is :"+iRet);

        dRet = aobj.Addition(10.8,100.2);
        System.out.println("Addition is :"+dRet);
    }

}

class Arithmetic
{

    public int Addition(int A,int B)
    {
        return A+B;
    }
    public int Addition(int A,int B,int C)
    {
        return A+B+C;
    }
    public double Addition(double A,double B)
    {
        return A+B;
    }
}