# Program Python Append
# Append vs write mode

# Nama file yang akan digunakan
nama_file = "myfile_f2.txt"

# Membuka file dalam mode 'w' (write) dan menulis beberapa baris teks ke dalamnya
file1 = open(nama_file, "w")
L = ["This is Delhi \n", "This is Paris \n", "This is London \n"]
file1.writelines(L)
file1.close()

# Membuka file dalam mode 'a' (append) dan menambahkan teks di akhir file
file1 = open(nama_file, "a")  # mode tambahan
file1.write("Today \n")
file1.close()

# Membuka file dalam mode 'r' (read) dan mencetak seluruh isi file
file1 = open(nama_file, "r")
print("Output of Readlines after appending")
print(file1.readlines())
print()
file1.close()

# Membuka file dalam mode 'w' (write) dan menulis teks baru, menggantikan isi file sebelumnya
file1 = open(nama_file, "w")  # mode penulisan
file1.write("Tomorrow \n")
file1.close()

# Membuka file dalam mode 'r' (read) dan mencetak seluruh isi file setelah penulisan
file1 = open(nama_file, "r")
print("Output of Readlines after writing")
print(file1.readlines())
print()
file1.close()