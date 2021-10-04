import time

print('Siap untuk belajar checker')

time.sleep(1) #delay 1 detik


print('Untuk mengetahui apa yang seharusnya anda lakukan, anda harus menjawab beberapa pertanyaan saya ') 

time.sleep(3) #delay  detik

#################                     ##################

def choise():
    sudah=1
    belum=0
    return sudah
sudah = choise()

print('Apakah anda sudah makan?')

time.sleep(3) #delay  detik

while True:                                             #Pertanyaan Pertama

    try:

        makan=int(input('Jika sudah makan tulis angka 1, 0 jika belum -> '))

        if -1<makan<2:

            if makan == sudah:

                print('Bagus')

            else:

                print('Segeralah makan karena itu penting :)')

            break

        else:

            print('Masukan angka 1 atau 0')

    except ValueError:

        print('Mohon masukan angka!')

        continue


while True:                                             #Pertanyaan Kedua

    try:

        suhu=int(input('Berapa perkiraan suhu di ruangan anda? -> '))

        if suhu>30:
            print('suhu terlalu panas')

            print('anda bisa mandi agar badan lebih segar')

        elif suhu>20:

            print('suhu bagus')

        else:

            print('suhu terlalu dingin')

            print('anda bisa minum minuman hangat')

        break

    except ValueError:

        print('Mohon masukan angka!')

        continue

time.sleep(3) #delay  detik

#################                     ##################


if makan == 1:

    makan ='sudah'

else:

    makan ='belum'

#################                     ##################


print('Menurut data yang anda sampaikan kepada kami, kami bisa menyimpulkan bahwa')

time.sleep(5) #delay  detik

print('Anda', makan, 'makan')

time.sleep(1) #delay  detik

print('Suhu ruangan anda adalah', suhu,'derajat')

time.sleep(2) #delay  detik

#################                     ##################


if makan == 'sudah' and 20<suhu<30:

    print('Maka anda sudah siap belajar')

else:

    print('Maka anda belum siap untuk belajar')

    time.sleep(1) #delay  detik

    print('Jika anda memaksakan untuk belajar, anda menjadi tidak fokus')

    time.sleep(2) #delay  detik

    print('Lakukan sesuatu yang saya sarankan tadi') 