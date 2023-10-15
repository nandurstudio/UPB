# Dibuat oleh: Nandang Duryat - 312310233
# Kode barang existing di gabung dengan Input Baru
# locale untuk conversi rupiah
import locale
from threading import local

# Set the locale ke Indonesian (ID)
locale.setlocale(locale.LC_ALL, "id_ID")
# total sebagai varianble list/array
total = []
nama_bisnis = "Nandur Studio"
nama_pemilik = "Nandang Duryat"
nim_pemilik = "312310233"
dash_line = "================================"
dash_line_single = "--------------------------------"
# cetak nama toko
print(dash_line)
print(nama_bisnis)
print("Nama: " + nama_pemilik)
print("NIM : " + nim_pemilik)
print(dash_line_single)

def daftar_barang():
    harga_1 = 1250000
    harga_2 = 32500000
    harga_3 = 15250000
    harga_4 = 125000000
    harga_5 = 250000245
    harga_6 = 750000
    print(" NO | NAMA LAYANAN     | HARGA ")
    print(dash_line_single)
    print(" 1  | Edit Foto        | "+locale.currency(harga_1, grouping=True))
    print(" 2  | Edit Video       | "+locale.currency(harga_2, grouping=True))
    print(" 3  | Membuat Logo     | "+locale.currency(harga_3, grouping=True))
    print(" 4  | Membuat Aplikasi | "+locale.currency(harga_4, grouping=True))
    print(" 5  | Membuat Web      | "+locale.currency(harga_5, grouping=True))
    print(" 6  | Membuat CV       | "+locale.currency(harga_6, grouping=True))
    print(dash_line_single)
    kode = int(input("Masukan Kode Layanan: "))
    if kode == 1:  # sama dengan 1
        jumlah1 = int(input("Masukan Jumlah QTY: "))  # variable
        total1 = harga_1 * jumlah1
        total.append(total1)
        tanya()
    elif kode == 2:
        jumlah2 = int(input("Masukan Jumlah QTY: "))
        total2 = harga_2 * jumlah2
        total.append(total2)
        tanya()
    elif kode == 3:
        jumlah3 = int(input("Masukan Jumlah QTY: "))
        total3 = harga_3 * jumlah3
        total.append(total3)
        tanya()
    elif kode == 4:
        jumlah4 = int(input("Masukan Jumlah QTY: "))
        total4 = harga_4 * jumlah4
        total.append(total4)
        tanya()
    elif kode == 5:
        jumlah5 = int(input("Masukan Jumlah QTY: "))
        total5 = harga_5 * jumlah5
        total.append(total5)
        tanya()
    elif kode == 6:
        jumlah6 = int(input("Masukan Jumlah QTY: "))
        total6 = harga_6 * jumlah6
        total.append(total6)
        tanya()
    else:
        print("Kode Layanan Tidak Ada!")
    return

def tanya():
    print(dash_line)
    tanya = input("Apakah Ingin Tambah Layanan Lain? [y/t]: ")
    print(dash_line_single)
    if tanya == "y":
        daftar_barang()
    elif tanya == "t":
        akhir()
    else:
        print("Hanya boleh pilih y atau t pada keyboard!")


def akhir():
    for harga in total:
        print("Subtotal: ", sum(total))
        diskon = 0
        a = sum(total)
    if a > 100000:
        diskon = a * 8 / 100
    elif a > 500000:
        diskon = a * 5 / 100
    else:
        diskon = 0
        print("Diskon:", locale.currency(diskon, grouping=True))
        totalakhir = a - diskon
        print("Total: ", locale.currency(totalakhir, grouping=True))
        print(dash_line_single)
        bayar = int(input("Bayar: "))
        kembalian = bayar - totalakhir
        print("Kembalian : ", locale.currency(kembalian, grouping=True))
        print("ty - nandur")
        print(dash_line)

daftar_barang()
