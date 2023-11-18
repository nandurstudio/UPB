#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Fungsi untuk memasukkan pengeluaran
void inputPengeluaran(vector<pair<string, double>>& daftarPengeluaran, double& totalPengeluaran) {
    string pengeluaran;
    double jumlahPengeluaran = 0.0;

    while (true) {
        cout << "Jenis Pengeluaran: ";
        cin >> pengeluaran;
        
        cout << "Jumlah Pengeluaran untuk " << pengeluaran << ": ";
        cin >> jumlahPengeluaran;

        // Menyimpan rincian pengeluaran dalam vektor
        daftarPengeluaran.push_back(make_pair(pengeluaran, jumlahPengeluaran));

        totalPengeluaran += jumlahPengeluaran;

        char tambahLagi;
        cout << "Tambahkan pengeluaran lagi? (y/n): ";
        cin >> tambahLagi;

        if (tambahLagi != 'y') {
            break;
        }
    }
}

int main() {
    string nama, kelas, nomorInduk, mataKuliah, namaDosen;
    double totalPemasukan = 0.0;
    double totalPengeluaran = 0.0;

    cout << "Masukkan nama Anda: ";
    getline(cin >> ws, nama);

    cout << "Masukkan kelas Anda: ";
    getline(cin, kelas);

    cout << "Masukkan nomor induk mahasiswa Anda: ";
    getline(cin, nomorInduk);

    cout << "Masukkan mata kuliah yang Anda ambil: ";
    getline(cin, mataKuliah);

    cout << "Masukkan nama dosen pengampu: ";
    getline(cin, namaDosen);

    // Meminta pengguna untuk memasukkan jumlah pemasukan bulanan
    cout << "Masukkan total pemasukan bulanan, " << nama << " (misalnya uang saku, pendapatan paruh waktu, bantuan keuangan): ";
    cin >> totalPemasukan;

    // Vektor untuk menyimpan rincian pengeluaran
    vector<pair<string, double>> daftarPengeluaran;

    cout << "Masukkan daftar pengeluaran bulanan:\n";
    inputPengeluaran(daftarPengeluaran, totalPengeluaran);

    // Menghitung saldo akhir
    double saldoAkhir = totalPemasukan - totalPengeluaran;

    // Menampilkan laporan keuangan
    cout << "\n** Laporan Keuangan untuk " << nama << " **\n";
    cout << "Kelas: " << kelas << endl;
    cout << "Nomor Induk Mahasiswa: " << nomorInduk << endl;
    cout << "Mata Kuliah: " << mataKuliah << " (Dosen: " << namaDosen << ")" << endl;
    cout << "Total Pemasukan: " << totalPemasukan << endl;
    cout << "Rincian Pengeluaran:\n";

    for (const auto &detail : daftarPengeluaran) {
        cout << detail.first << ": " << detail.second << endl;
    }

    cout << "Total Pengeluaran: " << totalPengeluaran << endl;
    cout << "Saldo Akhir: " << saldoAkhir << endl;

    if (saldoAkhir > 0) {
        cout << "Anda memiliki surplus keuangan.\n";
    } else if (saldoAkhir == 0) {
        cout << "Anda memiliki keseimbangan keuangan.\n";
    } else {
        cout << "Anda memiliki defisit keuangan.\n";
    }

    return 0;
}