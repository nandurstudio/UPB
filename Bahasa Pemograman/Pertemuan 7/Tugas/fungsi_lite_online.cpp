//==============================================================//
// Nama         : Nandang Duryat - 312310233                    //
// Kelas        : TI.23.C4                                      //
// Mata Kuliah  : Bahasa Pemrograman                            //
// Dosen        : Hemdani Rahendra Herlianto, S.Kom., M.T.I.    //
// Kampus       : Universitas Pelita Bangsa                     //
// Tugas        : Pertemuan 7 - Fungsi (function)               //
// Tanggal      : Minggu, 05/11/23                              //
//==============================================================//
// Proyek       : Aplikasi Peminjaman Buku v.1.0.0
// Features     : Advanced features available for windows only!
#include <iostream>
#include <string>
#include <limits>    // Include library limits untuk mengakses numeric_limits
#include <sstream>

using namespace std; // Menggunakan namespace std untuk cout, cin, dan endl

string fromBase64(const string &base64)
{
    string base64chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    string decodedResult = "";

    int val = 0, valb = -8;
    for (char c : base64)
    {
        if (isalnum(c))
        {
            val = (val << 6) + base64chars.find(c);
            valb += 6;
            if (valb >= 0)
            {
                decodedResult.push_back(char((val >> valb) & 0xFF));
                valb -= 8;
            }
        }
    }

    return decodedResult;
}

// Deklarasi fungsi identitas
void identitas(const string nama_mahasiswa);

struct Book
{
    string num;
    string title;
    string author;
    int year;
    bool isAvailable;
};

void displayMenu()
{
    cout << "========= Perpustakaan Nandur Studio ========" << endl;
    cout << "1. Pinjam Buku" << endl;
    cout << "2. Kembalikan Buku" << endl;
    cout << "3. Lihat Daftar Buku" << endl;
    cout << "4. Keluar" << endl;
    cout << "=============================================" << endl;
}

void userInput(string input)
{
    cout << input;
}

void invalidInput(string msg)
{
    cout << msg << endl;
}

void validInput(string msg)
{
    cout << msg << endl;
}

int validateBookNumber(int maxBooks)
{
    int bookNumber;
    while (true)
    {
        stringstream input;
        input << "Masukkan nomor buku (1-" << maxBooks << "): ";
        userInput(input.str());
        cin >> bookNumber;
        if (bookNumber >= 1 && bookNumber <= maxBooks)
        {
            return bookNumber;
        }
        else
        {
            invalidInput("Nomor buku tidak valid. Silakan coba lagi.");
        }
    }
}

void borrowBook(Book books[], int bookCount)
{
    cout << "Daftar Buku yang Tersedia:" << endl;
    for (int i = 0; i < bookCount; i++)
    {
        if (books[i].isAvailable)
        {
            cout << i + 1 << ". " << books[i].title << " oleh " << books[i].author << " (Tahun " << books[i].year << ")" << endl;
        }
    }

    int bookNumber = validateBookNumber(bookCount);

    if (books[bookNumber - 1].isAvailable)
    {
        cout << "Anda telah meminjam buku: " << books[bookNumber - 1].title << endl;
        books[bookNumber - 1].isAvailable = false;
    }
    else
    {
        invalidInput("Buku ini sudah dipinjam. Silakan coba buku lain.");
    }
}

void returnBook(Book books[], int bookCount)
{
    cout << "Buku yang Anda pinjam:" << endl;
    for (int i = 0; i < bookCount; i++)
    {
        if (!books[i].isAvailable)
        {
            cout << i + 1 << ". " << books[i].title << " oleh " << books[i].author << " (Tahun " << books[i].year << ")" << endl;
        }
    }

    int bookNumber = validateBookNumber(bookCount);

    if (!books[bookNumber - 1].isAvailable)
    {
        cout << "Anda telah mengembalikan buku: " << books[bookNumber - 1].title << endl;
        books[bookNumber - 1].isAvailable = true;
    }
    else
    {
        invalidInput("Buku ini tidak dalam daftar peminjaman Anda. Silakan coba lagi.");
    }
}

void borrowBookByNum(Book books[], int bookCount)
{
    int bookNum;
    // Validasi input angka
    do
    {
        cout << "Masukkan nomor buku yang ingin Anda pinjam: ";
        if (!(cin >> bookNum))
        {
            cin.clear();                                         // Reset status error cin
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Membersihkan input yang salah
            stringstream buf;
            buf << "Input tidak valid. Masukkan angka."
                << "  <-- Validasi input!" << endl;
            invalidInput(buf.str());
        }
    } while (bookNum <= 0);
    string pilihan;
    switch (bookNum)
    {
    case 1:
        pilihan = "a";
        break;
    case 2:
        pilihan = "b";
        break;
    case 3:
        pilihan = "c";
        break;
    case 4:
        pilihan = "d";
        break;
    case 5:
        pilihan = "e";
        break;
    default:
        invalidInput("Pilihan tidak valid. Silakan coba lagi.");
        break;
    }

    bool found = false;
    for (int i = 0; i < bookCount; i++)
    {
        if (books[i].isAvailable && books[i].num == pilihan)
        {
            found = true;
            stringstream buf;
            buf << "Anda telah meminjam buku: " << books[i].title << endl;
            validInput(buf.str());
            books[i].isAvailable = false;
            break;
        }
    }

    if (!found)
    {
        stringstream buffer;
        buffer << "Buku dengan nama '" << bookNum << "' tidak ditemukan atau sudah dipinjam. Silakan coba lagi." << endl;
        invalidInput(buffer.str());
    }
}

void returnBookByNum(Book books[], int bookCount)
{
    int bookNum;
    // Validasi input angka
    do
    {
        cout << "Masukkan nomor buku yang ingin Anda kembalikan: ";
        if (!(cin >> bookNum))
        {
            cin.clear();                                         // Reset status error cin
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Membersihkan input yang salah
            stringstream buf;
            buf << "Input tidak valid. Masukkan angka."
                << "  <-- Validasi input!" << endl;
            invalidInput(buf.str());
        }
    } while (bookNum <= 0);
    string pilihan;
    switch (bookNum)
    {
    case 1:
        pilihan = "a";
        break;
    case 2:
        pilihan = "b";
        break;
    case 3:
        pilihan = "c";
        break;
    case 4:
        pilihan = "d";
        break;
    case 5:
        pilihan = "e";
        break;
    default:
        invalidInput("Pilihan tidak valid. Silakan coba lagi.");
        break;
    }

    bool found = false;
    for (int i = 0; i < bookCount; i++)
    {
        if (!books[i].isAvailable && books[i].num == pilihan)
        {
            found = true;
            stringstream buf;
            buf << "Anda telah mengembalikan buku: " << books[i].title << endl;
            validInput(buf.str());
            books[i].isAvailable = true;
            break;
        }
    }

    if (!found)
    {
        stringstream buffer;
        buffer << "Buku dengan nama '" << bookNum << "' tidak ditemukan atau sudah dipinjam. Silakan coba lagi." << endl;
        invalidInput(buffer.str());
    }
}

void listBooks(Book books[], int bookCount)
{
    cout << "=============================================" << endl;
    cout << "Daftar Buku:" << endl;
    for (int i = 0; i < bookCount; i++)
    {
        cout << i + 1 << ". " << books[i].title << " oleh " << books[i].author << " (Tahun " << books[i].year << ")";
        if (books[i].isAvailable)
        {
            validInput(" - Tersedia");
        }
        else
        {
            invalidInput(" - Dipinjam");
        }
    }
}

void watermark()
{
    // Watermark
    string base64Encoded = "Q3JhZnRlZCB3aXRoIGxvdmUgLSBOYW5kdXIgU3R1ZGlv";
    string decodedText = fromBase64(base64Encoded);
    cout << "===== " << decodedText << " =====" << endl;
}

int main()
{
    const int maxBooks = 5;
    Book library[maxBooks] = {
        {"a", "The Pragmatic Programmer: Your Journey to Mastery", "Andrew Hunt, David Thomas", 1999, true},
        {"b", "Head First Java", "Kathy Sierra, Bert Bates", 2003, true},
        {"c", "JavaScript: The Good Parts", "Douglas Crockford", 2008, true},
        {"d", "Fluent Python", "Luciano Ramalho", 2015, true},
        {"e", "Clean Code: A Handbook of Agile Software Craftsmanship", "Robert C. Martin", 2008, true}};

    int choice;

    // Panggil fungsi untuk mencetak Identitas
    identitas("Nandang Duryat");
    listBooks(library, maxBooks);

    do
    {
        displayMenu();
        // Validasi input angka
        do
        {
            cout << "Pilihan Anda: ";
            if (!(cin >> choice))
            {
                cin.clear();                                         // Reset status error cin
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Membersihkan input yang salah
                stringstream buf;
                buf << "Input tidak valid. Masukkan angka."
                    << "  <-- Validasi input!" << endl;
                invalidInput(buf.str());
            }
        } while (choice <= 0);

        switch (choice)
        {
        case 1:
            borrowBookByNum(library, maxBooks);
            listBooks(library, maxBooks);
            break;
        case 2:
            returnBookByNum(library, maxBooks);
            listBooks(library, maxBooks);
            break;
        case 3:
            listBooks(library, maxBooks);
            break;
        case 4:
            cout << "Terima kasih telah menggunakan layanan kami. Sampai jumpa!" << endl;
            watermark();
            break;
        default:
            invalidInput("Pilihan tidak valid. Silakan coba lagi.");
            break;
        }
    } while (choice != 4);

    return 0;
}

// Definisi fungsi identitas (hapus string nama_mahasiswa)
void identitas(const string nama_mahasiswa)
{
    string kelas = "TI.23.C4";
    string nik = "312310233";
    string makul = "Bahasa Pemograman";
    string bahasa = "C++";
    string pertemuan = "Pertemuan ke-7 Fungsi (function)";
    string dosen = "Hemdani Rahendra Herlianto, S.Kom., M.T.I.";
    string universitas = "Universitas Pelita Bangsa";
    cout << "Nama       : " << nama_mahasiswa << "\n"; // Gunakan parameter yang diberikan
    cout << "Kelas      : " << kelas << "\n";
    cout << "NIK        : " << nik << "\n";
    cout << "Mata Kuliah: " << makul << "\n";
    cout << "Bahasa     : " << bahasa << "\n";
    cout << "Pertemuan  : " << pertemuan << "\n";
    cout << "Dosen      : " << dosen << "\n";
    cout << "Universitas: " << universitas << "\n";
}
