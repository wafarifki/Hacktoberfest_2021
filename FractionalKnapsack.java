import java.util.Arrays;

public class FractionalKnapsack {
    public static double fractionalKnapsack(int k, int[] w, int[] p) {
        double pt = 0;
//        k = kapasitas
//        w = berat
//        p = profit
        Barang[] barang = new Barang[w.length];
        for (int i = 0; i < w.length; i++) {
            barang[i] = new Barang(w[i], p[i], i);
        }

//        sort barang berdasarkan density terbesar terlebih dahulu
        Arrays.sort(barang, (a, b) -> Double.compare(b.d , a.d));

        for (int i = 0; i < barang.length; i++) {
            if (k - barang[i].w >= 0) {
                k -= barang[i].w;
                pt += barang[i].p;
//                uncomment untuk print jumlah barang
                System.out.println("1 (w: " + barang[i].w + ", p: " + barang[i].p + ")");
//
            } else {
                pt += (k / barang[i].w) * barang[i].p;
//                uncomment untuk print jumlah barang
                System.out.println((k / barang[i].w) + " (w: " + barang[i].w + ", p: " + barang[i].p + ")");
//
//                k = 0;
                break;
            }
        }
        return pt;
    }

    public static void main(String[] args) {
        int w[] = {1, 1, 2};
        int p[] = {1, 2, 3};
        System.out.println("Maksimum profit yang bisa didapat: " + fractionalKnapsack(2, w, p));
    }
}

class Barang {
    double w, p, d, id;
    public Barang(double w, double p, double id) {
        this.w = w;
        this.p = p;
        this.id = id;
        this.d = p / w;
    }
}
