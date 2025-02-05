#include <iostream>
using namespace std;

int main()
{
    float usia;

    cout<<"Masukkan usia anda saat ini: ";
    cin>> usia;
    
    
    
    if (usia >= 6 && usia <= 12) {
        cout<<"Anda menduduki bangku Sekolah Dasar\n";
    } else if (usia >= 13 && usia <= 15) {
        cout<<"Anda menduduki bangku Sekolah Menengah Pertama\n";
    } else if (usia >= 16 && usia <= 18) {
        cout<<"Anda menduduki bangku Sekolah Menengah Atas\n";
    } else {
        cout<<"Anda tidak bersekolah";
    }

    cout<<"==============================";
    
}