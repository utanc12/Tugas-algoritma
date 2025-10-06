//Operasi Matematika Putra Harahap
#include <iostream>
using namespace std;

int main() {
    int x = 5; // variabel utama
    int y = 3; // variabel tambahan untuk contoh

    cout << "x = " << x << ", y = " << y << endl << endl;

    // 1. Operator Perbandingan
    cout << "=== Operator Perbandingan ===" << endl;
    cout << "x > y : " << (x > y) << endl;   // 5 > 3 ? true (1)
    cout << "x < y : " << (x < y) << endl;   // 5 < 3 ? false (0)
    cout << "x >= 5 : " << (x >= 5) << endl; // 5 >= 5 ? true (1)
    cout << "x <= 5 : " << (x <= 5) << endl; // 5 <= 5 ? true (1)
    cout << "x == 5 : " << (x == 5) << endl; // x sama dengan 5 ? true (1)
    cout << "x != 5 : " << (x != 5) << endl; // x tidak sama dengan 5 ? false (0)

    cout << endl;

    // 2. Operator Logika
    cout << "=== Operator Logika ===" << endl;
    cout << "(x > 3 && x < 10) : " << (x > 3 && x < 10) << endl; // AND ? true jika kedua kondisi benar
    cout << "(x > 3 || x < 4) : " << (x > 3 || x < 4) << endl;    // OR ? true jika salah satu benar
    cout << "!(x == 5) : " << !(x == 5) << endl;                  // NOT ? negasi, true jika x bukan 5

    return 0;
}

