//==============================================================//
// Nama         : Nandang Duryat - 312310233                    //
// Kelas        : TI.23.C4                                      //
// Mata Kuliah  : Bahasa Pemrograman                            //
// Dosen        : Hemdani Rahendra Herlianto, S.Kom., M.T.I.    //
// Kampus       : Universitas Pelita Bangsa                     //
// Tugas        : Pertemuan 5 - Perulangan (loop)               //
// Tanggal      : Minggu, 22/10/23                              //
//==============================================================//
// Proyek       : Aplikasi untuk menggambar luas persegi dan segitiga v.1.0.0
// Features     : Validasi input, generate terus-menerus samapai user puas.

#include <iostream>
#include <string>
#include <limits>    // Include library limits untuk mengakses numeric_limits
#include <windows.h> // WinApi header

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

using namespace std; // Menggunakan namespace std untuk cout, cin, dan endl

// Warna output console khusus Windows
int biru = 10;
int merah = 12;
int kuning = 14;
int putih = 15;

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

// Main method
int main()
{
    string pembatas = "====================================================";
    char pilihan; // Variabel untuk menyimpan pilihan pengguna (S/s untuk segitiga, P/p untuk persegi)
    cout << pembatas << "\n";
    // Panggil fungsi untuk mencetak Identitas
    identitas("Nandang Duryat");
    do
    {
        int tinggi; // Variabel untuk menyimpan tinggi segitiga atau panjang sisi persegi
        int lebar;  // Variabel untuk menyimpan lebar sisi persegi panjang
        cout << pembatas << "\n";
        SetConsoleTextAttribute(hConsole, biru);
        cout << "Pilih jenis pola (S untuk segitiga, P untuk persegi): ";
        cin >> pilihan;
        SetConsoleTextAttribute(hConsole, putih);

        if (pilihan == 'S' || pilihan == 's')
        {
            // Validasi input tinggi segitiga
            do
            {
                cout
                    << pembatas
                    << "\n";
                SetConsoleTextAttribute(hConsole, biru);
                cout << "Masukkan tinggi segitiga: ";
                SetConsoleTextAttribute(hConsole, putih);
                if (!(cin >> tinggi))
                {
                    cin.clear();                                         // Reset status error cin
                    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Membersihkan input yang salah
                    SetConsoleTextAttribute(hConsole, merah);
                    cout << "Input tidak valid. Masukkan angka."
                         << "  <-- Validasi input!" << endl;
                    SetConsoleTextAttribute(hConsole, putih);
                }
                cout
                    << pembatas
                    << "\n\n";
            } while (tinggi <= 0);

            // Loop untuk mencetak segitiga
            for (int i = 1; i <= tinggi; i++)
            {
                // Loop untuk mencetak spasi sebelum bintang
                for (int j = 1; j <= tinggi - i; j++)
                {
                    cout << " ";
                }
                // Loop untuk mencetak bintang
                for (int k = 1; k <= 2 * i - 1; k++)
                {
                    cout << "*";
                }
                cout << endl;
            }
        }
        else if (pilihan == 'P' || pilihan == 'p')
        {
            cout << pembatas
                 << "\n";
            // Validasi input panjang sisi persegi
            do
            {
                SetConsoleTextAttribute(hConsole, biru);
                cout << "Masukkan panjang sisi persegi: ";
                SetConsoleTextAttribute(hConsole, putih);
                if (!(cin >> tinggi))
                {
                    cin.clear();                                         // Reset status error cin
                    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Membersihkan input yang salah
                    SetConsoleTextAttribute(hConsole, merah);
                    cout << "Input tidak valid. Masukkan angka."
                         << "  <-- Validasi input!" << endl;
                    SetConsoleTextAttribute(hConsole, putih);
                }
            } while (tinggi <= 0);

            // Validasi input lebar sisi persegi
            do
            {
                SetConsoleTextAttribute(hConsole, biru);
                cout << "Masukkan lebar sisi persegi  : ";
                SetConsoleTextAttribute(hConsole, putih);
                if (!(cin >> lebar))
                {
                    cin.clear();                                         // Reset status error cin
                    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Membersihkan input yang salah
                    SetConsoleTextAttribute(hConsole, merah);
                    cout << "Input tidak valid. Masukkan angka."
                         << "  <-- Validasi input!" << endl;
                    SetConsoleTextAttribute(hConsole, putih);
                }
            } while (lebar <= 0);

            cout << pembatas
                 << "\n\n";
            // Loop untuk mencetak persegi panjang dengan pola bintang
            for (int i = 0; i < tinggi; i++)
            {
                for (int j = 0; j < lebar; j++)
                {
                    cout << "*  ";
                }
                cout << endl;
            }
        }
        else
        {
            SetConsoleTextAttribute(hConsole, merah);
            cout << "Pilihan tidak valid."
                 << "  <-- Validasi input!" << endl;
            SetConsoleTextAttribute(hConsole, putih);
        }
        cout << "\n"
             << pembatas
             << "\n";
        // Minta input lagi
        SetConsoleTextAttribute(hConsole, biru);
        cout << "Ingin membuat pola lagi? (Y/y untuk ya, tekan tombol lain untuk tidak): ";
        cin >> pilihan;
        SetConsoleTextAttribute(hConsole, putih);
    } while (pilihan == 'Y' || pilihan == 'y');
    cout << pembatas
         << "\n";
    cout << "Terima kasih. Program selesai." << endl;
    // Watermark
    string base64Encoded = "Q3JhZnRlZCB3aXRoIGxvdmUgLSBOYW5kdXIgU3R1ZGlv";
    string decodedText = fromBase64(base64Encoded);
    // pick the colorattribute k you want
    SetConsoleTextAttribute(hConsole, biru);
    cout << "===== " << decodedText << " =====" << endl;
    SetConsoleTextAttribute(hConsole, putih);

    return 0;
}

// Definisi fungsi identitas (hapus string nama_mahasiswa)
void identitas(const string nama_mahasiswa)
{
    string kelas = "TI.23.C4";
    string nik = "312310233";
    string makul = "Bahasa Pemograman";
    string bahasa = "C++";
    string pertemuan = "Pertemuan ke-5 Perulangan (Loop)";
    string dosen = "Hemdani Rahendra Herlianto, S.Kom., M.T.I.";
    string universitas = "Universitas Pelita Bangsa";
    SetConsoleTextAttribute(hConsole, kuning);
    cout << "Nama       : " << nama_mahasiswa << "\n"; // Gunakan parameter yang diberikan
    cout << "Kelas      : " << kelas << "\n";
    cout << "NIK        : " << nik << "\n";
    cout << "Mata Kuliah: " << makul << "\n";
    cout << "Bahasa     : " << bahasa << "\n";
    cout << "Pertemuan  : " << pertemuan << "\n";
    cout << "Dosen      : " << dosen << "\n";
    cout << "Universitas: " << universitas << "\n";
    SetConsoleTextAttribute(hConsole, putih);
}