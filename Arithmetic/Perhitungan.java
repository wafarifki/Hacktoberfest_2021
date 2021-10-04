public class perhitungan {
    int nilai;
    void hitung(){
        nilai = 5+5;
        System.out.println("Hasil = " + nilai);
    }
    public static void main(String[] args) {
        perhitungan objek = new perhitungan();
        objek.hitung();
    }    
}