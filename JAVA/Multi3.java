class Multi3 
{
    public static void main(String Args[])
    {
        
        Demo obj1 = new Demo(); //New state
        Demo obj2 = new Demo(); //New state

        obj1.start();  //Runnable State
        obj2.start();  //Runnable State

        obj1.setName("First_Thread");
        obj2.setName("Second_Thread");


        System.out.println("Thread goes to dead state"); //Dead State

    }
    

}

class Demo extends Thread
{

    public void run()  //Running State
    {
        String name = Thread.currentThread().getName();
        System.out.println("Current thread is:"+name);

        for(int i = 1; i < 100;i++)
        {
            System.out.println("Name of thread is:"+name+"with counter:"+i);
        }
        System.out.println("Current thread is :" +Thread.currentThread().getName());
    }
}