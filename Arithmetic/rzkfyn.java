/*
Contoh penggunaan Operator Aritmatika Pada Java
*/
import java.util.Scanner;

public class rzkfyn{
    public static void main(String[]args){
        
        Scanner input = new Scanner(System.in);
        
        int angka1, angka2, hasil;
        
        //penjumlahan
        System.out.println("Penjumlahan");
        System.out.print("Masukan angka pertama : ");
        angka1 = input.nextInt();
        System.out.print("Masukan angka kedua   : ");
        angka2 = input.nextInt();
        hasil = angka1 + angka2;
        System.out.println("Hasil = "+ hasil);
        System.out.println();
      
        //pengurangan
        System.out.println("Pengurangan");
        System.out.print("Masukan angka pertama : ");
        angka1 = input.nextInt();
        System.out.print("Masukan angka kedua   : ");
        angka2 = input.nextInt();
        hasil = angka1 - angka2;
        System.out.println("Hasil = "+ hasil);
        System.out.println();
      
        //perkalian
        System.out.println("Perkalian");
        System.out.print("Masukan angka pertama : ");
        angka1 = input.nextInt();
        System.out.print("Masukan angka kedua   : ");
        angka2 = input.nextInt();
        hasil = angka1 * angka2;
        System.out.println("Hasil = "+ hasil);
        System.out.println();
      
        //pembagian
        System.out.println("Pembagian");
        System.out.print("Masukan angka pertama : ");
        angka1 = input.nextInt();
        System.out.print("Masukan angka kedua   : ");
        angka2 = input.nextInt();
        hasil = angka1 / angka2;
        System.out.println("Hasil = "+ hasil);
        System.out.println();
      
        //sisa bagi
        System.out.println("Sisa bagi");
        System.out.print("Masukan angka pertama : ");
        angka1 = input.nextInt();
        System.out.print("Masukan angka kedua   : ");
        angka2 = input.nextInt();
        hasil = angka1 % angka2;
        System.out.println("Hasil = "+ hasil);
    }
}

/*
contoh output :
Penjumlahan
Masukan angka pertama : 10
Masukan angka kedua   : 5
Hasil = 15
Pengurangan
Masukan angka pertama : 15
Masukan angka kedua   : 5
Hasil = 10
Perkalian
Masukan angka pertama : 20
Masukan angka kedua   : 5
Hasil = 100
Pembagian
Masukan angka pertama : 40
Masukan angka kedua   : 5
Hasil = 8
Sisa bagi
Masukan angka pertama : 15
Masukan angka kedua   : 2
Hasil = 1
/*
