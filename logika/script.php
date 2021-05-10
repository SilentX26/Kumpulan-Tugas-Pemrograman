<?php
/*
    @ Script ini dibuat oleh Muhammad Randika Rosyid
    @ Dibuat bertujuan sebagai referensi
    @ Dilarang keras untuk asal copy paste program tanpa mencoba memahami nya
    @ Good luck!
*/

echo "PROGRAM TUGAS LOGIKA\n";
echo "MENENTUKAN SUATU BILANGAN TERMASUK POSITIF/NEGATIF\n\n";

echo "Masukkan bilangan = ";
$bilangan = trim(fgets(STDIN));

$hasil = ($bilangan >= 0) ? 'POSITIF' : 'NEGATIF';
echo "\nProgram berhasil di eksekusi\n";
echo "Hasilnya, bilangan {$bilangan} ialah termasuk dalam bilangan {$hasil}";