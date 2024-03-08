import java.util.*;

class Collectionsstack
{
    public static void main(String ARG[])
    {
        Stack<Character> sobj = new Stack<Character>();

        sobj.push('A');
        sobj.push('B');
        sobj.push('C');
        sobj.push('D');

        System.out.println(sobj.pop());
        System.out.println(sobj.pop());

        System.out.println("After 2 pops");
        System.out.println(sobj);

    }
}
