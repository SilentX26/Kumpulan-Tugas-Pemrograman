<?php
/*
    @ Script ini dibuat oleh Muhammad Randika Rosyid
    @ Dibuat bertujuan sebagai referensi
    @ Dilarang keras untuk asal copy paste program tanpa mencoba memahami nya
    @ Good luck!
*/

echo "PROGRAM TUGAS ARITMATIKA\n";
echo "PENJUMLAHAN 2 BILANGAN\n\n";

echo 'Masukkan bilangan 1 = ';
$bilangan_1 = trim(fgets(STDIN));

echo 'Masukkan bilangan 2 = ';
$bilangan_2 = trim(fgets(STDIN));

$hasil = $bilangan_1 + $bilangan_2;
echo "\nProgram Berhasil di eksekusi\n";
echo "Hasil penjumlahan {$bilangan_1} + {$bilangan_2} = {$hasil}";