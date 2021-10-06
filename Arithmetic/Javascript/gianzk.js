const wordMoreRepet=(word)=>{
    let counts=0
    for(i in word){
        value=word.split(word[i]).length - 1
         if(counts<value){
             counts=value
         }
    }
    return counts 
}
let mensaje="Hacktoberfest"
wordMoreRepet(mensaje)
