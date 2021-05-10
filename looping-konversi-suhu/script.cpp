/*
    @ Script ini dibuat oleh Muhammad Randika Rosyid
    @ Dibuat bertujuan sebagai referensi
    @ Dilarang keras untuk asal copy paste program tanpa mencoba memahami nya
    @ Good luck!
*/

#include <iostream>
using namespace std;

int main() {
    int min_celcius, max_celcius, hasil_reamur, hasil_fahrenheit;
    
    cout << "PROGRAM TUGAS LOOPING KONVERSI SUHU\n";
    cout << "MENAMPILKAN LOOPING YANG BERISI HASIL DARI KONVERSI SUHU\n\n";
    
    cout << "Masukkan nilai suhu celcius minimal = ";
    cin >> min_celcius;
    
    cout << "Masukkan nilai suhu celcius maksimal = ";
    cin >> max_celcius;
    
    cout << "\nProgram berhasil dijalankan\n";
    for(int i=min_celcius; i <= max_celcius; i++) {
        // reamur
        hasil_reamur = (4 * i) / 5;

        // fahrenheit
        hasil_fahrenheit = ((9 * i) / 52) + 32;

        cout << i << "° celcius, " << hasil_reamur << "° reamur, dan " << hasil_fahrenheit << "° fahrenheit\n";
    }
    
    return 0;
}