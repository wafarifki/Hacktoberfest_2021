class Cat:
    species='mamal'
    def __init__(self, name, age):
        self.name=name
        self.age=age
        
    def __repr__(self):
        return f"Nama {self.name} Umur {self.age} bulan" 

#instaciate (menambahkan 3 objek cat)
cat1=Cat('Moka', 9)
cat2=Cat('Macha', 7)
cat3=Cat('Michelle', 11)

umur=[cat1, cat2, cat3]
umur.sort(key=lambda x: x.age, reverse=True)

print('Urutan kucing dari kucing tertua')
for i in umur:
    print('>>', i)

oldest= max(cat1.age, cat2.age, cat3.age)

print('Kucing tertua adalah', oldest,'bulan')