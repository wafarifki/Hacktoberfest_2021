fun main(){
    print("Masukkan angka favorit Anda : ")
    val angka = readLine()?.toInt()

    if(angka!!%5==0 && angka %3==0) print("Hello World")
    else if (angka %3==0) print("Hello")
    else if(angka %5==0) print("World")
    else print(angka)
}