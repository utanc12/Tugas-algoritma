//Program Hitung Luas Lingkaran Putra Harahap
#include <iostream>
using namespace std;

int main()
{
    // variabel dan kosnata
    const double PHI = 3.14;
    double r, luas;

    // Judul Program
    cout << "PROGRAM HITUNG LUAS LINGKARAN" << endl;

    // Input Jari-jari
    cout << "\nMasukkan jari-jari lingkaran: ";
    cin >> r;

    // Proses Perhitungan
    luas = PHI * r * r;

    // Output
    cout << "\n===== PERHITUNGAN =====" << endl;
    cout << "Rumus: L = PHI x r x r" << endl;
    cout << "L = " << PHI << " x " << r << " x " << r << endl;
    cout << "Hasil Luas Lingkaran = " << luas << endl;
    cout << "==============================" << endl;
    
    getchar();

    return 0;
}

