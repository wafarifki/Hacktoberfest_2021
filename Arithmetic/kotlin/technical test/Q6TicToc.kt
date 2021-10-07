fun TicToc(n: Int?){
    for (i in 1..n!!){
        if(i%7==0 && i %13==0) println("TicToc")
        else if (i %7==0) println("Tic")
        else if(i %13==0) println("Toc")
        else println(i)
    }
}

fun main(){
    TicToc(20)
}