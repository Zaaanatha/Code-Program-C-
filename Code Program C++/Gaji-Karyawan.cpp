#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string nama;
    string jabatan;
    int gajiPokok;
    float tunjangan = 0.0, pajak = 0.0, totalGaji = 0.0;

    cout << "=== Program Menghitung Gaji Karyawan ===" << endl;

    cout << "Masukkan nama karyawan: ";
    getline(cin, nama);
    cout << "Masukkan jabatan karyawan (Manager/Staff/Operator): ";
    cin >> jabatan;

    if (jabatan == "Manager" || jabatan == "manager") {
        gajiPokok = 10000000; 
        tunjangan = 0.2 * gajiPokok;
    } else if (jabatan == "Staff" || jabatan == "staff") {
        gajiPokok = 7000000; 
        tunjangan = 0.15 * gajiPokok;
    } else if (jabatan == "Operator" || jabatan == "operator") {
        gajiPokok = 5000000; 
        tunjangan = 0.1 * gajiPokok; 
    } else {
        cout << "Jabatan tidak valid!" << endl;
        return 1;
    }

    pajak = 0.05 * gajiPokok;

    totalGaji = gajiPokok + tunjangan - pajak;

    cout << fixed << setprecision(2);
    cout << "\n=== Rincian Gaji Karyawan ===" << endl;
    cout << "Nama Karyawan   : " << nama << endl;
    cout << "Jabatan         : " << jabatan << endl;
    cout << "Gaji Pokok      : Rp " << gajiPokok << endl;
    cout << "Tunjangan       : Rp " << tunjangan << endl;
    cout << "Pajak           : Rp " << pajak << endl;
    cout << "Total Gaji      : Rp " << totalGaji << endl;

    return 0;
}
