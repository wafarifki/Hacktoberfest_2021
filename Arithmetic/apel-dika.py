print('------------------------------------------------')
print("Sistem Shopping Buah Sederhana")
print('------------------------------------------------')

# Masukan Jumlah Uang dan sistem akan menampilkannya
saldo = int(input("Masukan jumlah saldo : "))
print('Kamu memiliki jumlah saldo sebesar ' + str(saldo))

# Stok buah dan Harga buah
stok_buah = {'Apel': 5000, 'Pisang': 2000, 'Jeruk': 6000}

# Sistem memberitahukan buah yang dapat dibeli
print("  ")
print("Buah yang tersedia untuk dibeli adalah sebagai berikut :")
for i in stok_buah :
    print("- ", i,"Rp", stok_buah[i])

# Perulangan bahwa sistem akan menawarkan beberapa buah jika saldo masih cukup untuk membeli buah lainnya.
for nama_buah in stok_buah:

    print('------------------------------------------------')
    
    # Sistem menanyakan dan pengguna memasukan jumlah buah yang akan dibeli berdasarkan jenis buah yang ditawarkan oleh sistem

    print('Kami menawarkan buah ' + nama_buah + ', harganya Rp ' + str(stok_buah[nama_buah]) + ' Rupiah')
    jumlah_buah_dibeli = input('Mau beli berapa ' + nama_buah + '? ')
    print('Anda akan membeli ' + jumlah_buah_dibeli + ' ' + nama_buah)
    
    # Sistem menghitung dan memberitahukan jumlah saldo yang harus dibayarkan berdasarkan item buah yang di pilih
    print('================================================')
    hitung_total_bayar = int(jumlah_buah_dibeli)
    harga_total = stok_buah[nama_buah] * hitung_total_bayar
    print('Harga total adalah ' + str(harga_total) + ' Rupiah')
    
    if saldo >= harga_total:

        # Beritahu dan cetak berapa jumlah item buah yang dibeli
        print('Anda telah membeli ', jumlah_buah_dibeli + ' ' + nama_buah)
        saldo -= harga_total

        # Ketika saldo sama dengan 0, cetak 'Saldo Anda Habis' dan hentikan perulangan
        if saldo == 0:
            break
            print('Saldo Anda Habis')  

    # Tampilkan pesan jika tidak bisa membeli, karena saldo tidak mencukupi
    else:
        print('Maaf, namun saldo anda tidak mencukupi')
        print('Anda tidak dapat membeli ', nama_buah, ' sebanyak itu, kamu bisa beli buah lain dengan harga lebih rendah.')

# Cetak saldo tersisa dan ucapkan terimakasih
print('------------------------------------------------')
print('Saldo anda tersisa ' +  str(saldo) + ' Rupiah')
print("Terima Kasih, telah berbelanja buah disini 😊")
