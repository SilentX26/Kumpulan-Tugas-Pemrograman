<?php
/*
    @ Script ini dibuat oleh Muhammad Randika Rosyid
    @ Dibuat bertujuan sebagai referensi
    @ Dilarang keras untuk asal copy paste program tanpa mencoba memahami nya
    @ Good luck!
*/

echo "PROGRAM TUGAS BILANGAN GANJIL/GENAP\n";
echo "MENENTUKAN SUATU BILANGAN TERMASUK GANJIL ATAU GENAP\n\n";

echo "Masukkan bilangan = ";
$bilangan = trim(fgets(STDIN));

$hasil = (($bilangan % 2) == 0) ? "GENAP" : "GANJIL";
echo "\nProgram berhasil dieksekusi\n";
echo "Hasilnya ialah, bilangan {$bilangan} termasuk kepada bilangan {$hasil}";