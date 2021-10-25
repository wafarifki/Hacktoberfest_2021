import java.util.*
import kotlin.random.Random

fun main() {
    val inputStream = Scanner(System.`in`)
    var continueOrNot : Int?
    try {
        print("Hey what is your name : ")
        do {
            val name = inputStream.nextLine()
            print("Hi $name let's play the guess number how many times do you want to guess? ")
            val guessLimit = inputStream.nextInt()
            println("You have $guessLimit time to guess and guess from 0 to 40")
            val random = Random.nextInt(0, 40)
            for (i in 0 until guessLimit) {
                print("Enter your number : ")
                val number = inputStream.nextInt()
                if (number < random) {
                    println("higher than $number")
                } else if (number > random) {
                    println("lower than $number")
                } else if (number == random) {
                    println("Congratulations you win")
                    break
                }
                if (i == guessLimit - 1) {
                    println("Try another time!!. The result is $random")
                }
            }
            print("""
                    Still want to play??
                    1. continue
                    2. quit
                    so what do you choose?
                """.trimIndent())
            continueOrNot = inputStream.nextInt()

        }while (continueOrNot != 2)
    } catch (e: Exception) {
        throw IllegalArgumentException("Make sure you make a correct input")
    }


}