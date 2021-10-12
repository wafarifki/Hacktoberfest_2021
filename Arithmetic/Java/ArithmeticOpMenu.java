import java.util.InputMismatchException;
import java.util.Scanner;

public class ArithmeticOpMenu {

    static double lcm(int n1, int n2) {
        return (n1*n2)/ArithmeticOpMenu.gcd(n1,n2);
    }
    
    static double gcd(int n1, int n2) {
        if(n2 == 0)
            return (double)n1;
        return gcd(n2, n1 % n2);
    }
    
    static void displayMenu() {
        System.out.println("The program does (integer) operator (integer)");
        System.out.println("The valid operators are \n add : + \n subtract : - \n multiply : * \n divide : / \n remainder : % \n power : power \n lcm(a,b): lcm \n gcd(a,b): gcd \n bitwise and : & \n bitwise or : | \n bitwise xor : ^ \n left shift : << \n right shift : >> \n display menu : menu \n Exit : exit\n");
    }

    public static void main(String args[]) {
        Scanner scan = new Scanner(System.in);
        ArithmeticOpMenu.displayMenu();
        try {
            while(true) {
                int flag = 0;
                System.out.print("Please enter the operator: ");
                String operator = scan.next().toLowerCase();
                int n1 = 0, n2 = 0;
                double answer = 0;
                if(!(operator.equals("menu") || operator.equals("exit"))) {
                    flag = 1;
                    System.out.print("Enter the two integers: ");
                    n1 = scan.nextInt();
                    n2 = scan.nextInt();
                }
                switch(operator) {
                    case "+" : answer = n1 + n2; break;
                    case "-" : answer = n1 - n2; break;
                    case "*" : answer = n1*n2; break;
                    case "/" : answer = n1/n2; break;
                    case "%" : answer = n1%n2; break;
                    case "power" : answer = Math.pow(n1,n2); break;
                    case "lcm" : answer = ArithmeticOpMenu.lcm(n1, n2); break;
                    case "gcd" : answer = ArithmeticOpMenu.gcd(n1,n2); break;
                    case "&" : answer = n1 & n2; break;
                    case "|" : answer = n1 | n2; break;
                    case "^" : answer = n1 ^ n2; break;
                    case "<<" : answer = n1 << n2; break;
                    case ">>" : answer = n1 >> n2; break;
                    case "menu" : ArithmeticOpMenu.displayMenu(); break;
                    case "exit" : scan.close(); return ;
                    default : throw new InputMismatchException();
                }
                if(flag == 1) {
                    System.out.print(n1 + " " + operator + " " + n2 + " = ");
                    if(answer == (int) answer)
                        System.out.println((int)answer + "\n");
                    else
                        System.out.println(answer + "\n");
                    }
                }
        } catch(InputMismatchException e) {
            System.out.println("Invalid input");
        } catch(ArithmeticException e) {
            System.out.println("number/0: divided by zero: Error");
        }
    }
}