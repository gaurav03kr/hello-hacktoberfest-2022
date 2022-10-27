import java.util.Scanner;

class UserInput
{
public static void main(string [] args)
{
Scanner obj = new Scanner(System.in);
 String firstname, lastname;
 int age;
 System.out.println("Enter your first name");
 firstname = obj.nextLine();
 System.out.println("Enter your last name");
 lastname = obj.nextLine();
 System.out.println("Enter your age");
 age = obj.nextInt();
 System.out.println("First Name is : " + firstname);
 System.out.println("Last Name is : " + lastname); 
 System.out.println("Age is : " + age);
}
}
