/*
    @ Script ini dibuat oleh Muhammad Randika Rosyid
    @ Dibuat bertujuan sebagai referensi
    @ Dilarang keras untuk asal copy paste program tanpa mencoba memahami nya
    @ Good luck!
*/

#include <iostream>
#include <cstring>
using namespace std;

string __toupper(string param) {
    char str[param.size() + 1];
    strcpy(str, param.c_str());
   
    string hasil;
    for (int i=0; i<strlen(str); i++)
        hasil += string(1, toupper(str[i]));
        
    return hasil;
}

int main() {
    string jenis;
    int bilangan_min, bilangan_max;
    
    cout << "PROGRAM TUGAS LOOPING BILANGAN GANJI/GENAP\n";
    cout << "MENAMPILKAN BILANGAN GANJIL/GENAP DARI RANGE BILANGAN YANG DITENTUKAN\n\n";
    
    cout << "Jenis bilangan yang ingin ditampilkan (GANJIL/GENAP) = ";
    cin >> jenis;
    jenis = __toupper(jenis);
    
    cout << "Masukkan bilangan minimal = ";
    cin >> bilangan_min;
    
    cout << "Masukkan bilangan maksimal = ";
    cin >> bilangan_max;
    
    if(jenis == "GANJIL" || jenis == "GENAP") {
        cout << "\nProgram berhasil dieksekusi\n";
        for(int i=bilangan_min; i <= bilangan_max; i++) {
            if(jenis == "GANJIL" && (i % 2) != 0)
                cout << i << "\n";
            else if(jenis == "GENAP" && (i % 2) == 0)
                cout << i << "\n";
        }
        
    } else {
        cout << "\nProgram gagal dieksekusi, jenis bilangan tidak dikenali.";
    }
    
    return 0;
}