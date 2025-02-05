#include <iostream>
#include <cstdlib> // Untuk fungsi rand() dan srand()
#include <ctime>   // Untuk fungsi time()
using namespace std;

int main() {
    int angkaTebakan, angkaPengguna, percobaan = 0;
    char mainLagi;

    // Seed untuk angka acak
    srand(time(0)); // Mengatur seed berdasarkan waktu

    cout << "=== Permainan Tebak Angka ===" << endl;

    do {
        // Menghasilkan angka acak antara 1 dan 100
        angkaTebakan = rand() % 20 + 1;
        percobaan = 0;

        cout << "\nSaya sudah memilih angka antara 1 hingga 100." << endl;
        cout << "Coba tebak angka tersebut!" << endl;

        do {
            cout << "Masukkan tebakan Anda: ";
            cin >> angkaPengguna;
            percobaan++;

            if (angkaPengguna > angkaTebakan) {
                cout << "Terlalu besar! Coba angka yang lebih kecil." << endl;
            } else if (angkaPengguna < angkaTebakan) {
                cout << "Terlalu kecil! Coba angka yang lebih besar." << endl;
            } else {
                cout << "Selamat! Anda berhasil menebak angka " << angkaTebakan << " dalam " << percobaan << " percobaan." << endl;
            }
        } while (angkaPengguna != angkaTebakan);

        // Menanyakan apakah ingin bermain lagi
        cout << "Apakah Anda ingin bermain lagi? (y/n): ";
        cin >> mainLagi;

    } while (mainLagi == 'y' || mainLagi == 'Y');

    cout << "Terima kasih telah bermain! Sampai jumpa lagi." << endl;

    return 0;
}
