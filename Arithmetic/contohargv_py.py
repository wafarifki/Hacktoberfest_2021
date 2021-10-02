# kalkulator penjumlahan dengan argv di python



import sys

angkapertama = int(sys.argv[1]) 
angkakedua = int(sys.argv[2])

jumlah = angkapertama + angkakedua
print("\n=====================================")
print("\nHasil dari penjumlahan "+str(angkapertama)+" dan "+str(angkakedua)+" adalah : "+str(jumlah))

'''
# cara penggunaan :
# python contohargv_py.py 12 1
# Output :

=====================================

Hasil dari perkalian 12 dan 1 adalah : 13


'''
