import java.util.*;
public class Main
{  
   static int n1=0,n2=1,n3=0;   
   //Prints Fibonacci Series using Recursion 
   static void printFibonacci(int n)
   {    
        if(n>0)
        {    
            n3 = n1 + n2;    
            System.out.print(" "+n3);   
            n1 = n2;    
            n2 = n3;    
            printFibonacci(n-1);   
        }    
   }    
    public static void main(String args[])
    {    
        //Take input from the user
        //Create instance of the Scanner class
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the number of terms: ");
        int n=sc.nextInt();   //Declare and Initialize the number of terms
        System.out.print("Fibonacci Series up to "+n+" terms: ");
        System.out.print(n1+" "+n2);//printing 0 and 1    
        printFibonacci(n-2);
    }  
}  
