/*
    @ Script ini dibuat oleh Muhammad Randika Rosyid
    @ Dibuat bertujuan sebagai referensi
    @ Dilarang keras untuk asal copy paste program tanpa mencoba memahami nya
    @ Good luck!
*/

#include <iostream>
using namespace std;

int main() {
    int bilangan_1, bilangan_2, hasil;
    
    cout << "PROGRAM TUGAS ARITMATIKA\n";
    cout << "PENJUMLAHAN 2 BILANGAN\n\n";
    
    cout << "Masukkan bilangan 1 = ";
    cin >> bilangan_1;
    
    cout << "Masukkan bilangan 2 = ";
    cin >> bilangan_2;
    
    hasil = bilangan_1 + bilangan_2;
    cout << "\nProgram Berhasil di eksekusi\n";
    cout << "Hasil penjumlahan " << bilangan_1 << " + " << bilangan_2 << " = " << hasil;
    
    return 0;
}