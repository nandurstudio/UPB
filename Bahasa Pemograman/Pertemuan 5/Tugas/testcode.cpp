#include <iostream>
using namespace std;

int main() {
    int tinggi;

    // Meminta pengguna memasukkan tinggi atau panjang persegi
    cout << "Masukkan tinggi : ";
    cin >> tinggi;
  
    // Menampilkan pola bintang segitiga
    cout << "Pola bintang segitiga " << tinggi << ":\n";
    for (int i = 1; i < tinggi; i++) {
        for (int j = 1; j < tinggi - i; j++) {
            cout << " ";
        }
        for(int j = 1; j <=1 * i - 1; j++){
            cout << "* ";
        }
        
        cout << endl;
    }
    return 0;
}