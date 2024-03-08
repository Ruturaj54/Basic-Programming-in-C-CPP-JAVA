public class FinalizeDemo3
{
    public static void main(String Args[])
    {
        Employee eobj = new Employee("Amit",780000,19,"Near Karveroad pune");
        eobj.Display();
        String str = "Marvellous";
        str.getClass();
        System.out.println(eobj.getClass());
        System.out.println(str.getClass());
        
    }
}
class Employee
{
    public String Name;
    public int Salary;
    public int Age;
    public String Address;

    Employee(String str,int amount,int A,String addr)
    {
        this.Name = str;
        this.Salary = amount;
        this.Age = A;
        this.Address = addr;
    }
    protected void finalized()
    {
        System.out.println("Inside Finalize method....");
    }

    void Display()
    {
        System.out.println("Employee name : "+this.Name);
        System.out.println("Employee Age : "+this.Age);
        System.out.println("Employee Salary : "+this.Salary);
        System.out.println("Employee Address : "+this.Address);
    }
}


