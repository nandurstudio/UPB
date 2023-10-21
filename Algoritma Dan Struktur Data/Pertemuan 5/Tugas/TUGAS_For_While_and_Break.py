# Membuat List Item
items = ["pen", "notebook", "pencil", "lunch box"]

# Jalankan Run a perulangan utk di tampilkan
# List Item
for item in items:
    print(item)

# Deklarasi Index
index = 0

# Isi List
items_len = len(items)

# Jalankan perulangan
# List Item
while index < items_len:
    print(items[index])
index = index + 1


# Python demo perintah break statement

s = "pelitabangsa"
# Menggunakan I perulangan
for letter in s:
    print(letter)
    # brehenti mengulang 'e'
    # atau 's'
    if letter == "e" or letter == "s":
        break

print("bukan dari katagori perulangan")
print()

i = 0

# Menggunakan Perulangan while
while True:
    print(s[i])

    # berhenti mengulang  'e'
    # or 's'
    if s[i] == "e" or s[i] == "s":
        break
    i += 1

print("Out of while loop ")
