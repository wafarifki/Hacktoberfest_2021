hargajual = int(input("Harga: "))
diskon = int(input("diskon:  "))
potongan = hargajual * (diskon/100)
total = hargajual - potongan
print(f"Potongan: {potongan}")
print(f"Total: {total}")
