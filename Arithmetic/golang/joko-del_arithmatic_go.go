package main

import (
	"fmt"
	"strconv"
)

func main() {

	var panjangPersegiPanjang string = "8"
	var lebarPersegiPanjang string = "5"

	var alasSegitiga string = "6"
	var tinggiSegitiga string = "7"

	var P, _ = strconv.Atoi(panjangPersegiPanjang)
	var L, _ = strconv.Atoi(lebarPersegiPanjang)
	var alas, _ = strconv.Atoi(alasSegitiga)
	var T, _ = strconv.Atoi(tinggiSegitiga)

	var luasPersegiPanjang int = P * L
	var kelilingPersegiPanjang int = 2 * (P + L)
	var luasSegitiga int = (alas * T) / 2

	fmt.Println("luas persegi panjang : ", luasPersegiPanjang)
	fmt.Println("keliling persegi panjang : ", kelilingPersegiPanjang)
	fmt.Println("Luas segitiga : ", luasSegitiga)

}
