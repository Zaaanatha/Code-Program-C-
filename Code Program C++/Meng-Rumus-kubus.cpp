#include <iostream>
using namespace std;

int main()
{
    cout<<"============================\n";
    cout<<"Menghitung rumus kubus\n";
    cout<<"============================\n";
    
    float sisi;
    
    cout<<"Masukkan sisi kubus: ";
    cin>> sisi;
    cout<< endl;

    cout<<"============================\n";
    
    cout<<"Maka luas permukaan kubus: " << 6 * (sisi * sisi) << endl;
    cout<<"Maka keliling permukaan kubus: " << 12 * (sisi) << endl;
    cout<<"Maka luas permukaan kubus: " << sisi * sisi * sisi << endl;

    cout<<"==============================";
    
}