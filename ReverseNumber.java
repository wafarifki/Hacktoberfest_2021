//Reverse number using both for loop as-well-as recursive call
//Vinayak Mali

import java.util.Scanner;

public class ReverseNumber {

    public static int Reverse(int n, int reverse){
        if(n<10){
            return reverse*10 + n;
        }
        int temp;
        temp = n%10;
        reverse = reverse*10 + temp;
        n=n/10;
        return Reverse(n,reverse);
    }

    public static void main(String[] args) {
        int number,reverse=0,temp,remainder;
        Scanner input = new Scanner(System.in);
        System.out.print("\nEnter the number to Reverse the number : ");
        number = input.nextInt();

        //Using Loop
        temp = number;
        while(temp!=0){
            remainder = temp%10;
            reverse = (reverse*10) + remainder;
            temp = temp/10;
        }
        System.out.println("Reverse Number using loop is "+reverse+"\n------------------");

        //Using Recursion
        reverse = Reverse(number,0);
        System.out.println("Reverse Number using Recursion is "+reverse+"\n------------------");
    }
}
