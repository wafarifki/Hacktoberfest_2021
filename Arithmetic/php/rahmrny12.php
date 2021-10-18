<?php
	function hitung_umur($tanggal_lahir){
		$birthDate = new DateTime($tanggal_lahir);
		$today = new DateTime("today");

		if ($birthDate > $today) { 
			exit("0 tahun 0 bulan 0 hari");
		}
		$y = $today->diff($birthDate)->y;
		$m = $today->diff($birthDate)->m;
		$d = $today->diff($birthDate)->d;
		return $y." tahun ".$m." bulan ".$d." hari";
	}

	echo hitung_umur("2022-07-12");

	// ======================================================

	function hitung_pangkat($bilangan, $pangkat) {
		if (!is_numeric($bilangan)) {
			return "Bilangan harus bernilai angka";
		} else if (!is_numeric($pangkat)) {
			return "Pangkat harus bernilai angka";
		}

		$hasil = pow($bilangan, $pangkat);
		return "$bilangan pangkat $pangkat = " . $hasil;
	}

	echo hitung_pangkat(2, 4);
