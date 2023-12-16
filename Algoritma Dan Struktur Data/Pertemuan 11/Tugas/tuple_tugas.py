#Penggabungan Tupel Python
tuple1 = (0, 1, 2, 3)
tuple2 = ('python', 'OK')
print(tuple1 + tuple2)
#=======================================
#Penyusunan Tupel Python
#Tupel bersarang di Python berarti tupel di dalam tupel lain
# Code untuk tuple bersarang
tuple1 = (0, 1, 2, 3)
tuple2 = ('python', 'OK')
tuple3 = (tuple1, tuple2)
print(tuple3)
#====================================
#Tupel Python Pengulangan
#Kita dapat membuat tupel dari beberapa elemen yang sama dari satu elemen di tupel itu.
tuple3 = ('python',)*3
print(tuple3)
#============================================
#Mengiris Tupel dengan Python Mengiris tupel Python berarti membagi tupel menjadi tupel kecil menggunakan metode pengindeksan.
# code utk Mengiri
tuple1 = (0 ,1, 2, 3)
print(tuple1[1:])
print(tuple1[::-1])
print(tuple1[2:4])
#=====================================
#Menghapus Tuple dengan Python
#Dalam contoh ini, kami menghapus tuple menggunakan kata kunci 'del' . Outputnya akan berupa error karena setelah menghapus tuple akan memberikan NameError.
#Catatan: Menghapus elemen Tuple individual tidak mungkin dilakukan, tetapi kita dapat menghapus seluruh Tuple menggunakan kata kunci Del.
# Code untuk menghapus tuple
tuple3 = ( 0, 1)
del tuple3
print(tuple3)
#======================================
#Menemukan Panjang Tuple Python Untuk mencari panjang tupel, kita dapat menggunakan fungsi len() Python dan meneruskan tupel sebagai parameternya.
# Code untuk mencetak panjang tuple
tuple2 = ('python', 'ok')
print(len(tuple2))
#==================================
#Beberapa Tipe Data Dengan Tuple Tupel di Python bersifat heterogen. Ini berarti tupel mendukung elemen dengan banyak tipe data.
# tuple dengan banyak tipe data
tuple_obj = ("immutable",True,23)
print(tuple_obj)
#====================================
#Mengonversi Daftar menjadi Tuple
#Kita dapat mengonversi daftar dengan Python menjadi tuple dengan menggunakan konstruktor tuple() dan meneruskan daftar tersebut sebagai parameternya.
# Code mengkonversi list
list1 = [0, 1, 2]
print(tuple(list1))
# string 'python'
print(tuple('python'))
#==============================================
#Tupel dalam satu Lingkaran Kita juga dapat membuat tuple dengan satu elemen di dalamnya menggunakan loops.
# python code untuk membuat tuple dalam perulangan (loop)
tup = ('geek',)
# Nomor watku menjalankan lopps
n = 5
for i in range(int(n)):
    tup = (tup,)
    print(tup)