fun indexData(data: Any): Any {
    val sortedArray = arrayListOf(1, 2, 2, 3, 3, 3, 4 ,5)
    return if (data in sortedArray) sortedArray.indexOf(data)
    else -1
}

fun main(){
    print(indexData("B"))
}

// Test case salah