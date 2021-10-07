<?php

// 
function luasLingkaran($x)
{
    if ($x % 7 == 0) {
        $phi = 3.14;
    } else {
        $phi = 22 / 7;
    }
    return $phi * ($x * $x);
}
echo luasLingkaran(7);

// 
function luasPersegi($x, $y)
{
    return $x * $y;
}
echo luasPersegi(10, 6);

// 
function luasKubus($x)
{
    return $x * $x * $x;
}
echo luasKubus(6);

// 
function luasBalok($x, $y, $z)
{
    return $x * $y * $z;
}
echo luasBalok(12, 45, 2);
