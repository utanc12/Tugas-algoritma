#include <iostream>
using namespace std;

int main() {
    int n;
    char ulang;

    do {
        cout << "Masukkan bilangan: ";
        cin >> n;

        int hasil = 1;
        int i = n;

        while (i > 1) {
            hasil *= i;
            i--;
        }

        cout << "Hasil " << n << "! = " << hasil << endl;

        cout << "Ulangi lagi? (y/n): ";
        cin >> ulang;

    } while (ulang == 'y' || ulang == 'Y');

    return 0;
}

