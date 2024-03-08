
class AbstractDemo
{
    public static void main (String Arg[])
    {
        System.out.println("OM Namah Shivay...");

        //Demo obj = new Demo(); Error Demo is abstract; cannot be instantiated
    }
}

abstract class Demo
{
    public int A;
    public int B;

    public Demo()
    {
        System.out.println("Inside Constructor");
        this.A = 0;
        this.B = 0;
    }

    abstract void fun();    //virtual void fun() = 0;

    void gun()
    {
        System.out.println("Inside gun");
    }

}