import java.lang.Exception
import java.util.*
import kotlin.collections.ArrayList

fun main() {
    var user: User? = null
    val list = ArrayList<User>()
    val inputStream = Scanner(System.`in`)
    do {
        print(
            """
            Menu
            1. Update The User
            2. Print User Data
            3. Quit
            Select = 
        """.trimIndent()
        )
        val selected = inputStream.nextInt()
        if (selected < 1 || selected > 3) {
            println("Just select number 1 until 3")
        } else {
            if (selected == 1) {
                print("Name :")
                inputStream.nextLine()
                val name = inputStream.nextLine()
                print("Occupation : ")
                val occupation = inputStream.nextLine()
                print("Age : ")
                val age = inputStream.next()
                user = User(name, occupation, age)
                list.add(user)
            } else if (selected == 2) {
                println("Print all the data")
                println("The data : ")
                for (i in list) {
                    println(
                        """
                            Name       : ${i.name}
                            Occupation : ${i.occupation}
                            Age        : ${i.age}
                        """.trimIndent()
                    )
                }

            } else {
                break
            }
        }
    } while (true)
}

data class User(
    var name: String,
    var occupation: String,
    var age: String
)

