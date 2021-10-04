<?php
while(true){
	echo "masukan angka pertama => ";
	$angka1=trim(fgets(STDIN));
	echo "masukan angka kedua => ";
	$angka2=trim(fgets(STDIN));

	echo "Hasil kali nilai tersebut ialah ";
	echo $angka1*$angka2."\n";
}
