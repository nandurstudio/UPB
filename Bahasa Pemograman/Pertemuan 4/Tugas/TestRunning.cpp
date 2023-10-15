#include <iostream>
using namespace std;

int main(){
    cout << "== Program Pembayaran ==" << endl;
    unsigned int total_belanja;

    cout << "Masukkan total belanja: ";
    cin >> total_belanja;

    if(total_belanja > 10000)
        cout << "Selamat! Anda mendapat hadiah" << endl;

    cout << "Terimaksaih sudah berbelanja di toko kami"<< endl;
}