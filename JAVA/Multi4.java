class Multi4 
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

       }
       System.out.println("End of thread");
    }
}