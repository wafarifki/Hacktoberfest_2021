import com.sun.org.apache.xpath.internal.operations.Bool

fun main(){
    val email = "muhammad.rezki@.id"
    val result = isEmailValid(email)
    if (result) print("Email $email is valid")
    else print("\nEmail $email is invalid")
}

fun isEmailValid(email: String) : Boolean{

    val emailParams = arrayListOf(false, false, false, false)

    if(email.contains("@")){
        emailParams[0] = true
        val index = email.indexOf("@")
        if (email.substring(index+1).contains(".")) emailParams[1] = true
        if (email.substring(0, index).length <= 20) emailParams[2] = true
        if (email.substring(index+1) == "co.id" || email.substring(index+1) == ".id") emailParams[3] = true
    }

    val trueCount = emailParams.count{ it }
    if(trueCount == emailParams.size) return true
    else {
        if(!emailParams[0]) print("Format email wajib menggunakan '@'")
        else if(!emailParams[1]) print("Format email wajib menggunakan tanda '.' setelah '@'")
        else if(!emailParams[2]) print("Panjang email maksimum 20 karakter sebelum '@'")
        else if(!emailParams[3]) print("Domain yang diperbolehkan hanya .co.id dan .id")
    }

    return false
}

