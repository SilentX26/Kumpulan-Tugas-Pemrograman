/*
    @ Script ini dibuat oleh Muhammad Randika Rosyid
    @ Dibuat bertujuan sebagai referensi
    @ Dilarang keras untuk asal copy paste program tanpa mencoba memahami nya
    @ Good luck!
*/

#include <iostream>
using namespace std;

int main() {
    int panjang, tinggi;
    
    cout << "PROGRAM TUGAS LOOPING BINTANG\n";
    cout << "MEMBUAT BINTANG BERDASARKAN PANJANG DAN TINGGI YANG DITENTUKAN\n\n";
    
    cout << "Masukkan panjang nya = ";
    cin >> panjang;
    
    cout << "Masukkan tinggi nya = ";
    cin >> tinggi;
    
    cout << "\nProgram berhasil dijalankan\n";
    for(int i=0; i < tinggi; i++) {
        for(int j=0; j < panjang; j++)
            cout << "*";
            
        panjang--;
        cout << "\n";
    }
    
    return 0;
}