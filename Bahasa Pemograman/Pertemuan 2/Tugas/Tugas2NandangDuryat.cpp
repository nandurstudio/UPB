#include <iostream>

int main() {
    double angka1, angka2;
    char operand;

    // Meminta pengguna memasukkan dua angka
    std::cout << "Masukkan angka pertama: ";
    std::cin >> angka1;

    std::cout << "Masukkan angka kedua: ";
    std::cin >> angka2;

    std::cout << "Masukkan operand (+, -, *, /): ";
    std::cin >> operand;

    double hasil;

    // Menghitung hasil berdasarkan operand yang dimasukkan
    switch (operand) {
        case '+':
            hasil = angka1 + angka2;
            break;
        case '-':
            hasil = angka1 - angka2;
            break;
        case '*':
            hasil = angka1 * angka2;
            break;
        case '/':
            // Menghindari pembagian oleh nol
            if (angka2 != 0) {
                hasil = angka1 / angka2;
            } else {
                std::cout << "Error: Pembagian oleh nol." << std::endl;
                return 1; // Keluar dengan kode kesalahan
            }
            break;
        default:
            std::cout << "Error: Operand tidak valid." << std::endl;
            return 1; // Keluar dengan kode kesalahan
    }

    // Menampilkan hasil operasi
    std::cout << "Hasil operasi: " << angka1 << " " << operand << " " << angka2 << " = " << hasil << std::endl;

    return 0;
}


