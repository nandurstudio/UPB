import locale

# Set the locale to Indonesian (ID)
locale.setlocale(locale.LC_ALL, 'id_ID')

# Input Harga Barang
while True:
    try:
        harga_barang = float(input("Masukkan Harga Barang (dalam Rupiah): "))
        angka = int(harga_barang) #konversi input ke int/angka
        break  # Exit loop jika input adalah angka
    except ValueError:
        print("Hanya boleh Input angka!")

# Input Jumlah Barang
while True:
    try:
        jumlah_barang = int(input("Masukkan Jumlah Barang: "))
        angka = int(jumlah_barang) #konversi input ke int/angka
        break  # Exit loop jika input adalah angka
    except ValueError:
        print("Hanya boleh Input angka!")

# Hitung total harga
total_harga = harga_barang * jumlah_barang

# Format total harga sebagai Rupiah
total_harga_format = locale.currency(total_harga, grouping=True)

# Tampilkan hasil
print("Total Harga: " + total_harga_format)