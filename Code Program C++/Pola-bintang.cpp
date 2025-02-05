#include <iostream>
using namespace std;

int main() {
    int jumlahBaris;

    // Meminta input jumlah baris
    cout << "Masukkan jumlah baris: ";
    cin >> jumlahBaris;

    // Loop untuk mencetak pola bintang
    for (int i = 1; i <= jumlahBaris; i++) { // Baris
        for (int j = 1; j <= i; j++) {       // Kolom
            cout << "*";
        }
        cout << endl; // Pindah ke baris berikutnya
    }

    return 0;
}
