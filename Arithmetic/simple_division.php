<?php

while(true){
	echo "masukan angka pertama => ";
	$angka1=trim(fgets(STDIN));
	echo "masukan angka kedua => ";
	$angka2=trim(fgets(STDIN));
    
    if($angka1 < $angka2) {
        echo "angka pertama harus lebih besar daripada angka kedua" . PHP_EOL;
        exit();
    }
	echo "Hasil kali nilai tersebut ialah ";
	echo round($angka1 / $angka2)."\n";
}