#include <iostream>
using namespace std;

int main() {
    int n;
    bool prima = true;
	cout << "Selamat Datang Di Pengcekan Angka Prima  " << endl;
    cout << "\nMasukkan angka: ";
    cin >> n;

    if (n <= 1) {
        prima = false;
    } else {
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                prima = false;
            }
        }
    }

    if (prima) {
        cout << "Termasuk bilangan PRIMA" << endl;
    } else {
        cout << "Bukan termasuk bilangan PRIMA" << endl;
    }

    return 0;
}

