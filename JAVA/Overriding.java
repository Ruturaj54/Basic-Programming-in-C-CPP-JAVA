class Overriding 
{
    public static void main(String Args[])
    {
        Base bobj = new Derived();//Upcasting;
        //Base bobj = new Base();//No casting
        //Derived dobj = new Derived();//no casting
        //Derived dobj = new Base();//downcasting (not allowed)
        
        bobj.fun();//derived fun
        bobj.sun();//Derived sun
        bobj.gun();//Base gun
        bobj.run();//Base run
        //bobj.run(10);//Derived run
        bobj.mun();//undefined in base
    }
}

class Base
{

    public void fun()//1000
    {
        System.out.println("Inside base fun");
    }
    public void gun()//2000
    {
        System.out.println("Inside base gun");
    }
    public void sun()//3000
    {
        System.out.println("Inside base sun");
    }
    public void run()//4000
    {
        System.out.println("Inside base run");
    }

}

class Derived extends Base
{
    public void fun()//5000
    {
        System.out.println("Inside derived  fun");
    }
    public void sun()//6000
    {
        System.out.println("Inside derived  sun");
    }
    public void run(int A)//7000
    {
        System.out.println("Inside Derived run with one parameter");
    }
    public void mun()//8000
    {
        System.out.println("Inside Derived mun");
    }
}