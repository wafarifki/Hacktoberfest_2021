fun main(){
    val kalimat = "Aplikasi"

    val listKalimat = kalimat.toList()
    for(i in listKalimat.size-1 downTo 0){
        print(listKalimat[i])
    }
}