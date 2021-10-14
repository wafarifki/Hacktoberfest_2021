import os
fn main() {
	println('selamat datang di program kalkulator')
	
	// masukkan input dari user
	a := os.input('Masukkan nilai pertama: ')
	aritmatika := os.input('Pilih operator +, -, *, /: ')
	b := os.input('Masukkan nilai kedua: ')

	// metode perhitungan
	println('Hasil perhitungan: ')
	println('$a $aritmatika $b')

	match aritmatika {
		'+' { print('= ${a.int() + b.int()}') }
		'-' { print('= ${a.int() - b.int()}') }
		'*' { print('= ${a.int() * b.int()}') }
		'/' { print('= ${a.int() / b.int()}') }
		else { println(" operator anda salah") }
	}
}