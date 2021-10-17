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
?>