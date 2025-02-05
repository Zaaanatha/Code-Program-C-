#include <iostream>
using namespace std;

int main()
{
    cout<<"============================\n";
    cout<<"Mencari Luas Persegi Panjang\n";
    
    float p, l, luas;
    
    cout<<"Input panjang persegi panjang: ";
    cin>> p;
    cout<<"Input lebar persegi panjang: ";
    cin>> l;
    
    cout<<"=============================\n";
    
    luas = p * l;
    
    cout<<"Luas persegi panjang = " << luas << endl;
    cout<<"==============================";
    
}