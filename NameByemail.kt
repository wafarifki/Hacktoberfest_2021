import java.util.*
import kotlin.collections.ArrayList

fun main() {
    val inputStream = Scanner(System.`in`)
    print("Write your email???")
    val email = inputStream.next()
    val listName = ArrayList<String>()
    val listResult = ArrayList<String>()
    var name: String?
    for (i in email) {
        name = i.toString()
        listName.add(name)
    }
    var firstName: String
    var i = 0
    while (i in 0..listName.size) {
        if (listName[i] == "@") {
            break
        }
        firstName = listName[i]
        listResult.add(firstName)
        i++
    }
    print("Your name is : ")
    for(i in listResult)
    {
        print(i)
    }

}