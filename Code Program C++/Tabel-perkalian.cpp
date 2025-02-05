#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int ukuran;

    cout << "Masukkan ukuran tabel perkalian: ";
    cin >> ukuran;

    cout << "\n=== Tabel Perkalian ===" << endl;

    cout << setw(4) << " ";
    for (int i = 1; i <= ukuran; i++) {
        cout << setw(4) << i;
    }
    cout << endl;

    for (int i = 0; i <= ukuran; i++) {
        cout << "----";
    }
    cout << endl;

    for (int i = 1; i <= ukuran; i++) {
        cout << setw(4) << i << "|"; 
        for (int j = 1; j <= ukuran; j++) {
            cout << setw(4) << i * j; 
        }
        cout << endl;
    }

    return 0;
}
