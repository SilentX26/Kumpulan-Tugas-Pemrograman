/*
    @ Script ini dibuat oleh Muhammad Randika Rosyid
    @ Dibuat bertujuan sebagai referensi
    @ Dilarang keras untuk asal copy paste program tanpa mencoba memahami nya
    @ Good luck!
*/

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string kata, hasil;
    
    cout << "PROGRAM TUGAS LOOPING KATA\n";
    cout << "MENAMPILKAN KATA PER HURUF\n\n";
    
    cout << "Masukkan kata = ";
    cin >> kata;
    
    cout << "\nProgram berhasil dijalankan\n";
    for(int i=kata.length(); i > 0; i--)
        cout << kata.substr(0, i) << "\n";
    
    return 0;
}