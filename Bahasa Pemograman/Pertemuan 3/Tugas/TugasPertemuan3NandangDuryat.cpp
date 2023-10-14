/* Buat program yang meminta pengguna untuk memasukkan nilai tugas siswa (dalam bentuk angka). Program harus menghitung rata-rata nilai tugas dan nilai ujian siswa. Kemudian, program harus menentukan apakah siswa tersebut lulus berdasarkan kriteria berikut:

Jika nilai rata-rata lebih besar atau sama dengan 70, siswa dianggap lulus.
Jika nilai rata-rata kurang dari 70, siswa dianggap tidak lulus. */

#include <iostream>
#include <cctype> // Include pustaka cctype
using namespace std;

int main() {
    double algoritma_struktur_data, bahasa_indonesia, bahasa_pemrograman, kalkulus, media_sosial, pancasila, pendidikan_agama, pengantar_teknologi;
    double algoritma_struktur_data_ujn, bahasa_indonesia_ujn, bahasa_pemrograman_ujn, kalkulus_ujn, media_sosial_ujn, pancasila_ujn, pendidikan_agama_ujn, pengantar_teknologi_ujn;
    string nama = "Nandang Duryat";
    string kelas = "TI.23.C4";
    string mata_kuliah = "Bahasa Pemrograman";
    string dosen = "Hemdani Rahendra Herlianto, S.Kom., M.T.I.";
    string dash_separator = "========================";
    cout << dash_separator << endl;
    cout << "Nama: " << nama << endl;
    cout << "Kelas: " << kelas << endl;
    cout << "Mata Kuliah: " << mata_kuliah << endl;
    cout << "Dosen: " << dosen << endl;
    cout << dash_separator << endl;
    
    // Memeriksa dan meminta input yang valid
    do {
        cout << "Masukkan nilai tugas Algoritma Dan Struktur Data (0-100): ";
        cin >> algoritma_struktur_data;
    } while (!cin.good() || algoritma_struktur_data < 0.0 || algoritma_struktur_data > 100.0);
    do {
        cout << "Masukkan nilai ujian Algoritma Dan Struktur Data (0-100): ";
        cin >> algoritma_struktur_data_ujn;
    } while (!cin.good() || algoritma_struktur_data_ujn < 0.0 || algoritma_struktur_data_ujn > 100.0);

    do {
        cout << "Masukkan nilai tugas Bahasa Indonesia (0-100): ";
        cin >> bahasa_indonesia;
    } while (!cin.good() || bahasa_indonesia < 0.0 || bahasa_indonesia > 100.0);
    do {
        cout << "Masukkan nilai ujian Bahasa Indonesia (0-100): ";
        cin >> bahasa_indonesia_ujn;
    } while (!cin.good() || bahasa_indonesia_ujn < 0.0 || bahasa_indonesia_ujn > 100.0);

    do {
        cout << "Masukkan nilai tugas Bahasa Pemrograman (0-100): ";
        cin >> bahasa_pemrograman;
    } while (!cin.good() || bahasa_pemrograman < 0.0 || bahasa_pemrograman > 100.0);
    do {
        cout << "Masukkan nilai ujian Bahasa Pemrograman (0-100): ";
        cin >> bahasa_pemrograman_ujn;
    } while (!cin.good() || bahasa_pemrograman_ujn < 0.0 || bahasa_pemrograman_ujn > 100.0);

    do {
        cout << "Masukkan nilai tugas Kalkulus (0-100): ";
        cin >> kalkulus;
    } while (!cin.good() || kalkulus < 0.0 || kalkulus > 100.0);
    do {
        cout << "Masukkan nilai ujian Kalkulus (0-100): ";
        cin >> kalkulus_ujn;
    } while (!cin.good() || kalkulus_ujn < 0.0 || kalkulus_ujn > 100.0);

    do {
        cout << "Masukkan nilai tugas Media Sosial (0-100): ";
        cin >> media_sosial;
    } while (!cin.good() || media_sosial < 0.0 || media_sosial > 100.0);
    do {
        cout << "Masukkan nilai ujian Media Sosial (0-100): ";
        cin >> media_sosial_ujn;
    } while (!cin.good() || media_sosial_ujn < 0.0 || media_sosial_ujn > 100.0);

    do {
        cout << "Masukkan nilai tugas Pancasila (0-100): ";
        cin >> pancasila;
    } while (!cin.good() || pancasila < 0.0 || pancasila > 100.0);
    do {
        cout << "Masukkan nilai ujian Pancasila (0-100): ";
        cin >> pancasila_ujn;
    } while (!cin.good() || pancasila_ujn < 0.0 || pancasila_ujn > 100.0);

    do {
        cout << "Masukkan nilai tugas Pendidikan Agama (0-100): ";
        cin >> pendidikan_agama;
    } while (!cin.good() || pendidikan_agama < 0.0 || pendidikan_agama > 100.0);
    do {
        cout << "Masukkan nilai ujian Pendidikan Agama (0-100): ";
        cin >> pendidikan_agama_ujn;
    } while (!cin.good() || pendidikan_agama_ujn < 0.0 || pendidikan_agama_ujn > 100.0);

    do {
        cout << "Masukkan nilai tugas Pengantar Teknologi (0-100): ";
        cin >> pengantar_teknologi;
    } while (!cin.good() || pengantar_teknologi < 0.0 || pengantar_teknologi > 100.0);
    do {
        cout << "Masukkan nilai ujian Pengantar Teknologi (0-100): ";
        cin >> pengantar_teknologi_ujn;
    } while (!cin.good() || pengantar_teknologi_ujn < 0.0 || pengantar_teknologi_ujn > 100.0);

    double total_nilai_tugas = algoritma_struktur_data + bahasa_indonesia + bahasa_pemrograman + kalkulus + media_sosial + pancasila + pendidikan_agama + pengantar_teknologi;
    double rata_rata = total_nilai_tugas / 8.0;

    if (rata_rata >= 0.0 && rata_rata <= 100.0) {
        if (rata_rata >= 70.0) {
            cout << "Siswa dinyatakan lulus dengan rata-rata nilai " << rata_rata << endl;
        } else {
            cout << "Siswa dinyatakan tidak lulus dengan rata-rata nilai " << rata_rata << endl;
        }
    } else {
        cout << "Input nilai tidak valid." << endl;
    }

    return 0;
}

