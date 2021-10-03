import java.util.Scanner;
import java.lang.Math;

class RadianToDegree {
    public static void main(String args[]) {
      Scanner input = new Scanner(System.in);
      System.out.println("Input Radian:");
      double rad = input.nextInt();
      System.out.println("Result:");
      System.out.println(Math.toDegrees(rad));

    }
}
