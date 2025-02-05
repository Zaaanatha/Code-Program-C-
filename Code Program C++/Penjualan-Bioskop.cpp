#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Struktur data untuk tiket
struct Tiket {
    string namaFilm;
    int harga;
    int stok;
};

void tampilkanTiket(Tiket daftarTiket[], int jumlah) {
    cout << "\n=== Daftar Tiket ===" << endl;
    cout << left << setw(5) << "No" << setw(20) << "Nama Film" << setw(10) << "Harga" << setw(10) << "Stok" << endl;
    for (int i = 0; i < jumlah; i++) {
        cout << setw(5) << i + 1
             << setw(20) << daftarTiket[i].namaFilm
             << setw(10) << daftarTiket[i].harga
             << setw(10) << daftarTiket[i].stok << endl;
    }
}

int main() {
    const int jumlahTiket = 3; // Jumlah film
    Tiket daftarTiket[jumlahTiket] = {
        {"Moana", 40000, 50},
        {"Agak Laen", 40000, 30},
        {"Terrifier", 40000, 20}
    };

    int pilihan, jumlahBeli;
    int totalPendapatan = 0;

    do {
        cout << "\n=== Sistem Penjualan Tiket Bioskop ===" << endl;
        cout << "1. Tampilkan Daftar Tiket" << endl;
        cout << "2. Beli Tiket" << endl;
        cout << "3. Lihat Total Pendapatan" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilih menu: ";
        cin >> pilihan;

        if (pilihan == 1) {
            tampilkanTiket(daftarTiket, jumlahTiket);
        } else if (pilihan == 2) {
            int pilihanFilm;
            tampilkanTiket(daftarTiket, jumlahTiket);
            cout << "\nPilih nomor film yang ingin dibeli: ";
            cin >> pilihanFilm;

            if (pilihanFilm < 1 || pilihanFilm > jumlahTiket) {
                cout << "Pilihan tidak valid." << endl;
                continue;
            }

            cout << "Masukkan jumlah tiket yang ingin dibeli: ";
            cin >> jumlahBeli;

            // Validasi stok
            if (jumlahBeli > daftarTiket[pilihanFilm - 1].stok) {
                cout << "Stok tidak mencukupi. Hanya tersedia " << daftarTiket[pilihanFilm - 1].stok << " tiket." << endl;
            } else {
                daftarTiket[pilihanFilm - 1].stok -= jumlahBeli;
                int totalHarga = jumlahBeli * daftarTiket[pilihanFilm - 1].harga;

                // Diskon jika beli lebih dari 5 tiket
                if (jumlahBeli >= 5) {
                    int diskon = totalHarga * 0.1; // Diskon 10%
                    totalHarga -= diskon;
                    cout << "Anda mendapatkan diskon 10%! Total diskon: " << diskon << endl;
                }

                cout << "Total harga: " << totalHarga << endl;
                totalPendapatan += totalHarga;
                cout << "Pembelian berhasil!" << endl;
            }
        } else if (pilihan == 3) {
            cout << "Total pendapatan saat ini: " << totalPendapatan << endl;
        } else if (pilihan == 4) {
            cout << "Terima kasih telah menggunakan sistem penjualan tiket." << endl;
        } else {
            cout << "Pilihan tidak valid. Coba lagi." << endl;
        }
    } while (pilihan != 4);

    return 0;
}
