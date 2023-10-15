import locale

# Mengatur locale untuk format mata uang dalam bahasa Indonesia (ID)
locale.setlocale(locale.LC_ALL, "id_ID")
total = []
nama_bisnis = "Nandur Studio"
nama_pemilik = "Nandang Duryat"
nim_pemilik = "312310233"
dash_line = "================================"
dash_line_single = "--------------------------------"

# Mencetak informasi bisnis
print(dash_line)
print(nama_bisnis)
print("Nama: " + nama_pemilik)
print("NIM : " + nim_pemilik)
print(dash_line_single)

# Fungsi daftar_barang() digunakan untuk menampilkan daftar layanan
def daftar_barang():
    harga = {
        1: {"nama": "Edit Foto", "harga": 1250000},
        2: {"nama": "Edit Video", "harga": 32500000},
        3: {"nama": "Membuat Logo", "harga": 15250000},
        4: {"nama": "Membuat Aplikasi", "harga": 125000000},
        5: {"nama": "Membuat Web", "harga": 250000245},
        6: {"nama": "Membuat CV", "harga": 750000}
    }

    # Menampilkan daftar layanan
    print(" NO | NAMA LAYANAN     | HARGA ")
    print(dash_line_single)
    for nomor, barang in harga.items():
        print(f" {nomor} | {barang['nama']} | " + locale.currency(barang['harga'], grouping=True))

    kode = int(input("Masukan Kode Layanan: "))
    if kode in harga:
        jumlah = int(input("Masukan Jumlah QTY: "))
        total.append(harga[kode]['harga'] * jumlah)
        tanya_user()
    else:
        print("Kode Layanan Tidak Ada!")

# Fungsi tanya_user() digunakan untuk mengonfirmasi apakah pengguna ingin menambah layanan lagi
def tanya_user():
    print(dash_line)
    tanya = input("Apakah Ingin Tambah Layanan Lain? [y/t]: ")
    print(dash_line_single)
    if tanya.lower() == "y":
        daftar_barang()
    elif tanya.lower() == "t":
        checkout()
    else:
        print("Hanya boleh pilih y atau t pada keyboard!")

# Fungsi checkout() menampilkan ringkasan pesanan dan perhitungan akhir
def checkout():
    if total:
        subtotal = sum(total)
        diskon = 0

        if subtotal > 100000:
            diskon = subtotal * 8 / 100
        elif subtotal > 500000:
            diskon = subtotal * 5 / 100

        totalakhir = subtotal - diskon
        print("Subtotal: ", locale.currency(subtotal, grouping=True))
        print("Diskon:", locale.currency(diskon, grouping=True))
        print("Total: ", locale.currency(totalakhir, grouping=True))

        bayar = int(input("Bayar: "))
        kembalian = bayar - totalakhir
        print("Kembalian : ", locale.currency(kembalian, grouping=True))
        print("Terima kasih - Nandur")
        print(dash_line)
    else:
        print("Belum ada layanan yang dipilih.")

# Memulai proses dengan memanggil daftar_barang()
daftar_barang()