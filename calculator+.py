def tambah(a, b):
   return a + b

print("Kalkulator penjumlahan")

pilih = input("Tulis [ y ] untuk menghidupkan: ")

pil1 = int(input("Masukkan bilangan pertama: "))
pil2 = int(input("Masukkan bilangan kedua: "))

if pilih == 'y':
   print(pil1,"+",pil2,"=", tambah(pil1,pil2))
  
else:
   print("Input salah")
   
   