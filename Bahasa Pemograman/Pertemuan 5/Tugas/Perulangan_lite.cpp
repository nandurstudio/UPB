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
#include <limits> // Include library limits untuk mengakses numeric_limits

using namespace std; // Menggunakan namespace std untuk cout, cin, dan endl

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
        cout << "Pilih jenis pola (S untuk segitiga, P untuk persegi): ";
        cin >> pilihan;

        if (pilihan == 'S' || pilihan == 's')
        {
            // Validasi input tinggi segitiga
            do
            {
                cout
                    << pembatas
                    << "\n";
                cout << "Masukkan tinggi segitiga: ";
                if (!(cin >> tinggi))
                {
                    cin.clear();                                         // Reset status error cin
                    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Membersihkan input yang salah
                    cout << "Input tidak valid. Masukkan angka."
                         << "  <-- Validasi input!" << endl;
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
                cout << "Masukkan panjang sisi persegi: ";
                if (!(cin >> tinggi))
                {
                    cin.clear();                                         // Reset status error cin
                    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Membersihkan input yang salah
                    cout << "Input tidak valid. Masukkan angka."
                         << "  <-- Validasi input!" << endl;
                }
            } while (tinggi <= 0);

            // Validasi input lebar sisi persegi
            do
            {
                cout << "Masukkan lebar sisi persegi  : ";
                if (!(cin >> lebar))
                {
                    cin.clear();                                         // Reset status error cin
                    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Membersihkan input yang salah
                    cout << "Input tidak valid. Masukkan angka."
                         << "  <-- Validasi input!" << endl;
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
            cout << "Pilihan tidak valid."
                 << "  <-- Validasi input!" << endl;
        }
        cout << "\n"
             << pembatas
             << "\n";
        // Minta input lagi
        cout << "Ingin membuat pola lagi? (Y/y untuk ya, tekan tombol lain untuk tidak): ";
        cin >> pilihan;
    } while (pilihan == 'Y' || pilihan == 'y');
    cout << pembatas
         << "\n";
    cout << "Terima kasih. Program selesai." << endl;
    // Watermark
    cout << "===== "
         << "Made With Love | Nandang Duryat "
         << " ====="
         << endl;

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
    cout << "Nama       : " << nama_mahasiswa << "\n"; // Gunakan parameter yang diberikan
    cout << "Kelas      : " << kelas << "\n";
    cout << "NIK        : " << nik << "\n";
    cout << "Mata Kuliah: " << makul << "\n";
    cout << "Bahasa     : " << bahasa << "\n";
    cout << "Pertemuan  : " << pertemuan << "\n";
    cout << "Dosen      : " << dosen << "\n";
    cout << "Universitas: " << universitas << "\n";
}