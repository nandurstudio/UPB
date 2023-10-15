suka_pedas = input("Suka pedas (Y/T)? ")
tanggal_tua = input("Tanggal tua (Y/T)? ")

rekomendasi_menu = ""

if suka_pedas == "Y":
    if tanggal_tua == "Y":
        rekomendasi_menu = "Sate Ayam Pedas"
    else:
        rekomendasi_menu = "Nasi Pedas Iga Sapi"
else:
    if tanggal_tua == "Y":
        rekomendasi_menu = "Nasi Kecap Manis"
    else:
        rekomendasi_menu = "Ayam Goreng Crispy"

if rekomendasi_menu:
    print("Rekomendasi menu: " + rekomendasi_menu)
else:
    print("Maaf, kami tidak memiliki rekomendasi menu untuk preferensi Anda saat ini.")
