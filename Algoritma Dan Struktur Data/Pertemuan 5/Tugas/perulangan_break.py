# Python demo perintah break statement
pemisah = "=============================="
print(pemisah)
print("Contoh tugas perulangan")
print(pemisah)
s = "pelitabangsa"
# Menggunakan I perulangan
for letter in s:
    print(letter)
    # brehenti mengulang 'e'
    # atau 's'
    if letter == "e" or letter == "s":
        break

print("bukan dari katagori perulangan")

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
# =======================================================
print(pemisah)
print("Tugas perulangan break pakai for")
print(pemisah)
kata = "Aku adalah anak UPB"
# Menggunakan perulangan for
for huruf in kata:
    print(huruf)
    # brehenti mengulang ketika bertemu 'n'
    # atau bertemu 'p'
    if huruf == "n" or huruf == "p":
        break
print("Out of while loop ")

# Menggunakan perulangan while
# Deklarasikan dulu index x
print(pemisah)
print("Tugas perulangan break pakai while")
print(pemisah)
x = 0
quotes = "Aku bangga menjadi bagian dari UPB"
while True:
    print(quotes[x])

    # berhenti mengulang  'e'
    # or 's'
    if quotes[x] == "e" or quotes[x] == "p":
        break
    x += 1
print("bukan dari katagori perulangan")
