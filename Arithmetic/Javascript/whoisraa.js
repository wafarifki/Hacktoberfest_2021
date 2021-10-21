//membuat deret fibonacci
const angka = parseInt(prompt('Masukkan angka : '));
let angka_pertama = 0; 
let angka_kedua = 1;
let angka_lanjut;

console.log(angka_pertama); 
console.log(angka_kedua); 

angka_lanjut = angka_pertama + angka_kedua;

while (angka_lanjut <= angka) {
    console.log(angka_lanjut);

    angka_pertama = angka_kedua;
    angka_kedua = angka_lanjut;
    angka_lanjut = angka_pertama + angka_kedua;
}
