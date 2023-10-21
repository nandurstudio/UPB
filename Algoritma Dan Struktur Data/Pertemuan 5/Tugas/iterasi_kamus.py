# Iterasi pada kamus
pembatas = "======================"
print(pembatas)
print("\nDictionary Iteration")
d = dict()
d["xyz"] = 123
d["abc"] = 345
for i in d:
    print("%s %d" % (i, d[i]))

print(pembatas+"\n")
print("Tugas iterasi kamus")
kamus = dict()
# Kamus bisa berisi string
kamus["Rak Sepatu"] = "Sepatu"
kamus["Rak Baju"] = "Baju"
kamus["Rak Buku"] = "Buku"
kamus["Rak Piring"] = "Piring"
kamus["Rak Lemari"] = "Pakaian"
for i in kamus:
    #Bagian ini adalah format string
    print("%s berisi %s" % (i, kamus[i]))
