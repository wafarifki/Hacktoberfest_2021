print ("\nPROGRAM KONVERSI SUHU\n")

print ("\n======CELCIUS=====\n")
# input digunakan agar user dapat memasukkan suhu sesuai yang di inginkan
Celcius = float(input("Masukkan Suhu dalam Celcius : "))
print ("Suhu dalam Celcius : ", Celcius, "Celcius")

# Reamur
Reamur = (4/5) * Celcius
print ("Reamur : ", Reamur, "Reamur")
# Fahrenheit
Fahrenheit = ((9/5) * Celcius) + 32
print ("Fahrenheit : ", Fahrenheit, "Fahrenheit")
# Kelvin
Kelvin = Celcius + 273
print ("Kelvin : ", Kelvin, "Kelvin")

print ("\n=====REAMUR=====\n")
# input digunakan agar user dapat memasukkan suhu sesuai yang di inginkan
Reamur = float(input("Masukkan Suhu dalam Reamur : "))
print ("Suhu dalam Reamur : ", Reamur, "Reamur")


# Celcius
Celcius = (5/4) * Reamur
print ("Celcius : ", Celcius, "Celcius")
# Fahrenheit
Fahrenheit = ((9/4) * Reamur) + 32
print ("Fahrenheit : ", Fahrenheit, "Fahrenheit")
# Kelvin
Kelvin = ((5/4) * Reamur) + 273
print ("Kelvin : ", Kelvin, "Kelvin")

print ("\n=====FAHRENHEIT=====\n")
# input digunakan agar user dapat memasukkan suhu sesuai yang di inginkan
Fahrenheit = float(input("Masukkan Suhu dalam Fahrenheit : "))
print ("Suhu dalam Fahrenheit : ", Fahrenheit, "Fahrenheit")


# Celcius
Celcius = (5/9) * (Fahrenheit - 32)
print ("Celcius : ", Celcius, "Celcius")
# Reamur
Reamur = (4/9) * (Fahrenheit - 32)
print ("Reamur : ", Reamur, "Reamur")
# Kelvin
Kelvin = ((5/9) * (Fahrenheit - 32)) + 273
print ("Kelvin : ", Kelvin, "Kelvin")

print ("\n=====KELVIN=====\n")
# input digunakan agar user dapat memasukkan suhu sesuai yang di inginkan
Kelvin = float(input("Masukkan Suhu dalam Kelvin : "))
print ("Suhu dalam Kelvin : ", Kelvin, "Kelvin")


# Celcius
Celcius = Kelvin - 273
print ("Celcius : ", Celcius, "Celcius")
# Reamur
Reamur = 4/5 * (Kelvin - 273)
print ("Reamur : ", Reamur, "Reamur")
# Fahrenheit
Fahrenheit = ((9/5) * (Kelvin - 273)) + 32
print ("Fahrenheit : ", Fahrenheit, "Fahrenheit")



