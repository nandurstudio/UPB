// Dibuat oleh Nandang Duryat - 312310233 (TI.23.C4) Universitas Pelita Bangsa
#include <iostream> // Menginclude pustaka input-output standar C++
#include <iomanip> // Menginclude pustaka untuk mengatur format output
#include <string> // Menginclude pustaka string untuk mengolah data string
using namespace std; // Menggunakan namespace std untuk mengakses objek dan fungsi C++ standar

/* Buatlah algoritma dan program dalam bahasa C++ untuk Studi Kasus berikut :
Sebuah perusahaan memberikan hadiah dan bonus pada karyawan yang jam kerjanya di atas 40 jam per-minggu dan tidak pernah terlambat dalam satu bulan.
Karyawan yang jumlah jamnya di atas 40 jam per-minggu mendapat bonus sebesar per kelebihan jamnya, dan bila dia juga tidak pernah terlambat akan mendapat hadiah berupa 10% dari gaji pokoknya.
 
Catatan:
Pastikan untuk menyertakan komentar dalam kode Anda untuk menjelaskan setiap langkah penting.
Selalu validasi input pengguna untuk memastikan bahwa mereka memasukkan data yang sesuai. */

int main() {
    // Deklarasi variabel
    string namaKaryawan, nik, department, dosen, kelas, tugas, nama, nim;
    double gajiPokok, jamKerja[4], bonus, hadiah; // jamKerja[4] yaitu untuk membuat variable sama berulang tanpa LOOP
    char terlambat; // Menggunakan char untuk menyimpan "Y" atau "N"
    nama = "Nandang Duryat";
    nim = "312310233";
    dosen = "Hemdani Rahendra Herlianto, S.Kom., M.T.I.";
    kelas = "TI.23.C4";
    tugas = "Percabangan Pertemuan 4";

    // Header Output
    cout << "=========================================\n";
    cout << "Nama : " << nama << " - " << nim << endl;
    cout << "Kelas: " << kelas << endl;
    cout << "Tugas: " << tugas << endl;
    cout << "Dosen: " << dosen << endl;

    // Ascii ART
    cout << "=========================================\n";
    cout << "  N   N   A   N   N DDDD   U   U  RRRR  " << endl;
    cout << "  NN  N  A A  NN  N D   D  U   U  R   R " << endl;
    cout << "  N N N A   A N N N D   D  U   U  R   R " << endl;
    cout << "  N  NN AAAAA N  NN D   D  U   U  RRRR  " << endl;
    cout << "  N   N A   A N   N D   D  U   U  R  R  " << endl;
    cout << "  N   N A   A N   N DDDD    UUU   R   R " << endl;
    cout << "=========================================\n";
    cout << "\n==== Silakan masukkan data karyawan! ====\n";

    // Meminta input pengguna
    cout << "Nama Karyawan      : ";
    getline(cin, namaKaryawan);
    cout << "NIK Karyawan       : ";
    getline(cin, nik);
    cout << "Department Karyawan: ";
    getline(cin, department);
    cout << "Gaji pokok karyawan: Rp ";
    cin >> gajiPokok;

    cout << "\n= Masukkan jumlah jam kerja karyawan! =\n";
    // Meminta jumlah jam kerja per minggu untuk 4 minggu
    cout << "- Minggu 1: ";
    cin >> jamKerja[0];
    cout << "- Minggu 2: ";
    cin >> jamKerja[1];
    cout << "- Minggu 3: ";
    cin >> jamKerja[2];
    cout << "- Minggu 4: ";
    cin >> jamKerja[3];
    
    cout << "Apakah karyawan pernah terlambat selama satu bulan?\n(Y untuk Ya, N untuk Tidak): ";
    cin >> terlambat;

    // Validasi input
    if (gajiPokok < 0) {
        cout << "Gaji pokok harus positif." << endl;
        return 1; // Menghentikan program dengan kode kesalahan
    }

    // Menghitung total jam kerja selama satu bulan
    double totalJamKerja = jamKerja[0] + jamKerja[1] + jamKerja[2] + jamKerja[3];

    // Hitung bonus jika total jam kerja selama satu bulan melebihi 160 jam
    if (totalJamKerja > 160) {
        bonus = (totalJamKerja - 160) * (gajiPokok / 40); // Bonus sebesar per kelebihan jamnya
    } else {
        bonus = 0;
    }

    // Hitung hadiah jika tidak pernah terlambat
    if (terlambat == 'N' || terlambat == 'n') {
        hadiah = 0.1 * gajiPokok; // Hadiah 10% dari gaji pokok
    } else {
        hadiah = 0;
    }

    // Hitung total pendapatan
    double totalPendapatan = gajiPokok + bonus + hadiah;

    // Menampilkan hasil
    cout << "\n====== Rincian Pendapatan Karyawan ======\n";
    cout << "Nama Karyawan      : " << namaKaryawan << endl;
    cout << "NIK                : " << nik << endl;
    cout << "Department         : " << department << endl;

    cout << fixed << setprecision(2); // Menampilkan angka desimal dengan 2 digit di belakang koma
    cout << "Gaji Pokok         : Rp " << gajiPokok << endl;
    cout << "Bonus              : Rp " << bonus << endl;
    cout << "Hadiah             : Rp " << hadiah << endl;
    
    cout << "\n============= Take Home Pay =============\n";
    cout << "Total Pendapatan   : Rp " << totalPendapatan << endl;
    cout << "------------------------------------------\n";

    return 0; // Keluar dari program tanpa kesalahan
}
