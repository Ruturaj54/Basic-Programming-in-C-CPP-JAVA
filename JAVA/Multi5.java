class Multi5 
{
    public static void main(String Args[]) throws Exception
    {
        Demo obj1 = new Demo(); //New state
        obj1.start();  //Runnable State
        obj1.join();

        System.out.println("End of main thread");
    }

}

class Demo extends Thread
{
    public void run()  //Running State
    {
       for(int i = 1; i < 100;i++)
       {
        try
        {
            System.out.println("Value of i :"+i);
            Thread.sleep(5000);
        }
        catch(Exception obj)
        {

        }

       }
       System.out.println("End of thread");
    }
}