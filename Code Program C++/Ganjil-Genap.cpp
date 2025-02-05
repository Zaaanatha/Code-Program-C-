#include <iostream>
using namespace std;

int main() {
    int angka;
    char pilihan;

    do {
        cout << "=== Program Ganjil atau Genap ===" << endl;
        cout << "Masukkan sebuah bilangan: ";
        cin >> angka;

        if (angka % 2 == 0) {
            cout << "Bilangan " << angka << " adalah GENAP." << endl;
        } else {
            cout << "Bilangan " << angka << " adalah GANJIL." << endl;
        }

        cout << "Ingin cek bilangan lain? (y/n): ";
        cin >> pilihan;

    } while (pilihan == 'y' || pilihan == 'Y');

    cout << "Terima kasih telah menggunakan program ini!" << endl;

    return 0;
}
