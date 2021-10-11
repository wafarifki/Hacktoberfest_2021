import java.util.InputMismatchException;
import java.util.Scanner;

public class File {

    static double lcm(int n1, int n2) {
        return (n1*n2)/File.gcd(n1,n2);
    }
    
    static double gcd(int n1, int n2) {
        if(n2 == 0)
            return (double)n1;
        return gcd(n2, n1 % n2);
    }
    
    static void displayMenu() {
        System.out.println("The program does (integer) operator (integer)");
        System.out.println("The valid operators are \n add : + \n subtract : - \n multiply : * \n divide : / \n remainder : % \n power : power \n lcm(a,b): lcm \n gcd(a,b): gcd \n bitwise and : & \n bitwise or : | \n bitwise xor : ^ \n left shift : << \n right shift : >> \n display menu : Menu \n Exit : exit \n");
    }

    public static void main(String args[]) {
        Scanner scan = new Scanner(System.in);
        File.displayMenu();
        try {
            while(true) {
                System.out.print("Enter two integers: ");
                int n1 = scan.nextInt();
                int n2 = scan.nextInt();
                System.out.println("Please enter the operator: ");
                String operator = scan.next();
                double answer = 0;
                switch(operator) {
                    case "+" : answer = n1 + n2; break;
                    case "-" : answer = n1 - n2; break;
                    case "*" : answer = n1*n2; break;
                    case "/" : answer = n1/n2; break;
                    case "%" : answer = n1%n2; break;
                    case "power" : answer = Math.pow(n1,n2); break;
                    case "lcm" : answer = File.lcm(n1, n2); break;
                    case "gcd" : answer = File.gcd(n1,n2); break;
                    case "&" : answer = n1 & n2; break;
                    case "|" : answer = n1 | n2; break;
                    case "^" : answer = n1 ^ n2; break;
                    case "<<" : answer = n1 << n2; break;
                    case ">>" : answer = n1 >> n2; break;
                    case "menu" : File.displayMenu(); break;
                    case "exit" : scan.close();return ;
                    default : File.displayMenu();
                }
                System.out.print(n1 + " " + operator + " " + n2 + " = ");
                if(answer == (int) answer)
                    System.out.println((int)answer);
                else
                    System.out.println(answer);
                }
        } catch(InputMismatchException e) {
            System.out.println("Invalid input");
        } catch(ArithmeticException e) {
            System.out.println("number/0: divided by zero: Error");
        }
    }
}