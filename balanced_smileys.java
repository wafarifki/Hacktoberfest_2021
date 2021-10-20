import java.util.Scanner;

public class coba2 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        in.nextLine();
        for (int i = 0; i < n; i++) {
            String input = in.nextLine();
            System.out.print("Case #" + (i + 1) + ": ");
            if (isBalance(input)) {
                System.out.print("YES");
            } else {
                System.out.print("NO");
            }
            System.out.println();
        }
    }

    static boolean isBalance(String input) {
        int maxKurBuka = 0;
        int minKurBuka = 0;
        for (int i = 0; i < input.length(); i++) {
            char x = input.charAt(i);
            if (x == '(') {
                maxKurBuka++;
                if (i == 0) {
                    minKurBuka++;
                }else if (input.charAt(i - 1) != ':') {
                    minKurBuka++;
                }
            }
            if (x == ')') {
                minKurBuka--;
                if (minKurBuka < 0) {
                    minKurBuka = 0;
                }
                if (i == 0) {
                    return false;
                }
                else if (input.charAt(i - 1) != ':') {
                    maxKurBuka--;
                    if (maxKurBuka < 0) {
                        return false;
                    }
                }
            }
        }
        if (minKurBuka == 0) {
            return true;
        }
        return false;
    }
}
