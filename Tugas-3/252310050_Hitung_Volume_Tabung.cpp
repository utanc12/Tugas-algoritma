// Hitung Volume Tabung Putra Harahap
#include <iostream>
using namespace std;

int main()
{
	// variabel
	const double pi = 3.14159;
	double r, t, volume;
	
	// Progress
	cout << "=== PROGRAM HITUNG VOLUME TABUNG ===" << endl;
	cout << "\nMasukan Jari Jari : ";
	cin >> r;
	cout << "Masukan Tinggi : ";
	cin >> t;
	volume = pi * r * r * t;
	
	//Output
	cout << "\nVolume Tabung = PI * r * r * t" << endl;
	cout << "PI = " << pi << endl;
	cout << "r = " << r << endl;
	cout << "Volume = " << pi << " x " << r << " x " << r << " x " << t << endl;
	cout << "Hasil Volume Tabung = " << volume;
}
