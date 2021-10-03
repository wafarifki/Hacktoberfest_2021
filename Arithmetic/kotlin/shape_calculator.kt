/**
 * You will need to install IntelliJ IDEA to run this project.
 */

const val pi = 3.14

fun getAreaOfCircle(radius: Double): Double {
    return pi * radius * radius
}

fun getAreaOfRectangle(length: Double, width: Double): Double {
    return length * width
}

fun getAreaOfTriangle(width: Double, height: Double): Double {
    return (width * height) / 2
}

fun main(){
    println("1. Circle")
    println("2. Rectangle")
    println("3. Triangle")

    print("Select shape on the list above : ")

    when (readLine()!!.toInt()) {
        1 -> {
            println("")

            print("Input circle radius : ")
            val radius = readLine()!!.toDouble()

            println("Circle area is " + getAreaOfCircle(radius))

        }
        2 -> {
            println("")

            print("Input width : ")
            val width = readLine()!!.toDouble()

            print("Input length : ")
            val length = readLine()!!.toDouble()

            println("Rectangle area is " + getAreaOfRectangle(width, length))

        }
        3 -> {
            println("")

            print("Input width : ")
            val width = readLine()!!.toDouble()

            print("Input height : ")
            val height = readLine()!!.toDouble()

            println("Triangle area is "+ getAreaOfTriangle(width, height))
        }
    }
}
