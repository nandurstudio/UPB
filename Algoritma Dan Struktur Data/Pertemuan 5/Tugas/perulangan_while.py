# Membuat List Item
pemisah = "=============================="
print(pemisah)
print("Contoh tugas perulangan")
print(pemisah)
items = ["pen", "notebook", "pencil", "lunch box"]

# Isi List
items_len = len(items)
index = 0

# Jalankan perulangan
# List Item
while index < items_len:
    print(items[index])
    index = index + 1  # Perbarui indeks di dalam perulangan

print(pemisah)
print("Tugas buat perulangan while")
print(pemisah)
# Membuat Daftar Pakaian
pakaian = ["Baju", "Kemeja", "Sepatu", "Tas", "Sandal", "Topi"]
total_pakaian = len(pakaian)
index = 0  # Reset indeks ke 0 sebelum perulangan while

# Tampilkan semua pakaian dengan perulangan "while"
while index < total_pakaian:
    print(pakaian[index])
    index = index + 1  # Perbarui indeks di dalam perulangan
