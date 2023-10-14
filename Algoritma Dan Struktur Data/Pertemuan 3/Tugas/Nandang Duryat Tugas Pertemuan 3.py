# Dibuat oleh: Nandang Duryat - 312310233
# Kode barang existing di gabung dengan Input Baru
# locale untuk conversi rupiah
import locale
from threading import local

# Set the locale ke Indonesian (ID)
locale.setlocale(locale.LC_ALL, "id_ID")

# NIM, Nama Lengkap dan Kelas dari variable
nama_lengkap = "Nandang Duryat"
nim = "312310233"
kelas = "TI.23.C4"
nama_toko = "TOKO ALFA MIDI"
separator_dash = "=============="

# List untuk menyimpan barang, item code, dan harga
daftar_barang = {
    "B001": {"nama_barang": "Soda", "harga": 80000},
    "B002": {"nama_barang": "Sosis", "harga": 30000},
    "B003": {"nama_barang": "Telur", "harga": 11000},
    "B004": {"nama_barang": "Roti", "harga": 15000},
    "B005": {"nama_barang": "Mie", "harga": 3000},
}

# Menampilkan daftar barang yang tersedia
print("Daftar Barang yang Tersedia:")
for item_code, data_barang in daftar_barang.items():
    print(
        f"Item Code: {item_code}, Nama Barang: {data_barang['nama_barang']}, Harga: {locale.currency(data_barang['harga'], grouping=True)}"
    )

# Meminta pengguna untuk memilih barang
pilihan_barang = input("Masukkan Item Code Barang yang Anda Inginkan: ")

# Memeriksa apakah item code yang dimasukkan oleh pengguna valid
if pilihan_barang in daftar_barang:
    barang_terpilih = daftar_barang[pilihan_barang]
    print(
        f"Anda memilih {barang_terpilih['nama_barang']} dengan harga {locale.currency(barang_terpilih['harga'], grouping=True)}"
    )
    # Input Jumlah Barang dan pastikan kalau yang di input adalah angka
    while True:
        try:
            jumlah_barang = int(input("Masukkan Jumlah Barang: "))
            angka = int(jumlah_barang)  # konversi input ke int/angka
            break  # Exit loop jika input adalah angka
        except ValueError:
            print("Hanya boleh Input angka!")
            # Hitung total harga
    kode_barang = item_code
    nama_barang = barang_terpilih["nama_barang"]
    harga_barang = barang_terpilih["harga"]
    total_harga = barang_terpilih["harga"] * jumlah_barang

    # Format total harga sebagai Rupiah
    total_bayar = locale.currency(total_harga, grouping=True)
        # Hitung total harga
    total_harga = harga_barang * jumlah_barang

    # Format total harga sebagai Rupiah
    total_bayar = locale.currency(total_harga, grouping=True)
    
    print(separator_dash)
    # Tampilkan hasil yang telah dimasukkan ke variable atau bisa juga dari input jika pakai input()
    print("Nama Lengkap: ", nama_lengkap)  # akan menampilkan Nama Lengkap
    print("NIM: ", nim)  # akan menampilkan NIM
    print(
        "Kelas: ", kelas + "\n"
    )  # akan menampilkan kelas lalu di break (new line/garis baru)
    print(nama_toko)  # akan menampilkan nama toko
    print(separator_dash)  # ==============
    print("Kode Barang: " + kode_barang)
    print("Nama Barang: " + nama_barang)
    print(
        "Harga Barang: " + locale.currency(harga_barang, grouping=True)
    )  # Untuk memunculkan dan Format Rupiah

    # Karena jumlah_barang adalah int, maka harus di konversi dulu ke string dengan fungsi str()
    print("Jumlah Barang: " + str(jumlah_barang))
    print("Total Bayar: " + total_bayar)
    print(separator_dash)
else:
    print("Item Code Barang tidak valid.")
    input_baru = input("Ingin Input barang baru? Y/N: ")
    if input_baru == str("Y"):
        # User Input detail barang
        kode_barang = pilihan_barang
        print("Kode Barang: " + kode_barang)
        nama_barang = input("Masukkan Nama Barang: ")
        # Input Harga Barang dan pastikan kalau yang di input adalah angka
        while True:
            try:
                harga_barang = float(input("Masukkan Harga Barang (dalam Rupiah): "))
                angka = int(harga_barang)  # konversi input ke int/angka
                break  # Exit loop jika input adalah angka
            except ValueError:
                print("Hanya boleh Input angka!")
            # Input Jumlah Barang dan pastikan kalau yang di input adalah angka
        while True:
            try:
                jumlah_barang = int(input("Masukkan Jumlah Barang: "))
                angka = int(jumlah_barang)  # konversi input ke int/angka
                break  # Exit loop jika input adalah angka
            except ValueError:
                print("Hanya boleh Input angka!")
        # Hitung total harga
        total_harga = harga_barang * jumlah_barang

        # Format total harga sebagai Rupiah
        total_bayar = locale.currency(total_harga, grouping=True)
        
        print(separator_dash)
        # Tampilkan hasil yang telah dimasukkan ke variable atau bisa juga dari input jika pakai input()
        print("Nama Lengkap: ", nama_lengkap)  # akan menampilkan Nama Lengkap
        print("NIM: ", nim)  # akan menampilkan NIM
        print(
            "Kelas: ", kelas + "\n"
        )  # akan menampilkan kelas lalu di break (new line/garis baru)
        print(nama_toko)  # akan menampilkan nama toko
        print(separator_dash)  # ==============
        print("Kode Barang: " + kode_barang)
        print("Nama Barang: " + nama_barang)
        print(
            "Harga Barang: " + locale.currency(harga_barang, grouping=True)
        )  # Untuk memunculkan dan Format Rupiah

        # Karena jumlah_barang adalah int, maka harus di konversi dulu ke string dengan fungsi str()
        print("Jumlah Barang: " + str(jumlah_barang))
        print("Total Bayar: " + total_bayar)
        print(separator_dash)
    else:
        print("Tidak ada barang baru yang di beli")