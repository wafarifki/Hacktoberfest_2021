# kalkulator perkalian dengan choose di python

import sys




print("\n=====================================")
print("1. Penjumlahan")
print("2. Perkalian")
print("3. Pembagaian")
print("3. Pengurangan")
print("\n=====================================")

def Perkalian(satu, dua):
    jumlah = satu * dua
    
    return print("Hasil perkalian dari "+str(satu)+" dan "+str(dua)+ " Adalah : "+str(jumlah))

def Pilih():
    pilihan = int(input("\nPilih operasi aritmatik diatas: "))
    return pilihan

if (Pilih() == int(2)): # Anda memilih operasi perkalian
    angkapertama = int(input("\nMasukan angka pertama: "))
    angkakedua = int(input("Masukan angka kedua: "))
    Perkalian(angkapertama, angkakedua )

else:
    print("\nOperasi yang dipilih masih tahap pengembangan")

    
    
'''
# cara penggunaan :
# python ArithmeticChoose_xcapri.py
# Output :

PS C:\Users\PC> & C:/Users/PC/AppData/Local/Programs/Python/Python38/python.exe "d:/hacktoberfest/ArithmeticChoose_xcapri.py"
=====================================
1. Penjumlahan
2. Perkalian
3. Pembagaian
3. Pengurangan

=====================================

Pilih operasi aritmatik diatas: 2

Masukan angka pertama: 13
Masukan angka kedua: 2
Hasil perkalian dari 13 dan 2 Adalah : 26
PS C:\Users\PC> & C:/Users/PC/AppData/Local/Programs/Python/Python38/python.exe "d:/hacktoberfest/ArithmeticChoose_xcapri.py"

=====================================
1. Penjumlahan
2. Perkalian
3. Pembagaian
3. Pengurangan

=====================================

Pilih operasi aritmatik diatas: 1

Operasi yang dipilih masih tahap pengembangan

'''
