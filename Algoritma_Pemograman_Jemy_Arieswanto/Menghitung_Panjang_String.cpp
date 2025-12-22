#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    char kata[100]; // Membuat dan deklari variabel Kata
    int panjang = 0; // Membuat dan deklarasi variabel Panjang

    cout << "====================================\n";
    cout << "   PROGRAM MENGHITUNG PANJANG STRING \n"; // HEADER
    cout << "====================================\n\n";

    cout << "Masukkan string : ";
    gets(kata);

    while(kata[panjang] != '\0'){ // Kerika Kata[panjang] tidak sama dengan angka null
        panjang++; // panjang dtimabahkan
    }

    cout << "\nHasil Perhitungan\n";
    cout << "----------------\n";
    cout << "Panjang string  : " << panjang << endl; // output
    cout << "(Termasuk spasi)\n";

    return 0;
}

