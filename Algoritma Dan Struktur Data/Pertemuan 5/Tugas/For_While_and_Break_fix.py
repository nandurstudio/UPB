import random

# Daftar makanan acak
daftar_makanan = ['apel', 'pisang', 'jeruk', 'stroberi', 'anggur', 'nasi goreng', 'ayam goreng', 'pizza', 'spaghetti', 'sushi']

# Buat array items dengan item makanan acak
items = random.sample(daftar_makanan, 10)

# Buat array stock dengan stok acak antara 0 hingga 10
stock = [random.randint(0, 10) for _ in range(10)]

# Menampilkan item makanan dan status stok
for i in range(len(items)):
    if stock[i] == 0:
        status = "kosong"
    elif stock[i] <= 5:
        status = "menipis"
    else:
        status = "aman"
    print(f"{items[i]} - Stok: {stock[i]} ({status})")
