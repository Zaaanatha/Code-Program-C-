#include <iostream>
using namespace std;

int main() {
    int n, t1 = 0, t2 = 1, berikutnya;

    cout << "Masukkan jumlah bilangan Fibonacci: ";
    cin >> n;

    cout << "Deret Fibonacci: " << t1 << ", " << t2;

    for (int i = 3; i <= n; ++i) {
        berikutnya = t1 + t2;      
        cout << ", " << berikutnya; 
        t1 = t2;                 
        t2 = berikutnya;        
    }

    cout << endl;

    return 0;
}
