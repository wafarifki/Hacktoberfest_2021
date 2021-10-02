
void main() {
   print(tambah(10,10));
   // output: 20

   print(kali(10,10));
   // output: 100
   
   print(kurang(10,5));
   // output: 5
   
   print(bagi(10, 2));
   // output: 5

}

int tambah(int angka1, int angka2) {
   return angka1 + angka2;
}

int kali(int angka1, int angka2) {
   return angka1 * angka2;
}

int kurang(int angka1, int angka2) {
   return angka1 - angka2;
}

double bagi(double angka1, double angka2) {
   return angka1 / angka2;
}
