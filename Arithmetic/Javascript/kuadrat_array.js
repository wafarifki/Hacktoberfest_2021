const array = [];

let nilai = 10;
while (nilai > 0) {
  array.push(nilai);
  nilai--;
}

console.log("Hasil array yang diisi " + array);

console.log(
  "Hasil setelah isi array di kuadratkan " +
    array.map((value) => Math.pow(2, value))
);
