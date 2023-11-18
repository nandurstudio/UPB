#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

// Fungsi untuk mengonversi nilai menjadi format rupiah
std::string formatRupiah(double nilai) {
    std::string formatted = "Rp " + std::to_string(static_cast<long long>(nilai));

    // Menambahkan separator ribuan
    size_t pos = formatted.find_last_of(".");
    while (pos != std::string::npos && pos > 3) {
        formatted.insert(pos - 3, ".");
        pos = formatted.find_last_of(".", pos - 1);
    }

    return formatted;
}

int main() {
    // Deklarasi variabel
    double pemasukanBulanan, pendapatanParuhWaktu, bantuanKeuangan, totalPemasukan, totalPengeluaran = 0.0;
    std::vector<std::pair<std::string, double>> pengeluaranBulanan;

    // Meminta pengguna memasukkan jumlah pemasukan bulanan
    std::cout << "Masukkan jumlah pemasukan bulanan (uang saku): ";
    std::cin >> pemasukanBulanan;

    // Meminta pengguna memasukkan jumlah pendapatan paruh waktu
    std::cout << "Masukkan jumlah pendapatan paruh waktu: ";
    std::cin >> pendapatanParuhWaktu;

    // Meminta pengguna memasukkan jumlah bantuan keuangan
    std::cout << "Masukkan jumlah bantuan keuangan: ";
    std::cin >> bantuanKeuangan;

    // Meminta pengguna memasukkan daftar pengeluaran bulanan
    int jumlahPengeluaran;
    std::cout << "Masukkan jumlah pengeluaran bulanan: ";
    std::cin >> jumlahPengeluaran;

    for (int i = 0; i < jumlahPengeluaran; ++i) {
        std::string kategori;
        double jumlah;
        std::cout << "Masukkan kategori pengeluaran ke-" << (i + 1) << ": ";
        std::cin >> kategori;
        std::cout << "Masukkan jumlah pengeluaran untuk kategori " << kategori << ": ";
        std::cin >> jumlah;
        pengeluaranBulanan.push_back(std::make_pair(kategori, jumlah));
        totalPengeluaran += jumlah;
    }

    // Menghitung total pemasukan
    totalPemasukan = pemasukanBulanan + pendapatanParuhWaktu + bantuanKeuangan;

    // Menghitung saldo akhir
    double saldoAkhir = totalPemasukan - totalPengeluaran;

    // Menampilkan total pemasukan bulanan dalam format rupiah
    std::cout << "\nTotal pemasukan bulanan: " << formatRupiah(totalPemasukan) << std::endl;

    // Menampilkan daftar pengeluaran bulanan dalam format rupiah
    std::cout << "\nDaftar Pengeluaran Bulanan:" << std::endl;
    for (const auto &pengeluaran : pengeluaranBulanan) {
        std::cout << pengeluaran.first << ": " << formatRupiah(pengeluaran.second) << std::endl;
    }

    // Menampilkan saldo akhir dalam format rupiah
    std::cout << "\nSaldo Akhir: " << formatRupiah(saldoAkhir) << std::endl;

    // Menampilkan laporan surplus/defisit
    if (saldoAkhir >= 0) {
        std::cout << "Anda memiliki surplus keuangan." << std::endl;
    } else {
        std::cout << "Anda memiliki defisit keuangan." << std::endl;
    }

    return 0;
}
