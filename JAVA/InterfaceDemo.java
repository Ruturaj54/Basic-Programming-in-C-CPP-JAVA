
class InterfaceDemo
{

    public static void main(String Args[])
    {
        Marvellous mobj = new Marvellous();

        int iRet = 0;
        iRet = mobj.Addition(11,10);
        System.out.println("Additon is :"+iRet);
        iRet = mobj.Substraction(11,10);
        System.out.println("Substraction is:"+iRet);

    }
}

interface Mathematics
{
    public int Addition(int A, int B);
    public int Substraction(int A, int B);
}

class Marvellous implements Mathematics
{
    public int Addition (int A,int B)
    {
        return A+B;
    }
    public int Substraction(int A,int B)
    {
        return A-B;
    }
}