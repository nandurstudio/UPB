#include <iostream>
#include <vector>

using namespace std;

// Fungsi untuk mengisi matriks dengan bilangan bulat
void isiMatriks(vector<vector<int>> &matriks)
{
    for (int i = 0; i < matriks.size(); i++)
    {
        for (int j = 0; j < matriks[0].size(); j++)
        {
            cin >> matriks[i][j];
        }
    }
}

// Fungsi untuk menampilkan matriks
void tampilkanMatriks(const vector<vector<int>> &matriks)
{
    for (int i = 0; i < matriks.size(); i++)
    {
        for (int j = 0; j < matriks[0].size(); j++)
        {
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }
}

// Fungsi untuk menghitung jumlah semua bilangan dalam matriks
int hitungJumlahMatriks(const vector<vector<int>> &matriks)
{
    int jumlah = 0;
    for (int i = 0; i < matriks.size(); i++)
    {
        for (int j = 0; j < matriks[0].size(); j++)
        {
            jumlah += matriks[i][j];
        }
    }
    return jumlah;
}

// Fungsi untuk menghitung rata-rata bilangan dalam matriks
double hitungRataRataMatriks(const vector<vector<int>> &matriks)
{
    int jumlah = hitungJumlahMatriks(matriks);
    return static_cast<double>(jumlah) / (matriks.size() * matriks[0].size());
}

// Fungsi untuk mengganti bilangan genap dengan 'x'
void gantiGenapDenganX(vector<vector<int>> &matriks)
{
    for (int i = 0; i < matriks.size(); i++)
    {
        for (int j = 0; j < matriks[0].size(); j++)
        {
            if (matriks[i][j] % 2 == 0)
            {
                matriks[i][j] = 'x';
            }
        }
    }
}

// Fungsi untuk mengganti bilangan kelipatan 3 dengan 't'
void gantiKelipatan3DenganT(vector<vector<int>> &matriks)
{
    for (int i = 0; i < matriks.size(); i++)
    {
        for (int j = 0; j < matriks[0].size(); j++)
        {
            if (matriks[i][j] % 3 == 0)
            {
                matriks[i][j] = 't';
            }
        }
    }
}

// Fungsi untuk menghitung transpose matriks
vector<vector<int>> transposeMatriks(const vector<vector<int>> &matriks)
{
    int panjang = matriks.size();
    int lebar = matriks[0].size();
    vector<vector<int>> transpose(lebar, vector<int>(panjang));
    for (int i = 0; i < panjang; i++)
    {
        for (int j = 0; j < lebar; j++)
        {
            transpose[j][i] = matriks[i][j];
        }
    }
    return transpose;
}

int main()
{
    int panjang, lebar;

    cout << "Inputkan Panjang Matriks: ";
    cin >> panjang;
    cout << "Inputkan Lebar Matriks: ";
    cin >> lebar;

    vector<vector<int>> matriks(panjang, vector<int>(lebar));

    cout << "Inputkan elemen-elemen matriks:" << endl;
    isiMatriks(matriks);

    cout << "Matriks yang telah diinput:" << endl;
    tampilkanMatriks(matriks);

    char pilihan;
    cout << "Pilihan Perhitungan (a: Jumlah, b: Rata-rata, c: Ganti Genap, d: Ganti Kelipatan 3, e: Transpose): ";
    cin >> pilihan;

    switch (pilihan)
    {
    case 'a':
        cout << "Jumlah semua bilangan dalam matriks: " << hitungJumlahMatriks(matriks) << endl;
        break;
    case 'b':
        cout << "Rata-rata semua bilangan dalam matriks: " << hitungRataRataMatriks(matriks) << endl;
        break;
    case 'c':
        gantiGenapDenganX(matriks);
        cout << "Matriks setelah mengganti bilangan genap dengan 'x':" << endl;
        tampilkanMatriks(matriks);
        break;
    case 'd':
        gantiKelipatan3DenganT(matriks);
        cout << "Matriks setelah mengganti bilangan kelipatan 3 dengan 't':" << endl;
        tampilkanMatriks(matriks);
        break;
    case 'e':
        matriks = transposeMatriks(matriks);
        cout << "Transpose matriks:" << endl;
        tampilkanMatriks(matriks);
        break;
    default:
        cout << "Pilihan tidak valid." << endl;
    }

    return 0;
}
