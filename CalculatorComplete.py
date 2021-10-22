print("selamat datang di aplikasi kalkulator full edition ")
print("silahkan pilih")

def tambah(a,b):            #def pada disamping digunakan untuk membuat suatu fungsi untuk operasi matematika #
    return a+b
def kurang(a,b):            #yang dimana fungsi return itu adalah tetap walaupun variable diubah#
    return a-b
def kali(a,b):
    return a*b
def pangkat(a,b):
    return a**b
def bagi(a,b):
    return a/b
def mod(a,b):
    return a%b
def factorial(a):
    hasil=1
    for i in range(1,a+1):
        hasil=hasil*i
    return hasil

def hitungpersegipanjang(p,l):
    return p*l
def hitungsegitiga(a,t):
    return 1/2*a*t
def hitungtrapesium(a,b,t):
    return 1/2*(a+b)*t
def hitungpersegi(s):
    return s*s
    
def menu():
    print("1. tambah")
    print("2. KURANG")
    print("3. KALI") 
    print("4. PANGKAT")
    print("5. BAGI")
    print("6. mod")             #menu() bertujuan untuk menampilkan menu yang sudah ada di dalam fungsi tersebut#
    print("7. factorial")
    print("8. hitung luas")
    print("0. keluar")
menu()
pilihan=""      #sebuah string kosong agar dikenali ole perintah while#
while pilihan !=0:  #apabila pilihan nya bukan angka 0 maka program akan terus berulang sampai pilih angka 0 baru berhenti#
    pilihan=int(input("silahkan masukkan pilihan : "))
    if pilihan==1:
        angka1=float(input("masukkan angka pertama : "))
        angka2=float(input("masukkan angka sekali lagi : "))
        print(angka1,"+",angka2,"=",tambah(angka1,angka2))
        print("selamat datang di aplikasi kalkulator full edition")
        print("silahkan pilih")
        menu()
    elif pilihan==2:                                        #Input ada adalam if masing masing agar pilihan tersebut tidak bercampur aduk contoh faktorial#
        angka1=float(input("masukkan angka : "))              #hanya membutuhkan satu buah input saja jika kita tidak memasukkan input dalam if maka semua inputnya jadi 2#
        angka2=float(input("masukkan angka sekali lagi : "))
        print(angka1,"-",angka2,"=",kurang(angka1,angka2))      #tujuan dari input float adalah agar bisa menghitung operasi matematika yang berbentuk koma#
        print("selamat datang di aplikasi kalkulator full edition")
        print("silahkan pilih")
        menu()
    elif pilihan==3:
        angka1=float(input("masukkan angka : "))
        angka2=float(input("masukkan angka sekali lagi : "))
        print(angka1,"x",angka2,"=",kali(angka1,angka2))
        print("selamat datang di aplikasi kalkulator full edition")
        print("silahkan pilih")
        menu()
    elif pilihan==4:
        angka1=float(input("masukkan angka : "))
        angka2=float(input("masukkan angka sekali lagi : "))
        print(angka1,"^",angka2,"=",pangkat(angka1,angka2))
        print("selamat datang di aplikasi kalkulator full edition")
        print("silahkan pilih")
        menu()
    elif pilihan==5:
        angka1=float(input("masukkan angka : "))
        angka2=float(input("masukkan angka sekali lagi : "))
        print(angka1,"/",angka2,"=",bagi(angka1,angka2))
        print("selamat datang di aplikasi kalkulator full edition")
        print("silahkan pilih")
        menu()
    elif pilihan==6:
        angka1=float(input("masukkan angka : "))
        angka2=float(input("masukkan angka sekali lagi : "))
        print(angka1,"%",angka2,"=",mod(angka1,angka2))
        print("selamat datang di aplikasi kalkulator full edition")
        print("silahkan pilih")
        menu()
    elif pilihan==7:
        angka1=int(input("masukkan satu angka : "))
        print(angka1,"!","=",factorial(angka1))
        print("selamat datang di aplikasi kalkulator full edition")
        print("silahkan pilih")
        menu()
    elif pilihan==8:
        print("1.luas persegi panjang")
        print("2.luas segitiga")
        print("3.luas trapesium")
        print("4.luas persegi")             
        choice=int(input("silahkan pilih : "))
        if choice==1:
            panjang=float(input("masukkan panjang : "))
            lebar=float(input("masukkan lebar : "))
            print(panjang,"*",lebar,"=",hitungpersegipanjang(panjang,lebar))
            print("selamat datang di aplikasi kalkulator full edition")
            print("silahkan pilih")
            menu()
        elif choice==2:
            alas=float(input("masukkan nilai alas : "))
            tinggi=float(input("masukkan nilai tinggi : "))
            print("1/2*",alas,"*",tinggi,"=",hitungsegitiga(alas,tinggi))
            print("luas nya adalah = ",hitungsegitiga(alas,tinggi))
            print("selamat datang di aplikasi kalkulator full edition")
            print("silahkan pilih")
            menu()
        elif choice==3:
            sisiAtas=float(input("masukkan nilai sisi atas : "))
            sisiBawah=float(input("masukkan nilai sisi bawah : "))
            tinggi=float(input("masukkan nilai tinggi : "))
            print("1/2*(",sisiAtas,"+",sisiBawah,")","*",tinggi,"=",hitungtrapesium(sisiAtas,sisiBawah,tinggi))
            print("selamat datang di aplikasi kalkulator full edition")
            print("silahkan pilih")
            menu()
        elif choice==4:
            sisi=float(input("masukkan nilai sisinya : "))
            print(sisi,"*",sisi,"=",hitungpersegi(sisi))
            print("selamat datang di aplikasi kalkulator full edition")
            print("silahkan pilih")
            menu()
        else:
            print("maaf tidak ad menu tersebut")
            print("selamat datang di aplikasi kalkulator full edition")
            print("silahkan pilih")
            menu()
    
    elif pilihan==0:
        print("Jangan lupa beri rating ya")
    else:
        print("maaf tidak ad menu tersebut")
        print("selamat datang di aplikasi kalkulator full edition")
        print("silahkan pilih")
        menu()

