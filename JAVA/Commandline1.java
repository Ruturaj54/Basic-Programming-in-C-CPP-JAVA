class Commandline 
{
    public static void main(String arg[])
    {
        System.out.println("Number of command line arguments are : "+arg.length);

        int no1 = Integer.parseInt(arg[0]);
        int no2 = Integer.parseInt(arg[1]);

        int Ans = no1 + no2;

        System.out.println(Ans);
    }
    
}


//javac Commandline.java
//java Commandline PPA Python Java Marvellous