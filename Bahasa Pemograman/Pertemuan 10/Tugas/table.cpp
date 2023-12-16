#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Film {
    string title;
    int price;
    string synopsis;
};

void displayFilmList(Film films[], int size) {
    cout << "==========================================" << endl;
    cout << setw(3) << "No." << setw(30) << "Judul Film" << setw(15) << "Harga (Rupiah)" << endl;
    cout << "==========================================" << endl;
    for (int i = 0; i < size; ++i) {
        cout << setw(3) << i + 1 << setw(30) << films[i].title << setw(15) << films[i].price << endl;
    }
    cout << "==========================================" << endl;
}

void displayPaymentMethods() {
    cout << "======================================" << endl;
    cout << "Pilihan Metode Pembayaran" << endl;
    cout << "======================================" << endl;
    cout << "1. Cash" << endl;
    cout << "2. Card" << endl;
    cout << "3. Voucher" << endl;
    cout << "4. QRIS" << endl;
    cout << "======================================" << endl;
}

string getPaymentMethod(int choice) {
    switch (choice) {
        case 1:
            return "Cash";
        case 2:
            return "Card";
        case 3:
            return "Voucher";
        case 4:
            return "QRIS";
        default:
            return "Invalid";
    }
}

int main() {
    char continueChoice;
    Film films[10] = {
        {"The Matrix", 15000, "Seorang hacker bernama Neo menemukan bahwa dunia yang dia kenal sebenarnya hanyalah simulasi virtual yang diciptakan oleh mesin. Dia bergabung dengan kelompok pemberontak untuk melawan penguasa mesin tersebut."},
        {"Hackers", 12000, "Sebuah kelompok hacker muda terlibat dalam konspirasi yang melibatkan pencurian data dan intrik di dunia komputer."},
        {"WarGames", 13000, "Seorang remaja hacker secara tidak sengaja memulai simulasi perang nuklir dunia nyata dan harus mencari cara untuk menghentikannya sebelum terlambat."},
        {"Sneakers", 14000, "Sebuah tim ahli keamanan komputer dipekerjakan untuk mencuri suatu alat yang dapat membahayakan keamanan nasional."},
        {"Tron", 12500, "Seorang pemrogram komputer terseret ke dalam dunia digital yang aneh dan berbahaya, di mana dia harus bertempur melawan kekuatan jahat yang mengendalikan dunia digital tersebut."},
        {"Blackhat", 16000, "Seorang hacker dipaksa untuk bekerja sama dengan agen pemerintah untuk menangkap seorang penjahat cyber yang memanfaatkan kelemahan keamanan dalam jaringan komputer global."},
        {"Takedown", 13500, "Berbasis pada kisah nyata Kevin Mitnick, seorang hacker paling dicari di dunia, dan upaya pihak berwenang untuk menangkapnya."},
        {"Ghost in the Shell", 15500, "Di masa depan, seorang polisi cyborg memimpin tim khusus untuk menangkap hacker yang memanipulasi pikiran manusia."},
        {"Who Am I", 14500, "Seorang pemula di dunia hacking secara tak sengaja menjadi terkenal setelah menantang grup hacker lainnya."},
        {"The Social Network", 17000, "Film ini mengisahkan tentang penciptaan Facebook oleh Mark Zuckerberg dan kontroversi di balik perkembangan situs jaringan sosial terbesar di dunia."}
    
        // Film lainnya
    };

    do {
        cout << "Daftar Film:" << endl;
        displayFilmList(films, 10);

        int filmChoice;
        cout << "Pilih nomor film yang ingin ditonton: ";
        cin >> filmChoice;

        if (filmChoice >= 1 && filmChoice <= 10) {
            cout << "Anda memilih: " << films[filmChoice - 1].title << " - Harga: " << films[filmChoice - 1].price << " Rupiah" << endl;
            cout << "Sinopsis: " << films[filmChoice - 1].synopsis << endl;

            displayPaymentMethods();
            int paymentChoice;
            cout << "Pilih metode pembayaran: ";
            cin >> paymentChoice;

            string chosenPayment = getPaymentMethod(paymentChoice);
            cout << "Metode pembayaran: " << chosenPayment << endl;
        } else {
            cout << "Nomor film tidak valid." << endl;
            continue;
        }

        cout << "Ingin melanjutkan (y/n)? ";
        cin >> continueChoice;
    } while (continueChoice == 'y' || continueChoice == 'Y');

    cout << "Terima kasih telah menggunakan layanan kami. Sampai jumpa!" << endl;

    return 0;
}
