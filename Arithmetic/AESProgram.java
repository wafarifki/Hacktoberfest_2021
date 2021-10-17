package aes;

import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.security.InvalidAlgorithmParameterException;
import java.security.InvalidKeyException;
import java.security.NoSuchAlgorithmException;
import java.security.spec.AlgorithmParameterSpec;
import javax.crypto.Cipher;
import javax.crypto.CipherInputStream;
import javax.crypto.CipherOutputStream;
import javax.crypto.KeyGenerator;
import javax.crypto.NoSuchPaddingException;
import javax.crypto.SecretKey;
import javax.crypto.spec.IvParameterSpec;

public class AESProgram {
    private static Cipher encrypt;
    private static Cipher decrypt;
    private static final byte[] initialization_vector = { 03, 43, 27, 17, 20, 4, 001, 23, 67, 23, 11, 34, 27, 19, 73,
            47 };
    String strChiperText = new String();

public static void main(String[] args) {
//choose the right path
String messageFile = "D……../message.txt";
String encryptedFile = "D………/encryptedMessage.txt";
String decryptedFile = "D:/@...../decryptedMessage.txt";
try {
SecretKey secret_key =
KeyGenerator.getInstance("AES").generateKey();
System.out.println(secret_key);
AlgorithmParameterSpec alogrithm_specs = new
IvParameterSpec(initialization_vector);
// set encryption mode ...
encrypt = Cipher.getInstance("AES/CBC/PKCS5Padding");
encrypt.init(Cipher.ENCRYPT_MODE, secret_key, alogrithm_specs);
// set decryption mode
decrypt = Cipher.getInstance("AES/CBC/PKCS5Padding");
decrypt.init(Cipher.DECRYPT_MODE, secret_key, alogrithm_specs);
// encrypt file
encrypt(new FileInputStream(messageFile), new 
FileOutputStream(encryptedFile));
// decrypt file
decrypt(new FileInputStream(encryptedFile), new FileOutputStream( 
decryptedFile));
System.out.println("End of Encryption/Decryption procedure!")
} catch (NoSuchAlgorithmException nsae){
nsae.printStackTrace();
}catch (NoSuchPaddingException nspe){
nspe.printStackTrace();
}catch(InvalidKeyException ike){
ike.printStackTrace();
}catch (InvalidAlgorithmParameterException iape){
iape.printStackTrace();
}catch (IOException ioe){
ioe.printStackTrace();
}
}

    private static void encrypt(InputStream input, OutputStream output) throws IOException {
        output = new CipherOutputStream(output, encrypt);
        writeBytes(input, output);
    }

    private static void decrypt(InputStream input, OutputStream output) throws IOException {
        input = new CipherInputStream(input, decrypt);
        writeBytes(input, output);
    }

    private static void writeBytes(InputStream input, OutputStream output) throws IOException {
        byte[] writeBuffer = new byte[512];
        int readBytes = 0;
        while ((readBytes = input.read(writeBuffer)) >= 0) {
            output.write(writeBuffer, 0, readBytes);
        }
        output.close();
        input.close();
    }
}