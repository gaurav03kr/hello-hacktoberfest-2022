import java.util.*;
class bubblesort
{     int A[];int n;
     public bubblesort(int nn)
     {    n=nn;
         A=new int[n];
     }// contructor to initialize data members
 
 
    public void input()
    {  
      Scanner sc=new Scanner(System.in);
      System.out.println("Enter the elements of the array");
      for(int i=0;i<n;i++)
         A[i]=sc.nextInt();
    } // inputting size of the Array and the elements of the Array.
   
 
 
 public void sort()
   {
     for(int i=0;i<n;i++)
     {
        for(int j=0;j<n-1-i;j++)
        {
          if(A[j]>A[j+1])
          {
              int t=A[j];
              A[j]=A[j+1];
              A[j+1]=t;
          }
        }
     }
   }//sorting the array using bubble sort technique
 
 
 public void display()
 {   sort();
   for(int i=0;i<n;i++)
      System.out.print(A[i]+" ");
 }//Displaying the elements of the Array
 
 
 public static void main(String args[])
 {  System.out.println("Enter the size of the array");
     Scanner sc=new Scanner(System.in);
      int n=sc.nextInt();
    bubblesort ob=new bubblesort(n);
      ob.input();
      ob.display();
 }//main function
}//class closed
     
      
      
      
 
       
  
