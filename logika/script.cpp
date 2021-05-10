/*
    @ Script ini dibuat oleh Muhammad Randika Rosyid
    @ Dibuat bertujuan sebagai referensi
    @ Dilarang keras untuk asal copy paste program tanpa mencoba memahami nya
    @ Good luck!
*/

#include <iostream>
using namespace std;

int main() {
    int bilangan;
    string hasil;
    
    cout << "PROGRAM TUGAS LOGIKA\n";
    cout << "MENENTUKAN SUATU BILANGAN TERMASUK POSITIF/NEGATIF\n\n";
    
    cout << "Masukkan bilangan = ";
    cin >> bilangan;
    
    hasil = (bilangan >= 0) ? "POSITIF" : "NEGATIF";
    cout << "\nProgram Berhasil di eksekusi\n";
    cout << "Hasilnya, bilangan " << bilangan << " ialah termasuk dalam bilangan " << hasil;
    
    return 0;
}