import java.util.*;

class Collectionshash
{
    public static void main(String ARG[])
    {
        Hashtable<String,Integer>hobj = new Hashtable<String,Integer>();

        hobj.put("PPA",18500);
        hobj.put("LB",18700);
        hobj.put("Angular",19500);
        hobj.put("Python",20000);

        System.out.println(hobj.get("PPA"));
        Enumeration<String> eobj = hobj.keys();
        while(eobj.hasMoreElements())
        {
            System.out.println(eobj.nextElement());
        }

    }
}
