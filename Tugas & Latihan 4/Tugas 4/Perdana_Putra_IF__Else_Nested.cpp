#include <iostream>
using namespace std;

int main()
{
	int n1, n2, n3;
	string nama;
	int rata;
	string hadiah;
	
	cout << "-----SELAMAT DATANG DILAPORAN NILAI PERDANA PUTRA HARAHAP----" << endl;
	cout << "\nMasukan Nama Anda : ";
	getline(cin, nama);
	cout << "Masukan Nilai 1 : ";
	cin >> n1;
	cout << "Masukan Nilai 2 : ";
	cin >> n2;
	cout << "Masukan Nilai 3 : ";
	cin >> n3;
	
	rata = (n1 + n2 + n3) / 3;
	if (rata >= 85){
		hadiah = " Komputer Core i5 ";
	}
	else {
		if (rata >= 70){
			hadiah = " Uang Sebesar Rp. 2.500.000";
		}
		else{
			hadiah = "Hiburan"	;
		}
	}
	
	cout << "-------------------------------" << endl;
	cout << "\nSiswa Yang Bernama : " << nama << endl;
	cout << "Memperoleh nilai rata - rata : " << rata << endl;
	cout << "Hasil dari Perlombaan yang diikutinya hadiah yang didapat adalah : " << hadiah;

}
