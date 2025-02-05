#include <iostream>
#include <cstdlib> // Untuk rand() dan srand()
#include <ctime>   // Untuk time()
using namespace std;

void tampilkanRamalan() {
    // Array ramalan
    string ramalan[] = {
        "Hari ini kamu akan tidur malam",
        "Seseorang yang spesial akan chat kamu",
        "Crush kmu sedang memikirkan kamu",
        "Kamu amemiliki pemuja rahasia",
        "Besok pagi kamu akan sekolah",
        "Mama mu besok memberikan bonus bekal",
        "Kamu ranking 1 di semester selanjutnya",
        "Jangan khawatir, segala masalah akan selesai"
    };

    // Hitung jumlah ramalan
    int jumlahRamalan = sizeof(ramalan) / sizeof(ramalan[0]);

    // Pilih ramalan secara acak
    int indeks = rand() % jumlahRamalan;
    cout << "Ramalan hari ini: " << ramalan[indeks] << endl;
}

int main() {
    // Inisialisasi angka acak
    srand(static_cast<unsigned>(time(0)));

    cout << "=== Selamat Datang di Program Ramalan Hari Ini ===" << endl;

    char pilihan;
    do {
        tampilkanRamalan();

        cout << "\nMau ramalan lain? (y/n): ";
        cin >> pilihan;

    } while (pilihan == 'y' || pilihan == 'Y');

    cout << "Semoga harimu menyenangkan! Sampai jumpa!" << endl;

    return 0;
}
