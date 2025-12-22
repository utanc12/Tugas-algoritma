#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	// Membuat dan Mendeklarasikan Variabel
    char kata[100]; 
    int i = 0;
    int panjang = 0;
    int totalKata = 0;
    bool adakata = true;


    cout << "Input Kalimat : ";
    gets(kata);

	
    while(kata[i] != '\0'){ // Ketika kata[i] tidak sama dengan angka null Jalankan loop while
        if(kata[i] != ' ' && adakata == true){ // jika kata[i] tidak sama dengan spasi dan adakata == true maka jalankan if
            totalKata++; // totalkata ditambahkan
            adakata = false; // adakata menjadi false
        }
        else if(kata[i] == ' '){ // ketika kata[i] sama dengan spasi makan jalankan
            adakata = true; // adakata == true
        }
        panjang++; // panjang ditambahkan
        i++; // i ditambahkakan
    }
    
    cout << "Kalimat Dibalik : ";
    for(i = panjang - 1; i >= 0; i--){
    cout << kata[i];
    }


    cout << endl;
    cout << "Total Kata : " << totalKata;
}

