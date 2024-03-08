
public class Multi2 
{
    public static void main(String ARG[])
    {
        System.out.println("Inside main Thread....");
        
        Demo obj1 = new Demo();
        Thread t1 = new Thread();

        Demo obj2 = new Demo();
        Thread t2 = new Thread();

        t1.start();
        t2.start();

    }
    
}

class Demo implements Runnable
{
    public void run()
    {
        System.out.println("Thread is running....");
    }
    
}