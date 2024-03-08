import Marvellous.Maths;
import Marvellous.Infosystems.Arithmetic;

class PackageDemo
{
    public static void main(String Args[])
    {
        Maths mobj = new Maths();
        int iRet = 0;
        iRet = mobj.Addition(10,11);
        System.out.println("Addition is:"+iRet);
    }
}