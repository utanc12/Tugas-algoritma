#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3;
    string name, hadiah;
    int rata;
    int kategori;

	cout << "-----Selamat Datang Dilaporan Nilai-----" << endl;
    cout << "\nMasukan Nama Anda : ";
    getline(cin, name);
    cout << "Masukan Nilai 1 : ";
    cin >> n1;
    cout << "Masukan Nilai 2 : " ;
    cin >> n2;
    cout << "Masukan Nilai 3 : ";
    cin >> n3;

    rata = (n1 + n2 + n3) / 3.0;

    // Tentukan kategori dari rata-rata
    if (rata >= 85) {
        kategori = 3;
    }
    else if (rata >= 70) {
        kategori = 2;
    }
    else if (rata <70) {
        kategori = 1;
    }
    else {
        kategori = 0; // nilai error
    }

    // Switch case berdasarkan kategori
    switch (kategori) {
        case 3:
            hadiah = "Komputer Core i5";
            break;
        case 2:
            hadiah = "Uang sebesar Rp. 2.500.000";
            break;
        case 1:
            hadiah = "hiburan";
            break;
        default:
            cout << "Error: Nilai rata-rata tidak valid!" << endl;
            return 0;
    }

    cout << "\nSiswa Yang Bernama : " << name << endl;
    cout << "Memperoleh Nilai Rata-rata : " << rata << endl;
    cout << "Hasil dari perlombaanya yang dikutinya hadiah yang didapat adalah :  " << hadiah << endl;

    return 0;
}

