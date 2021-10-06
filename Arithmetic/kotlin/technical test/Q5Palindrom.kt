fun main(){
    inputText("Katak")
    println("\n")
    inputText("Ubi")
}

fun inputText(kalimat: String){
    val result = checkPalindrom(kalimat)
    if (result) print("Kalimat $kalimat adalah PALINDROM")
    else print("Kalimat $kalimat BUKAN PALINDROM")
}

fun checkPalindrom(kalimat: String): Boolean {
    val listKalimat = kalimat.toList()
    val listKalimatReversed = arrayListOf<Char>()
    for(i in listKalimat.size-1 downTo 0){
        listKalimatReversed.add(listKalimat[i])
    }
    return listKalimatReversed.joinToString("").lowercase() == kalimat.lowercase()
}
