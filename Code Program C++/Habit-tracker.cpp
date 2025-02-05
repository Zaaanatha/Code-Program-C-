#include <iostream>
#include <string>
using namespace std;

struct Habit {
    string namaHabit;
    int hariBerhasil;
};

void tampilkanHabit(Habit daftarHabit[], int jumlahHabit) {
    cout << "\n=== Daftar Kebiasaan ===" << endl;
    for (int i = 0; i < jumlahHabit; i++) {
        cout << i + 1 << ". " << daftarHabit[i].namaHabit 
             << " | Hari berhasil: " << daftarHabit[i].hariBerhasil << endl;
    }
}

void tambahHabit(Habit daftarHabit[], int &jumlahHabit) {
    if (jumlahHabit >= 10) {
        cout << "Anda telah mencapai batas maksimal kebiasaan!" << endl;
        return;
    }

    cout << "\nMasukkan nama kebiasaan baru: ";
    cin.ignore(); 
    getline(cin, daftarHabit[jumlahHabit].namaHabit);
    daftarHabit[jumlahHabit].hariBerhasil = 0;
    jumlahHabit++;
    cout << "Kebiasaan berhasil ditambahkan!" << endl;
}

void perbaruiHabit(Habit daftarHabit[], int jumlahHabit) {
    tampilkanHabit(daftarHabit, jumlahHabit);
    int pilihan;
    cout << "\nPilih nomor kebiasaan yang berhasil Anda lakukan hari ini: ";
    cin >> pilihan;

    if (pilihan < 1 || pilihan > jumlahHabit) {
        cout << "Pilihan tidak valid." << endl;
        return;
    }

    daftarHabit[pilihan - 1].hariBerhasil++;
    cout << "Status kebiasaan berhasil diperbarui!" << endl;
}

int main() {
    const int MAX_HABIT = 10;
    Habit daftarHabit[MAX_HABIT];
    int jumlahHabit = 0;
    int pilihan;

    do {
        cout << "\n=== Habit Tracker ===" << endl;
        cout << "1. Tampilkan Kebiasaan" << endl;
        cout << "2. Tambah Kebiasaan" << endl;
        cout << "3. Perbarui Kebiasaan" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilih menu: ";
        cin >> pilihan;

        if (pilihan == 1) {
            tampilkanHabit(daftarHabit, jumlahHabit);
        } else if (pilihan == 2) {
            tambahHabit(daftarHabit, jumlahHabit);
        } else if (pilihan == 3) {
            perbaruiHabit(daftarHabit, jumlahHabit);
        } else if (pilihan == 4) {
            cout << "Terima kasih telah menggunakan Habit Tracker!" << endl;
        } else {
            cout << "Pilihan tidak valid. Coba lagi." << endl;
        }
    } while (pilihan != 4);

    return 0;
}
