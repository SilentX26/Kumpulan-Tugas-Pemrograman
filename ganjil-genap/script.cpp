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
    
    cout << "PROGRAM TUGAS BILANGAN GANJIL/GENAP\n";
    cout << "MENENTUKAN SUATU BILANGAN TERMASUK GANJIL ATAU GENAP\n\n";
    
    cout << "Masukkan bilangan = ";
    cin >> bilangan;
    
    hasil = ((bilangan % 2) == 0) ? "GENAP" : "GANJIL";
    cout << "\nProgram Berhasil di eksekusi\n";
    cout << "Hasilnya ialah, bilangan " << bilangan << " termasuk kepada bilangan " << hasil;
    
    return 0;
}