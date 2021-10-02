/**
 * You can edit, run, and share this code. 
 * play.kotlinlang.org 
 */

class Math {
    companion object {
        fun multiply(a: Int, b: Int): Int {
          return a * b;
        }

        fun substract(a: Int, b: Int): Int {
            return a - b;
        }

        fun add(a: Int, b: Int): Int {
            return a + b;
        }

        fun divide(a: Int, b: Int): Int {
            val result = a / b;

            return result;
        }
    }
}

fun main() {
    var apple = Math.multiply(1, 5);
    apple = Math.substract(apple, 1);
    apple = Math.divide(apple, 2);
    println(apple);
}
