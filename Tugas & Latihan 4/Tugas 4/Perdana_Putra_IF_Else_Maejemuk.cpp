#include <iostream>
using namespace std;

int main()
{
	int n1, n2, n3;
	string name, hadiah;
	int rata;
	
	
	cout << "-----Selamat Datang DiLaporan Nilai-----" << endl;
	cout << "\nMasukan Nama Anda : ";
	getline(cin, name);
	cout << "Masukan Nilai 1 : ";
	cin >> n1;
	cout << "Masukan Nilai 2 : ";
	cin >> n2;
	cout << "Masukan Nilai 3 : ";
	cin >> n3;
	
	rata = (n1 + n2 + n3) /3;
	
	if (rata >= 85){
		hadiah = "Komputer Core i5";
	}
	else if (rata >= 70){
		hadiah = "Uang Sebesar Rp. 2.500.000";
	}
	else if (rata < 70){
		hadiah = "Hiburan";
	}
	else {
		cout << "Program Eror";
	}
	
	cout << "-------------------------------" << endl;
	cout << "\nSiswa Yang Bernama : " << name << endl;
	cout << "Memperoleh nilai rata - rata : " << rata << endl;
	cout << "Hasil dari perlombaanya yang dikutinya hadiah yang didapat adalah : " << hadiah << endl;
}
