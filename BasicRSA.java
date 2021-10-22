
import java.math.BigInteger;
import java.util.Scanner;

public class BasicRSA{

    static int gcd(int a, int b)
    {   /*Returns Greatest common divisor of 2 numbers
         *implementing Euclidean ALgorithm */

        if (a == 0) return b;
        else return gcd(b % a, a);
    }

    static int modInv(int a, int b)
    {   /*Returns modular inverse of a mod b
        *implementing Extended Euclidean ALgorithm*/
        return modInv(a,b,b,0,1);
    }
 
    static int modInv(int a,int b,int c,int x,int y)
    {   //over-loading

         if(b%a==0) return y;
         else return modInv(b%a,a,c,y,c+(x-(b/a)*y)%c ); 
    }

    public static void main(String args[]){
        
        Scanner sc= new Scanner(System.in);
        System.out.println("You are required to enter 2 prime numbers followed by the message you want to encrypt");
        
        System.out.println("Enter first prime :");
        int p= sc.nextInt();
        
        System.out.println("Enter Second prime:");
        int q=sc.nextInt();
        
        System.out.println("Enter a num to encrypt:");
        int m=sc.nextInt(); 
        //Plaintext: message to be encrypted
        
        sc.close();

        int n=p*q;
        int z=(p-1)*(q-1)/gcd(p-1,q-1);
        int e,d=0; // e is for public key exponent, d is for private key exponent

        for (e = 2; e < z; e++) {
            if (gcd(e, z) == 1) {
                break;
            }
        }

        d=modInv(e,z);

        BigInteger M= BigInteger.valueOf(m);
        BigInteger E= BigInteger.valueOf(e);
        BigInteger N= BigInteger.valueOf(n);
        BigInteger D= BigInteger.valueOf(d);
        BigInteger C= M.modPow(E,N);
        BigInteger M2= C.modPow(D,N);
       
        
                
        System.out.println("Public Key Pair : " + e + " " + n );
        System.out.println("Private Key Pair : " + d + " " + n );
        System.out.println("Encrypted num : "+ C);                 
        System.out.println("Decrypted num : "+ M2);
        System.out.println("This is deciphered using Private key");
    }
}
