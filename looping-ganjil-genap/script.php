<?php
/*
    @ Script ini dibuat oleh Muhammad Randika Rosyid
    @ Dibuat bertujuan sebagai referensi
    @ Dilarang keras untuk asal copy paste program tanpa mencoba memahami nya
    @ Good luck!
*/

echo "PROGRAM TUGAS LOOPING BILANGAN GANJI/GENAP\n";
echo "MENAMPILKAN BILANGAN GANJIL/GENAP DARI RANGE BILANGAN YANG DITENTUKAN\n\n";

echo "Jenis bilangan yang ingin ditampilkan (GANJIL/GENAP) = ";
$jenis_bilangan = strtoupper( trim(fgets(STDIN)) );

echo "Masukkan bilangan minimal = ";
$bilangan_min = trim(fgets(STDIN));

echo "Masukkan bilangan maksimal = ";
$bilangan_max = trim(fgets(STDIN));

if(in_array($jenis_bilangan, ['GANJIL', 'GENAP'])) {
    echo "\nProgram berhasil dieksekusi\n";
    for($i=$bilangan_min; $i <= $bilangan_max; $i++) {
        if($jenis_bilangan == 'GANJIL' && ($i % 2) != 0)
            echo "{$i}\n";
        elseif($jenis_bilangan == 'GENAP' && ($i % 2) == 0)
            echo "{$i}\n";
    }

} else {
    echo "\nProgram gagal dieksekusi, jenis bilangan tidak dikenali.";
}