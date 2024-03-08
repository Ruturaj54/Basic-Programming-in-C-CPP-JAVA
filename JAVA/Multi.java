import java.util.*;


class Multilevel
{
    public static void main(String Arguments[])
    {
        System.out.println("Inside main function");
    
        Derivedx dobj = new Derivedx();
        dobj.fun();
        dobj.gun();
    }
}

class Base
{
    public int A,B;
    public Base()
    {
        System.out.println("Inside Base class Constructor:");
    }
    public void fun()
    {
        System.out.println("Base fun");
    }

}
class Derived extends Base
{
    public int X,Y;

    public Derived()
    {
        System.out.println("Inside Derived class Constructor:");
    }
    public void gun()
    {
        System.out.println("Inside gun method derived");
    }
}
class Derivedx extends Derived
{
    public int p,Q;
    public Derivedx()
    {
        System.out.println("DerivedX constructor");
    }
}