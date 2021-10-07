fun main(){
    val sample1 = "12:00:00 PM"
    val sample2 = "12:00:00 AM"

    println("$sample1 => ${time(sample1)}")
    println("$sample2 => ${time(sample2)}")
}

fun time(time: String): String {
    val extractTime = time.split(" ", ":").toMutableList()
    var convertTime: Int? = null

    if(extractTime[3] == "AM") convertTime = 0
    else if (extractTime[3] == "PM") convertTime = 12

    extractTime[0] = convertTime.toString().padStart(2, '0' )
    return "${extractTime[0]}:${extractTime[1]}"
}

// Test case salah