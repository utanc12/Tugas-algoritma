#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "Masukkan jumlah baris (N) = ";
    cin >> N;
    
    int ukuran_sisi = 2 * N;
    int Batas_D = N - 1; 

    cout << "\nOutput Pola Bintang:\n";
    
    for (int i = 1; i <= ukuran_sisi; i++) {
        
        for (int j = 1; j <= ukuran_sisi; j++) {
            
            int selisih_i = 2 * i - (ukuran_sisi + 1); 
            
            if (selisih_i < 0) {
                selisih_i = -selisih_i;
            }

            int selisih_j = 2 * j - (ukuran_sisi + 1); 
            
            if (selisih_j < 0) {
                selisih_j = -selisih_j;
            }

            int D_kali_2 = selisih_i + selisih_j;
            
            int Batas_D_kali_2 = 2 * Batas_D; 
            
            
            if (D_kali_2 <= Batas_D_kali_2) {
                cout << "  ";
            } else {
                cout << "* ";
            }
        }
        cout << endl;
    }
    
    return 0;
}
