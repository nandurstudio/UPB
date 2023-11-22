//==============================================================//
// Nama         : Nandang Duryat - 312310233                    //
// Kelas        : TI.23.C4                                      //
// Mata Kuliah  : Bahasa Pemrograman                            //
// Dosen        : Hemdani Rahendra Herlianto, S.Kom., M.T.I.    //
// Kampus       : Universitas Pelita Bangsa                     //
// Tugas        : Pertemuan 9 - Pointer (function)              //
// Tanggal      : Minggu, 19/11/23                              //
//==============================================================//
// Proyek       : Aplikasi Load Player Base Dari Pointer
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

// Warna output console khusus Windows
int biru = 10;
int merah = 12;
int kuning = 14;
int putih = 15;
int hijau = 2;
HANDLE hConsole;

// Bentuk model entity untuk senjata dan pemain
struct Weapon
{
    char *name;
    int attack;
    int guard;
};

struct Player
{
    char *name;
    int score;
    int hp;
    struct Weapon *weapon;
};

// Intro
void introNandur()
{
    printf("==============================================================\n");
    printf("Nama         : Nandang Duryat - 312310233\n");
    printf("Kelas        : TI.23.C4\n");
    printf("Mata Kuliah  : Bahasa Pemrograman\n");
    printf("Dosen        : Hemdani Rahendra Herlianto, S.Kom., M.T.I.\n");
    printf("Kampus       : Universitas Pelita Bangsa\n");
    printf("Tugas        : Pertemuan 9 - Pointer (function)\n");
    printf("Tanggal      : Minggu, 19/11/23\n");
    printf("==============================================================\n\n");
}

// Buat fungsi untuk membuat pemain dan alokasikan memori untuk senjata untuk menghindari bentrok
void createPlayer(struct Player *player, char *name, int score, int hp, char *weaponName, int attack, int guard)
{
    player->name = name;
    player->score = score;
    player->hp = hp;

    // Alokasi memori untuk senjata
    player->weapon = malloc(sizeof(struct Weapon));
    if (player->weapon != NULL)
    {
        player->weapon->name = weaponName;
        player->weapon->attack = attack;
        player->weapon->guard = guard;
    }
    else
    {
        printf("Pengalokasian memori gagal.\n");
        exit(1);
    }
}

void printPlayer(struct Player *player)
{
    SetConsoleTextAttribute(hConsole, hijau);
    printf("STATUS PEMAIN\n");
    SetConsoleTextAttribute(hConsole, putih);
    printf("Nama    : %s\n", player->name);
    printf("Skor    : %d\n", player->score);
    printf("HP      : %d\n", player->hp);
    SetConsoleTextAttribute(hConsole, hijau);
    printf("Senjata\n");
    SetConsoleTextAttribute(hConsole, putih);
    printf(" => Nama Sejata : %s\n", player->weapon->name);
    printf(" => Serangan    : %d\n", player->weapon->attack);
    printf(" => Pertahanan  : %d\n", player->weapon->guard);
    printf("==============================================================\n\n");
}

int main()
{
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, kuning);
    introNandur();
    SetConsoleTextAttribute(hConsole, putih);
    struct Player players[8];
    char *names[] = {"Dumbledore", "Gandalf", "HarryPotter", "Frodo", "Sherlock", "DarthVader", "Hermione", "Thor"};

    // Mengatur nama langsung
    for (int i = 0; i < 8; ++i)
    {
        int score = rand() % 101;            // Skor acak antara 0 dan 100
        int hp = rand() % 101;               // HP acak antara 0 dan 100
        int weaponAttack = rand() % 50 + 10; // Serangan senjata acak antara 10 dan 59
        int weaponGuard = rand() % 21 + 5;   // Pertahanan senjata acak antara 5 dan 25
        char *weaponName;
        if (i % 2 == 0)
        {
            weaponName = "Pedang";
        }
        else
        {
            weaponName = "Kapak";
        }

        createPlayer(&players[i], names[i], score, hp, weaponName, weaponAttack, weaponGuard);
    }

    int exitFlag = 0;
    while (!exitFlag)
    {
        char playerName[50];
        printf("Masukkan nama pemain (atau ketik 'exit' untuk keluar): ");
        scanf("%s", playerName);

        if (strcmp(playerName, "exit") == 0)
        {
            SetConsoleTextAttribute(hConsole, kuning);
            printf("== Good Bye ==");
            SetConsoleTextAttribute(hConsole, putih);
            exitFlag = 1;
            continue;
        }

        int found = 0;
        for (int i = 0; i < 8; ++i)
        {
            if (strcmp(players[i].name, playerName) == 0)
            {
                printPlayer(&players[i]);
                found = 1;
                break;
            }
        }

        if (!found)
        {
            SetConsoleTextAttribute(hConsole, merah);
            printf("Pemain tidak ditemukan.\n");
            SetConsoleTextAttribute(hConsole, putih);
        }
    }

    // Bebaskan memori yang dialokasikan
    for (int i = 0; i < 8; ++i)
    {
        free(players[i].weapon);
    }

    return 0;
}