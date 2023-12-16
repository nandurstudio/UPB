#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
#include <vector>
#include <fstream>
#include <cstdlib>

using namespace std;

struct Film
{
    string title;
    int price;
    string synopsis;
};

void displayFilmList(Film films[], int size)
{
    cout << "==========================================" << endl;
    cout << setw(3) << "No." << setw(30) << "Judul Film" << setw(15) << "Harga (Rupiah)" << endl;
    cout << "==========================================" << endl;
    for (int i = 0; i < size; ++i)
    {
        cout << setw(3) << i + 1 << setw(30) << films[i].title << setw(15) << films[i].price << endl;
    }
    cout << "==========================================" << endl;
}

int getPaymentChoice()
{
    int choice;
    cout << "==========================================" << endl;
    cout << "        PILIH METODE PEMBAYARAN" << endl;
    cout << "==========================================" << endl;
    cout << "1. Cash" << endl;
    cout << "2. Card" << endl;
    cout << "3. Voucher" << endl;
    cout << "4. QRIS" << endl;
    cout << "Pilih metode pembayaran:" << endl;
    cin >> choice;
    return choice;
}

string getPaymentMethod(int choice)
{
    switch (choice)
    {
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

string generateRandomTransactionID()
{
    string transactionID;
    for (int i = 0; i < 6; ++i)
    {
        transactionID += to_string(rand() % 10);
    }
    return transactionID;
}

int generateRandomSeatNumber(vector<bool> &seats)
{
    int seatNumber;
    do
    {
        seatNumber = rand() % 50 + 1; // Menghasilkan nomor acak antara 1 hingga 50
    } while (seats[seatNumber - 1]);  // Cek ketersediaan kursi

    seats[seatNumber - 1] = true; // Tentukan kursi sebagai sudah diambil
    return seatNumber;
}

void generateQRCode(const string& text) {
    string command = "qrencode -o qrcode.png '" + text + "'"; // Menyimpan QR code sebagai file PNG
    system(command.c_str());
    cout << "QR code telah dihasilkan (lihat qrcode.png)." << endl;
}

void printTicket(const string &filmTitle, const int price, const string &paymentMethod, const string &transactionID, const int seatNumber)
{
    cout << "==========================================" << endl;
    cout << "        TIKET PEMBELIAN" << endl;
    cout << "==========================================" << endl;
    cout << "Judul Film   : " << filmTitle << endl;
    cout << "Harga Tiket  : " << price << " Rupiah" << endl;
    cout << "Metode Bayar : " << paymentMethod << endl;
    cout << "Nomor Transaksi: " << transactionID << endl;
    cout << "Nomor Bangku : " << seatNumber << endl; // Menampilkan nomor bangku
    // Menampilkan QR code dari nomor transaksi
    generateQRCode(transactionID);
    cout << "==========================================" << endl;
}

int main()
{
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

        // Film details remain the same
    };

    srand(static_cast<unsigned>(time(0)));

    vector<bool> seats(50, false); // Array untuk melacak ketersediaan kursi

    do
    {
        cout << "Daftar Film:" << endl;
        displayFilmList(films, 10);

        int filmChoice;
        cout << "Pilih nomor film yang ingin ditonton: ";
        cin >> filmChoice;

        if (filmChoice >= 1 && filmChoice <= 10)
        {
            string paymentMethod;
            int paymentChoice;

            paymentChoice = getPaymentChoice();
            while (paymentChoice < 1 || paymentChoice > 4)
            {
                cout << "Pilihan tidak valid. Pilih metode pembayaran yang benar (1-4):" << endl;
                paymentChoice = getPaymentChoice();
            }
            paymentMethod = getPaymentMethod(paymentChoice);

            string transactionID = generateRandomTransactionID();
            int seatNumber = generateRandomSeatNumber(seats); // Menghasilkan nomor bangku secara acak

            printTicket(films[filmChoice - 1].title, films[filmChoice - 1].price, paymentMethod, transactionID, seatNumber);
        }
        else
        {
            cout << "Nomor film tidak valid. Silakan pilih nomor film dari daftar." << endl;
            continue;
        }

        cout << "Ingin melanjutkan (y/n)? ";
        cin >> continueChoice;
    } while (continueChoice == 'y' || continueChoice == 'Y');

    cout << "Terima kasih telah menggunakan layanan kami. Sampai jumpa!" << endl;

    return 0;
}
