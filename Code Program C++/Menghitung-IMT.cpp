#include <iostream>
using namespace std;

int main()
{
    cout<<"============================\n";
    cout<<"Indeks Massa Tubuh (IMT) \n";
    cout<<"============================\n";
    
    int bb, tb;
    float imit;
    
    cout<<"Berat Badan Kamu: (KG)";
    cin>> bb;
    cout<<"Tinggi Badan Kamu: (M)";
    cin>> tb;
    cout<< endl;
    cout<<"============================\n";

    imit = bb / (tb * tb);
    cout << "IMT kamu adalah: " << imit << endl;
    
    if (imit < 18.5) {
        cout<<"Kamu kurus banget, boleh makan 5 kali sehari\n";
    } else if (imit >= 18.5 && imit <= 22.9) {
        cout<<"Berat badan kamu ideal, pertahankan yaa\n";
    } else if (imit >= 23 && imit <= 29.9) {
        cout<<"Berat badan kamu berlebihan, jaga pola makan yaa";
    } else if (imit >= 30) {
        cout<<"Kamu obesitas, lakukan diet sesuai arahan dokter";
    } else {
        cout<<"Isi berat dan tinggi tubuhmu dulu";
    }

    cout<<"==============================";
    
}