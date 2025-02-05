#include <iostream>
using namespace std;

int main() {
    int n;
    unsigned long long faktorial = 1; // Menggunakan tipe data unsigned long long untuk angka besar

    // Meminta input angka
    cout << "Masukkan angka: ";
    cin >> n;

    // Validasi input
    if (n < 0) {
        cout << "Faktorial tidak terdefinisi untuk angka negatif." << endl;
    } else {
        // Perulangan untuk menghitung faktorial
        for (int i = 1; i <= n; i++) {
            faktorial *= i; // faktorial = faktorial * i
        }

        // Menampilkan hasil
        cout << "Faktorial dari " << n << " adalah " << faktorial << endl;
    }

    return 0;
}
