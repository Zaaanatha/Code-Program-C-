#include <iostream>
#include <iomanip>
using namespace std;

double hitungPajak(double penghasilan) {
    double pajak = 0.0;

    if (penghasilan <= 50000000) { 
        pajak = penghasilan * 0.05;
    } else if (penghasilan <= 250000000) { 
        pajak = (50000000 * 0.05) + ((penghasilan - 50000000) * 0.15);
    } else if (penghasilan <= 500000000) { 
        pajak = (50000000 * 0.05) + (200000000 * 0.15) + ((penghasilan - 250000000) * 0.25);
    } else { 
        pajak = (50000000 * 0.05) + (200000000 * 0.15) + (250000000 * 0.25) + ((penghasilan - 500000000) * 0.30);
    }

    return pajak;
}

int main() {
    double penghasilanTahunan;

    cout << "=== Simulasi Perhitungan Pajak ===\n";
    cout << "Masukkan penghasilan tahunan Anda (Rp): ";
    cin >> penghasilanTahunan;

    if (penghasilanTahunan < 0) {
        cout << "Penghasilan tidak valid. Silakan coba lagi.\n";
        return 1;
    }


    double pajak = hitungPajak(penghasilanTahunan);

    cout << fixed << setprecision(2);
    cout << "\n=== Hasil Perhitungan Pajak ===\n";
    cout << "Penghasilan Tahunan: Rp " << penghasilanTahunan << endl;
    cout << "Total Pajak Terutang: Rp " << pajak << endl;
    cout << "Penghasilan Bersih  : Rp " << penghasilanTahunan - pajak << endl;

    return 0;
}
