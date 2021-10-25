#Cetak judul program (OUTPUT)
print("---------------DAFTAR EKSTRAKULIKULER SMPN 1 CITEUREUP---------------")
ekstrakulikuler = ["1.Pramuka","2.Paskibra","3.PMR", "4.Futsal", "5.Volly", "6.Tata boga", "7.Vokal"]
print("Ada apa saja? seperti :")

for eks in ekstrakulikuler:
    print (eks)
#Mencetak output dengan format menjumlahkan variabel ekstrakulikuler yang ada didalam []
print ("Total ekstrakulikuler: ada {}".format(len(ekstrakulikuler)))
cari = input("Pilih ekstrakulikuler utama : ")
#iterasi
a = 0
terpilih = False

while a < len(ekstrakulikuler):
    if cari in ekstrakulikuler[a]:
        terpilih = True
        break
    a=a+1
#Input
eskul=[]
a = 1
berhenti = False
print("---------------BIODATA SISWA/SISWI PENDAFTAR EKSTRAKULIKULER---------------")
input("Nama     : ")
input("Kelas    : ")
input("Nomer Hp : ")
#Mengisi pilihan eskul
while(not berhenti):
    eskul_pilih = input("\nPilih eskul yang diinginkan ke-{}: ".format(a))
    eskul.append(eskul_pilih)
    #iterasi
    a += 1
    tanya = input("Mau tambah ekstrakulikuler lagi? (ya/tidak): ")
    if(tanya == "tidak"): 
        berhenti = True
# Cetak Semua ekstrakulikuler
print ("-----" * 10)
print ("Kamu memimilih {} ekstrakulikuler :".format(len(eskul)))
#iterasi
for school in eskul:
    print ("- {}".format(school))
    
print("\n---------------SELAMAT BERGABUNG DI EKSTRAKULIKULER---------------")
print("                  SEMOGA NYAMAN, DAN TETAP RAJIN")
