#include <iostream>
#include <vector>
#include <iomanip>
#include <string>  // Tambahkan header string

using namespace std;

int main()
{
    cout << "## Program C++ Aplikasi Kasir ##\n";
    cout << "=====================================\n\n";
    
    int barang;
    
    cout << "# Selamat datang di Mini Market TugasKoding #\n";
    cout << "Masukkan jumlah barang yang ingin dibeli: ";
    cin >> barang;
    cin.ignore();  // Membersihkan buffer sebelum getline

    vector<string> nama_barang(barang);
    vector<int> harga(barang), quantity(barang);
    
    for (int i = 0; i < barang; i++) {
        cout << "\nBarang ke-" << i + 1 << ":\n";
        
        cout << "Nama Barang: ";
        getline(cin, nama_barang[i]);  // Pastikan getline dapat berjalan
        
        cout << "Harga satuan: ";
        cin >> harga[i];

        cout << "Jumlah " << nama_barang[i] << " yang dibeli: ";
        cin >> quantity[i];
        cin.ignore(); // Membersihkan newline agar tidak mengganggu getline berikutnya
        
        cout << endl;
    }
    
    // Menampilkan rincian pembelian
    cout << "## Rincian Pembelian ##\n";
    cout << "=================================================================\n";
    cout << left << setw(5) << "No" << setw(20) << "Nama Barang" << setw(10) << "Harga" 
         << setw(10) << "Jumlah" << setw(15) << "Total Harga" << endl;
    cout << "=================================================================\n";
    
    int total_bayar = 0;
    for (int i = 0; i < barang; i++) {
        int total_harga = harga[i] * quantity[i];
        total_bayar += total_harga;
        
        cout << left << setw(5) << i + 1 
             << setw(20) << nama_barang[i] 
             << setw(10) << harga[i] 
             << setw(10) << quantity[i] 
             << setw(15) << total_harga << endl;
    }
    
    cout << "=================================================================\n";
    cout << "Total harga yang harus dibayar: " << total_bayar << endl;
    
    int uang;
    
    do {
        cout << "Masukkan jumlah uang: ";
        cin >> uang;

        if (uang < total_bayar) {
            cout << "Uang tidak cukup! Masukkan jumlah yang sesuai.\n";
        }
    } while (uang < total_bayar);
    
    int kembalian = uang - total_bayar;
    
    cout << "Kembalian: " << kembalian << "\n";
    
    cout << "=======================================\n";
    cout << "### Terima kasih sudah berbelanja, datang kembali yaa! ###\n";
    cout << "=======================================\n";
    
    return 0;
}
