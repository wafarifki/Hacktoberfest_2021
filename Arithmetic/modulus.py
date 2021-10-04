def modulus(n1, n2):
    hasil = 0
    hasil += n1 % n2
    return hasil

n1 = int(input('\nMasukkan bilangan pertama: '))
n2 = int(input('\nMasukkan bilangan kedua: '))

if __name__ == "__main__":
    print(f"\nModulusnya adalah: {modulus(n1,n2)}")
