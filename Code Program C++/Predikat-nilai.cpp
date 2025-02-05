#include <iostream>
using namespace std;

int main()
{
    int nilai;

    cout<<"ANALISIS NILAI\n";
    cout<<"##########################\n";
    
    cout<<"Masukan berapa nilai kamu (0-100): ";
    cin>> nilai;
    
    if (nilai < 40) {
        cout<<"Waduh kamu pasti kebanyakan bolos\n";
    } else if (nilai >= 40 && nilai <= 60) {
        cout<<"Jangan terlalu banyak main game dong\n";
    } else if (nilai >= 60 && nilai <= 80) {
        cout<<"Wahh kamu harus banyak berlajar yaa\n";
    } else if (nilai >= 80 && nilai <= 90) {
        cout<<"Harus lebih banyak belajar lagi bro\n";
    } else if (nilai >= 90 && nilai <= 100) {
        cout<<"Gaskeuun pertahankan nilainya yaa\n";
    } else {
        cout<<"Isi yang bener dong";
    }

    cout<<"==============================";
    
}