# Membuka file "myfile_f1.txt" dalam mode 'w' (write)
file1 = open("myfile_f1.txt", "w")

# Membuat sebuah daftar (list) yang berisi tiga kalimat dengan karakter newline di akhirnya
L = ["This is Delhi \n", "This is Paris \n", "This is London \n"]

# Menulis string "Hello" ke dalam file, diikuti dengan karakter newline
file1.write("Hello \n")

# Menulis semua elemen dalam daftar L ke dalam file
file1.writelines(L)

# Menutup file setelah selesai menulis (untuk mengubah mode akses file)
file1.close()

# Membuka kembali file "myfile_f1.txt" dalam mode 'r+' (read and write)
file1 = open("myfile_f1.txt", "r+")

# Membaca dan mencetak seluruh isi file ke layar
print("Output of Read function is ")
print(file1.read())
print()

# Menggeser kursor baca ke awal file
file1.seek(0)

# Membaca dan mencetak satu baris pertama dari file
print("Output of Readline function is ")
print(file1.readline())
print()

# Menggeser kursor baca ke awal file
file1.seek(0)

# Menunjukkan perbedaan antara read dan readline
print("Output of Read(9) function is ")
print(file1.read(9))
print()

# Menggeser kursor baca ke awal file
file1.seek(0)

# Membaca dan mencetak 9 karakter pertama dari file
print("Output of Readline(9) function is ")
print(file1.readline(9))

# Menggeser kursor baca ke awal file
file1.seek(0)

# Menunjukkan perbedaan antara read dan readline
# Menggunakan readlines function untuk membaca dan mencetak seluruh isi file sebagai daftar baris
print("Output of Readlines function is ")
print(file1.readlines())
print()

# Menutup file setelah selesai membaca dan menulis
file1.close()
