# Membuat List Item
pemisah = "=============================="
print(pemisah)
print("Contoh tugas perulangan")
print(pemisah)
items = ["pen", "notebook", "pencil", "lunch box"]

# Jalankan Run a perulangan utk di tampilkan
# List Item
for item in items:
    print(item)

print(pemisah)
print("Tugas buat perulangan for")
print(pemisah)
# Membuat Daftar Pakaian
pakaian = ["Baju", "Kemeja", "Sepatu", "Tas", "Sandal", "Topi"]
# Tampilkan semua pakaian dengan perulangan "for"
for i, barang in enumerate(pakaian, 1):
    print("%d. %s" % (i, barang))
