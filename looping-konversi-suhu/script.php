<?php
/*
    @ Script ini dibuat oleh Muhammad Randika Rosyid
    @ Dibuat bertujuan sebagai referensi
    @ Dilarang keras untuk asal copy paste program tanpa mencoba memahami nya
    @ Good luck!
*/

echo "PROGRAM TUGAS LOOPING KONVERSI SUHU\n";
echo "MENAMPILKAN LOOPING YANG BERISI HASIL DARI KONVERSI SUHU\n\n";

echo "Masukkan nilai suhu celcius minimal = ";
$min_celcius = trim(fgets(STDIN));

echo "Masukkan nilai suhu celcius maksimal = ";
$max_celcius = trim(fgets(STDIN));

echo "\nProgram berhasil dijalankan\n";
for($i=$min_celcius; $i <= $max_celcius; $i++) {
    // reamur
    $hasil_reamur = (4 * $i) / 5;

    // fahrenheit
    $hasil_fahrenheit = ((9 * $i) / 52) + 32;

    echo "{$i}° celcius, {$hasil_reamur}° reamur, dan {$hasil_fahrenheit}° fahrenheit\n";
}