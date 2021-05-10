<?php
/*
    @ Script ini dibuat oleh Muhammad Randika Rosyid
    @ Dibuat bertujuan sebagai referensi
    @ Dilarang keras untuk asal copy paste program tanpa mencoba memahami nya
    @ Good luck!
*/

echo "PROGRAM TUGAS LOOPING KATA\n";
echo "MENAMPILKAN KATA PER HURUF\n\n";

echo "Masukkan kata = ";
$kata = trim(fgets(STDIN));

echo "\nProgram berhasil dijalankan\n";
for($i=strlen($kata); $i > 0; $i--)
    echo substr($kata, 0, $i) . "\n";