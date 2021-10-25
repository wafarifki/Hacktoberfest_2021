<?php

function random($length) {
	$str = "";
	$karakter = array_merge(range('A','Z'), range('a','z'), range('0','9'));
	$max_karakter = count($karakter) - 1;
	for ($i = 0; $i < $length; $i++) {
		$rand = mt_rand(0, $max_karakter);
		$str .= $karakter[$rand];
	}
	return $str;
}

echo random(12);
