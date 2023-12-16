#Contoh Set Kosong
s = set()
print("Type of s is ",type(s))

# Deklarasi List
lis1 = [ 3, 4, 1, 4, 5 ]

# Cetak ITerasi sebelum Konversi
print("The list before conversion is : " + str(lis1))

# Iterables setelah konversi
print("The list after conversion is : " + str(set(lis1)))
#set() pada tuple
# deklarasi tuple
tup1 = (3, 4, 1, 4, 5)

# cetak iterasi sebelum konversi
print("The tuple before conversion is : " + str(tup1))

# Iterables after conversion are
# notice distinct and elements
print("The tuple after conversion is : " + str(set(tup1)))
# fungsi set() poda range

# deklarasi range
r = range(5)

r=set(r)str(r))

# Iterables setelah konversi

print("The Range after conversion is : " +
# fungsi set() pada kamus

# deklarasi list
dic1 = { 4 : 'geeks', 1 : 'for', 3 : 'geeks' }

# cetal librari
# iternal sorted
print("Dictionary before conversion is : " + str(dic1))

# kamus setelah konfersi

print("Dictionary after conversion is : " + str(set(dic1)))
Hapus Elemen dari Set menggunakan Metode pop()
Pop() adalah metode bawaan dalam Python yang digunakan untuk memunculkan atau menghapus elemen satu per satu dari kumpulan. Elemen terkecil dalam himpunan dihilangkan terlebih dahulu, diikuti dengan penghapusan elemen secara bertahap. Dalam program berikut, perulangan while melanjutkan penghapusan elemen satu per satu, hingga himpunan tersebut kosong.

def Remove(initial_set):
while initial_set:
initial_set.pop()
print(initial_set)


initial_set = set([12, 10, 13, 15, 8, 9])
Remove(initial_set)
s1 = {1, 2, 3, 4}
print("Before popping: ",s1)
s1.pop()
s1.pop()
s1.pop()

print("After 3 elements popped, s1:", s1)
Bagaimana Python mengatur issubset() Bekerja
Dalam kode ini, ia memeriksa apakah himpunan A adalah himpunan bagian dari himpunan B dan kemudian apakah himpunan B adalah himpunan bagian dari himpunan A. Pernyataan cetak pertama mengembalikan True karena semua elemen himpunan A juga ada di himpunan B. Pernyataan cetak kedua mengembalikan Salah karena himpunan B berisi unsur-unsur yang tidak ada dalam himpunan A.
A = {4, 1, 3, 5}
B = {6, 0, 4, 1, 5, 0, 3, 5}

print(A.issubset(B))
print(B.issubset(A))
Contoh Metode set issubset() Python
Kode ini memeriksa apakah set s2 adalah subset dari set s1 dan mencetak True jika itu adalah.
s1 = {1, 2, 3, 4, 5}
s2 = {4, 5}
print(s2.issubset(s1))
