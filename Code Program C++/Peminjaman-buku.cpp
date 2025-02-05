#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    const int maxBuku = 5;
    string daftarBuku[maxBuku] = {"Fisika", "Matematika", "Kimia", "Biologi", "Sejarah"};
    string nama[maxBuku], namaBuku[maxBuku], bulan[maxBuku], bulanBalik[maxBuku];
    int jumlahBuku[maxBuku], tanggal[maxBuku], tanggalBalik[maxBuku], keterlambatan[maxBuku];
    int denda[maxBuku] = {0};
    map<string, int> bulanAngka = {
        {"Januari", 1}, {"Februari", 2}, {"Maret", 3}, {"April", 4}, {"Mei", 5}, {"Juni", 6}, {"Juli", 7}, {"Agustus", 8}, {"September", 9}, {"Oktober", 10}, {"November", 11}, {"Desember", 12}};

    int pinjam;
    cout << "Masukkan jumlah peminjam: ";
    cin >> pinjam;

    for (int i = 0; i < pinjam; i++)
    {
        cout << "\n-- Data Peminjam ke-" << i + 1 << "\n";
        cin.ignore(); // untuk menghindari masalah dengan getline
        cout << "Nama peminjam: ";
        getline(cin, nama[i]);

        cout << "Daftar buku yang tersedia:\n";
        for (int j = 0; j < maxBuku; j++)
        {
            cout << j + 1 << ". " << daftarBuku[j] << endl;
        }

        bool validBuku = false;
        do
        {
            cout << "Buku yang dipinjam: ";
            getline(cin, namaBuku[i]);
            for (int j = 0; j < maxBuku; j++)
            {
                if (namaBuku[i] == daftarBuku[j])
                {
                    validBuku = true;
                    break;
                }
            }
            if (!validBuku)
            {
                cout << "Buku tidak tersedia. Silakan pilih dari daftar buku di atas.\n";
            }
        } while (!validBuku);

        cout << "Jumlah buku yang dipinjam: ";
        cin >> jumlahBuku[i];

        cout << "Tanggal peminjaman: ";
        cin >> tanggal[i];

        cout << "Bulan peminjaman: ";
        cin.ignore(); // untuk menghindari masalah dengan getline
        getline(cin, bulan[i]);

        cout << "Tanggal pengembalian: ";
        cin >> tanggalBalik[i];

        cin.ignore(); // Menghindari masalah untuk input bulan pengembalian setelah tanggal pengembalian

        cout << "Bulan pengembalian: ";
        getline(cin, bulanBalik[i]);

        int bulanPinjam = bulanAngka[bulan[i]];
        int bulanBalikInt = bulanAngka[bulanBalik[i]];

        int keterlambatanHari = 0;

        if (bulanBalikInt > bulanPinjam) {
            // Jika bulan pengembalian lebih besar
            keterlambatanHari = (bulanBalikInt - bulanPinjam) * 30 + (tanggalBalik[i] - tanggal[i]);
        }
        else if (bulanBalikInt == bulanPinjam && tanggalBalik[i] < tanggal[i]) {
            // Jika bulan sama tapi tanggal pengembalian lebih awal
            keterlambatanHari = tanggal[i] - tanggalBalik[i];
        }
        else if (bulanBalikInt == bulanPinjam && tanggalBalik[i] > tanggal[i]) {
            // Jika bulan sama dan tanggal pengembalian lebih besar
            keterlambatanHari = tanggalBalik[i] - tanggal[i];
        }

        keterlambatan[i] = keterlambatanHari;

        if (keterlambatan[i] > 0 && keterlambatan[i] <= 5)
        {
            denda[i] = jumlahBuku[i] * keterlambatan[i] * 2000;
        }
        else if (keterlambatan[i] > 5)
        {
            denda[i] = jumlahBuku[i] * (5 * 2000 + (keterlambatan[i] - 5) * 5000);
        }
        else
        {
            denda[i] = 0;
        }
    }

    cout << "\n--- Laporan Peminjaman ---\n";
    for (int i = 0; i < pinjam; i++)
    {
        cout << "\nPeminjam ke-" << i + 1 << "\n";
        cout << "Nama peminjam: " << nama[i] << endl;
        cout << "Buku yang dipinjam: " << namaBuku[i] << endl;
        cout << "Jumlah buku yang dipinjam: " << jumlahBuku[i] << endl;
        cout << "Tanggal peminjaman: " << tanggal[i] << " " << bulan[i] << endl;
        cout << "Tanggal pengembalian: " << tanggalBalik[i] << " " << bulanBalik[i] << endl;

        if (keterlambatan[i] > 0) {
            cout << "Hari keterlambatan: " << keterlambatan[i] << " hari\n";
            cout << "Denda: Rp" << denda[i] << endl;
        }
        else {
            cout << "Tidak ada keterlambatan. Tidak ada denda\n";
        }
    }

    return 0;
}
