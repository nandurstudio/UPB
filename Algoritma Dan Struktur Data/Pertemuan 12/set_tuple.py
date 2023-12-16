#set() pada tuple
# deklarasi tuple
tup1 = (3, 4, 1, 4, 5)

# cetak iterasi sebelum konversi
print("The tuple before conversion is : " + str(tup1))

# Iterables after conversion are
# notice distinct and elements
print("The tuple after conversion is : " + str(set(tup1)))