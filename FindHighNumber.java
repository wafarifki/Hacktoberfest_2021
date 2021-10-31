import java.util.Scanner;

public class FindHighNumber {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int fikri[][] = new int[3][5];
        System.out.println(" ====== INPUT MATRIKS VALUE======\n");
        for (int i = 0; i < fikri.length; i++) {
            for (int j = 0; j < fikri[0].length; j++) {
                System.out.print("Input value to [" + i + "] [" + j + "] :");
                fikri[i][j] = input.nextInt();
            }
        }

        System.out.println("\n ======= MATRIKS VIEW =======");
        for (int i = 0; i < fikri.length; i++) {
            for (int j = 0; j < fikri[0].length; j++) {
                System.out.println("[" + i + "] [" + j + "] : " + fikri[i][j]);
            }
        }
        System.out.println(" ");
        System.out.println(" ");
    
        //High Line //
        for (int i = 0; i < fikri.length; i++) {
            int high = 0;
            for (int j = 0; j < fikri[0].length; j++) {
                if (fikri[i][j] > high) {
                    high = fikri[i][j];
                }
            }
            System.out.println("High number in line  [" + i + "] = " + high);
        }
        System.out.println(" ");
        System.out.println(" ");
        //High Coulum //
        for (int i = 0; i < fikri[0].length; i++) {
            int high = 0;
            for (int j = 0; j < fikri.length; j++) {
                 if (fikri[j][i]>high){
                 high = fikri[j][i];}
            }
            System.out.println("Lower number in coulum  [" + i + "] = " + high);
        }

    }
}
// Code By IzamulFikri
