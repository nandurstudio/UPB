# Menggunakan tanda kutip tunggal
string1 = "welcome to the UPB World"
print("String dengan menggunakan tanda kutip tunggal:")
print(string1)

# Membuat string dengan tanda kutip ganda
string1 = "I'm a mahasiswa"
print("\nString dengan menggunakan tanda kutip ganda:")
print(string1)

# Membuat string dengan triple kutip
string1 = """I'm a mahasiswa and I live in a world of BEKASI"""
print("\nString dengan menggunakan triple kutip:")
print(string1)

# Membuat string multibaris
string1 = """Belajar
            adalah jalan
            ninjaku"""
print("\nMembuat string multibaris:")
print(string1)

print("==========================")

# Program Python untuk mengakses karakter string
string1 = "UPB for UPB"
print("String awal:")
print(string1)

# Cetak karakter pertama
print("\nKarakter pertama dari string:")
print(string1[0])

# Cetak karakter kedua
print("\nKarakter kedua dari string:")
print(string1[1])

# Cetak karakter terakhir
print("\nKarakter terakhir dari string:")
print(string1[-1])

print("==========================")

# Python Program to Update
# character of a String

String1 = "Hello, I'm Mahasiswa"
print("Initial string:")
print(String1)

# 1. Menggunakan list untuk mengubah karakter pada indeks ke-2
list1 = list(String1)
list1[0] = 'p'
String2 = ''.join(list1)
print("\nUpdating character at 2nd Index:")
print(String2)

# 2. Mengganti karakter pada indeks ke-2 dengan 'p' menggunakan slicing
String3 = String1[0:2] + 'p' + String1[3:]
print("\nUpdating character at 2nd Index:")
print(String3)