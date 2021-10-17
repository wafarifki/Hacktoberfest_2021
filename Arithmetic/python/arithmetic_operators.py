import sys,time,os
from os import system
from time import sleep

#Coded By Tubagus NM

operator = []
pembatas = "-"*40
banner   = '''
                _    _                    
  _ __   _   _ | |_ | |__    ___   _ __   
 | '_ \ | | | || __|| '_ \  / _ \ | '_ \  
 | |_) || |_| || |_ | | | || (_) || | | | 
 | .__/  \__, |_\__||_| |_| \___/ |_| |_| 
 |_|     |____| |  __ _  ___   __ _  _ __ 
           / _` | / _` |/ __| / _` || '__|
          | (_| || (_| |\__ \| (_| || |   
           \__,_| \__,_||___/ \__,_||_|   
                                          
                      Coded by TubagusNM'''

def show():
	print (pembatas)
	print "          OPERATOR ARITMATIKA           "
	print (pembatas)
	if len (operator) <= 0:
		#Input data
		a = int(input("Masukan nilai a: "))
		b = int(input("Masukan nilai b: "))
	print (pembatas)

	    #Penjumlahan
    	c = a + b
    	print "Hasil dari penjumlahan: %d +  %d = %d" % (a,b,c)

    	#Pengurangan
    	c = a - b 
    	print "Hasil dari pengurangan: %d -  %d = %d" % (a,b,c)

    	#Perkalian
    	c = a * b
    	print "Hasil dari perkalian  : %d *  %d = %d" % (a,b,c)

    	#Pembagian
    	c = a / b
    	print "Hasil dari pembagian  : %d /  %d = %d" % (a,b,c)

    	#Sisa bagi
    	c = a % b
    	print "Hasil dari sisa bagi  : %d %%  %d = %d" % (a,b,c)

    	#Pemangkatan
    	c = a ** b
    	print "Hasil dari pangkat    : %d ** %d = %d" % (a,b,c)

    	#Bagi bulat
    	c = a // b
    	print "Hasil dari bagi bulat : %d // %d = %d" % (a,b,c)
    	print (pembatas)
    	sys.exit()

def penugasan():
	print (pembatas)
	print "         OPERATOR PENUGASAN            "
	print (pembatas)
	#Input data
	a = int(input("Masukan nilai a: "))
	print (pembatas)
	print "Nilai a setelah ditambah 31"
	print "Hasilnya = %d" % (a+31)
	print (pembatas)
	print "Nilai a setelah dikurang 13"
	print "Hasilnya = %d" % (a-13)
	print (pembatas)
	print "Nilai a setelah dikali 23"
	print "Hasilnya = %d" % (a*23)
	print (pembatas)
	print "Nilai a setelah dibagi 4"
	print "Hasilnya = %d" % (a/4)
	print (pembatas)
	print "Sisa bagi nilai a dengan 5"
	print "Hasilnya = %d" % (a%5)
	print (pembatas)
	print "Nilai a setelah dipangkat 3"
	print "Hasilnya = %d" % (a**3)
	print (pembatas)
	sys.exit()

def perbandingan():
	print (pembatas)
	print "         OPERATOR PERBANDINGAN         "
	print (pembatas)
	#Input data
	a = int(input("Masukan nilai a: "))
	b = int(input("Masukan nilai b: "))
	print (pembatas)
	c = a == b
	print "Apakah %d == %d ? : %r" % (a,b,c)
	c = a < b
	print "Apakah %d <  %d ? : %r" % (a,b,c)
	c = a > b
	print "Apakah %d >  %d ? : %r" % (a,b,c)
	c = a <= b
	print "Apakah %d <= %d ? : %r" % (a,b,c)
	c = a >= b
	print "Apakah %d >= %d ? : %r" % (a,b,c)
	c = a != b
	print "Apakah %d != %d ? : %r" % (a,b,c)
	print (pembatas)
	sys.exit()

def bitwise():
    print (pembatas)
    print "             OPERATOR BITWISE           "
    print (pembatas)
    #Input data
    a = int(input("Masukan nilai a: "))
    b = int(input("Masukan nilai b: "))
    print (pembatas)

    #Operasi AND
    c = a % b
    print "Hasil dari AND (a & b) = %s" % c

    #Operasi OR
    c = a | b
    print "Hasil dari OR  (a | b) = %s" % c

    #Operasi XOR
    c = a ^ b
    print "Hasil dari XOR (a ^ b) = %s" % c

    #Operasi Not
    c = ~a
    print "Hasil dari NOT (~a)    = %s" % c

    #Operasi shift left (tukar posisi biner)
    c = a << b
    print "Hasil dari SHIFT LEFT  (a << b) = %s" % c

    #Operasi shift right (tukar posisi biner)
    c = a >> b
    print "Hasil dari SHIFT RIGHT (a >> b) = %s" %c
    print (pembatas)
    sys.exit()

def menu():
	#List Menu
	system("cls | clear")
	print (banner)
	print (pembatas)
	print "                LIST MENU               "
	print (pembatas)
	print "1. Operator Aritmatika"
	print "2. Operator Penugasan"
	print "3. Operator Perbandingan"
	print "4. Operator Bitwise"
	print "5. Exit"
	print "\n"
	menu = input("Masukan angka diatas: ")
	system("cls | clear")

	#Pemanggilan
	if menu == 1:
		show()
	elif menu == 2:
		penugasan()
	elif menu == 3:
		perbandingan()
	elif menu == 4:
		bitwise()
	elif menu == 5:
		print "Selamat Tinggal... :)"
		sys.exit()
	else:
		print "Harap masukan dengan benar!"
		sleep(1)

if __name__ == "__main__":
	while(True):
		menu()
