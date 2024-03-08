
class Final3
{
    public static void main(String Args[])
    {
        
    }
}

class Demo
{
    public void fun()
    {


    }
    public final void gun()  //final method
    {

    }
}

class Hello extends Demo
{
    public void fun()
    {

    }
    public void gun() //Error we cant override the final method 
    {

    }
}

/*
class Hello extends Demo   //Error because the final class cant be inherited
{

}
*/