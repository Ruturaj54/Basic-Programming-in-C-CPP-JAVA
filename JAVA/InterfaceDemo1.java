
class InterfaceDemo1
{

    public static void main(String Args[])
    {
        PPA pobj = new PPA();
        System.out.println("Value of PI is:"+Circle.PI);
        //Circle.PI = 6.15; Cannot assign a value to the final variable
        float fRet = 0.0f;
        fRet = pobj.Area(10.7f);
        System.out.println("Area is:"+fRet);
        fRet = pobj.Circumferance(10.7f);
        System.out.println("Circumference is :"+fRet);
    }
}

interface Circle   //All the default functions are public 
{
    float PI = 3.14f; //public,static,final

    public float Area(float Radius);
    public float Circumferance(float Radius);
}

class PPA implements Circle
{
    public float Area(float Radius)
    {
        return PI * Radius * Radius;
    }
    public float Circumferance(float Radius)
    {
        return 2 * PI * Radius;
    }
}