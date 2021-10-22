nama = []
alamat = []
pekerjaan = []

def profilkomunitas():
    print ("---------------PROFIL KOMUNITAS ---------------")
    print ("CBR Owner Tangerang berdiri pada 10 Oktober 2012, klub motor ini sering melakukan kopdar di kawasan,Gading Serpong, Tangerang. Layaknya komunitas bikers pada umumnya, CROW memiliki kegiatan rutin berupa kopdar seminggu sekali, touring jarak jauh 3 kali setahun, touring jarak dekat 6 kali setahun, dan bakti sosial (baksos) setiap 3 bulan sekali. Selain itu CROW Tangerang memiliki divisi racing bernama CROW Racing Team (CRT) yang fokus pada penyaluran hobi member CROW Tangerang untuk balapan di Sirkuit.  CRT sengaja digagas agar anggota CROW  tidak melakukan perilaku negatif di jalan raya.")
    ques = input("KEMBALI KE MENU AWAL? (1.ya,2.tidak): ")
    if ques=="1":
        show_menu()
    elif ques=="2":
        profilkomunitas()
    else:
        print("MAAF, OPSI TIDAK TERSEDIA")
        profilkomunitas()
        
def caradaftar():
    print ("---------------CARA DAFTAR ---------------")
    print ("Ikuti langkah-langkah berikut :")
    print ("1. Masuk ke menu utama lalu masukan angka 3 (PENDAFTARAN);")
    print ("2. kemudian masukan nama anda;")
    print ("3. lalu masukan alamat anda;")
    print ("4. terakhir masukan pekerjaan anda;")
    print ("5. Data otomatis sudah dimasukan ke sistem. jika ingin melihat nama anda sudah terdaftar atau belum, caranya di menu utama masukan angka 4 (Data pendaftar). Kemudian tinggal anda cek apakah anda sudah terdaftar atau belum.;")
       
    ques = input("KEMBALI KE MENU AWAL? (1.ya,2.tidak): ")
    if ques=="1":
        show_menu()
    elif ques=="2":
        caradaftar()
    else:
        print("MAAF, OPSI TIDAK TERSEDIA")
        caradaftar()
        
def pendaftaran():
    name = input("MASUKAN NAMA ANDA :")
    nama.append(name)
    adress = input("MASUKAN ALAMAT ANDA :")
    alamat.append(adress)
    job = input("MASUKAN PEKERJAAN ANDA :")
    pekerjaan.append(job)
    print ("UNTUK MELIHAT HASIL DATA, SILAHAKAN CEK DATA PENDAFTAR")
    
def show_data():
    print ("---------------DATA PENDAFTAR ---------------")
    print("NO. \t| NAMA \t\t\t| ALAMAT\t\t\t|PEKERJAAN \t\t\t")
    if len(nama and alamat and pekerjaan) <= 0:
        print ("BELUM ADA DATA")
    else:
        for indeks in range(len(nama and alamat and pekerjaan)):
            print ("%d. \t| %s \t\t\t| %s \t\t\t| %s \t\t\t|"%(indeks+1,nama[indeks],alamat[indeks],pekerjaan[indeks]))
    ques = input("KEMBALI KE MENU AWAL? (1.ya,2.tidak): ")
    if ques=="1":
        show_menu()
    elif ques=="2":
        show_data() 
    else:
        print("MAAF, OPSI TIDAK TERSEDIA")
        show_data()

def show_menu():
    print ("\n\t SELAMAT DATANG DI KOMUNIAS CBR")
    print ("----------- MENU ----------")
    print ("1. PROFIL KOMUNITAS")
    print ("2. CARA MENDAFTAR")
    print ("3. PENDFTARAN")
    print ("4. DATA PENDAFTAR")
    print ("5. Exit")
    menu = input("PILIH MENU> ")
    print ("\n")

    if menu == "1" :
        profilkomunitas()
    elif menu == "2":
        caradaftar()
    elif menu == "3":
        pendaftaran()
    elif menu == "4":
        show_data()
    elif menu == "5":
        exit()
    else:
        print ("Maaf Yang Anda Pilih Tidak Ada di Option")
#Proses Data Iterasi Selalu Dimulai Dari Fungsi Utama    
while(True):
        show_menu()
