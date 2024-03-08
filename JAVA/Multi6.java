class Multi6 
{
    public static void main(String Args[]) throws Exception
    {
        Demo obj1 = new Demo(); //New state
        Demo obj2 = new Demo(); //New state

        obj1.start();  //Runnable State
        obj2.start();  //Runnable State

       System.out.println("Priority of obj1 is : "+obj1.getPriority());
       System.out.println("Priority of obj2 is : "+obj2.getPriority());

       obj1.setPriority(8);
       obj2.setPriority(10);
       System.out.println("Priority of obj1 is : "+obj1.getPriority());
       System.out.println("Priority of obj2 is : "+obj2.getPriority());

    }

}

class Demo extends Thread
{
    public void run()  //Running State
    {
       
    }
    synchronized public void Display() //if multiple threads call this display function then t1 thread will be first get display then t2,t3,t4
    {
        //Logic
    }
}

//MIN_PRIORITY   1
//NORM_PRIORITY  5
//MAX_PRIORTY    10