<?php
/*
    @ Script ini dibuat oleh Muhammad Randika Rosyid
    @ Dibuat bertujuan sebagai referensi
    @ Dilarang keras untuk asal copy paste program tanpa mencoba memahami nya
    @ Good luck!
*/

echo "PROGRAM TUGAS LOOPING BINTANG\n";
echo "MEMBUAT BINTANG BERDASARKAN PANJANG DAN TINGGI YANG DITENTUKAN\n\n";

echo "Masukkan panjang nya = ";
$panjang = trim(fgets(STDIN));

echo "Masukkan tinggi nya = ";
$tinggi = trim(fgets(STDIN));

echo "\nProgram berhasil dijalankan\n";
for($i=0; $i < $tinggi; $i++) {
    for($j=0; $j < $panjang; $j++)
        echo "*";
    
    $panjang--;
    echo "\n";
}