def bts(psn):
    print("===== "+psn+" =====")

def nbts():
    print("===============================\n")

# Contoh Set Kosong
kosong = "Contoh Set Kosong"
bts(kosong)
s = set()
print("Tipe dari s adalah ", type(s))
nbts()
#=====================================

# Deklarasi List
list_ = "Deklarasi List"
bts(list_)
lis1 = [3, 4, 1, 4, 5]

# Cetak Iterasi sebelum Konversi
print("List sebelum konversi adalah : " + str(lis1))

# Iterables setelah konversi
print("List setelah konversi adalah : " + str(set(lis1)))
nbts()
#=====================================

# set() pada tuple
tup = "set() pada tuple"
bts(tup)
# Deklarasi tuple
tup1 = (3, 4, 1, 4, 5)

# Cetak iterasi sebelum konversi
print("Tuple sebelum konversi adalah : " + str(tup1))

# Iterables setelah konversi
print("Tuple setelah konversi adalah : " + str(set(tup1)))
nbts()
#=====================================

# fungsi set() pada range
rng = "fungsi set() pada range"
bts(rng)
# Deklarasi range
r = range(2, 10, 2)
r = set(str(r))

# Iterables setelah konversi
print("Range setelah konversi adalah : " + str(r))
nbts()
#=====================================

# fungsi set() pada kamus
kamus = "fungsi set() pada kamus"
bts(kamus)
# Deklarasi dictionary
dic1 = {4: 'geeks', 1: 'for', 3: 'geeks', 'hello': 'world'}

# Cetak kamus
# internal sorted
print("Kamus sebelum konversi adalah : " + str(dic1))

# Kamus setelah konversi
print("Kamus setelah konversi adalah : " + str(set(dic1)))
nbts()
#=====================================

# Pop
pop = "Metode pop()"
bts(pop)
# Hapus Elemen dari Set menggunakan Metode pop()
initial_set = set([12, 10, 13, 15, 8, 9])
def Remove(initial_set):
    while initial_set:
        initial_set.pop()
print(initial_set)

Remove(initial_set)
s1 = {1, 2, 3, 4}
print("Sebelum di-pop: ", s1)
s1.pop()
s1.pop()
s1.pop()

print("Setelah 3 elemen di-pop, s1:", s1)
nbts()
#=====================================

pop2 = "Setel Metode pop() dengan Python"
bts(pop2)
# Setel Metode pop() dengan Python
# Python Set pop() adalah metode dalam Python yang
# digunakan untuk menghapus dan mengembalikan elemen acak
# apa pun dari set. Seperti kita ketahui, Set adalah
# kumpulan elemen unik yang tidak berurutan, jadi tidak
# ada jaminan elemen mana yang akan dihapus dan
# dikembalikan oleh metode pop(). Jika set kosong,
# memanggil pop() akan memunculkan KeyError.
s1 = {9, 1, 0}
s1.pop()
print(s1)
nbts()

# issubset()
subst = "Metode issubset()"
bts(subst)
# Bagaimana Python Menggunakan issubset()
# Dalam kode ini, ia memeriksa apakah himpunan A adalah subset dari himpunan B dan kemudian apakah himpunan B adalah subset dari himpunan A. Pernyataan cetak pertama mengembalikan True karena semua elemen himpunan A juga ada di himpunan B. Pernyataan cetak kedua mengembalikan False karena himpunan B berisi unsur-unsur yang tidak ada dalam himpunan A.
A = {4, 1, 3, 5}
B = {6, 0, 4, 1, 5, 0, 3, 5}

print(A.issubset(B))
print(B.issubset(A))
# Contoh Metode set issubset() Python
# Kode ini memeriksa apakah set s2 adalah subset dari set s1 dan mencetak True jika itu adalah.
s1 = {1, 2, 3, 4, 5}
s2 = {4, 5}
print(s2.issubset(s1))
nbts()
