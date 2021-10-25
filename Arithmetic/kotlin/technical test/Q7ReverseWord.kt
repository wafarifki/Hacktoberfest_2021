fun main(){
    reverse("hello world")
}

fun reverse(word: String){
    val listWord = word.toList()
    for(i in listWord.size-1 downTo 0){
        print(listWord[i])
    }
}