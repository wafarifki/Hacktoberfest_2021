fun removeDuplicate(word: String): String {
    return word.toList().distinct().joinToString("")
}

fun main(){
    removeDuplicate("hello world")
}

// Test case salah