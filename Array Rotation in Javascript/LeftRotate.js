// Array leftRoate with X-number of times

// Creating a function that accepts two parameters, the array and the X-number of times
const leftRotation = (arr, num_of_rotation)=>{

    // duplicating the array firstly
    let newList = arr.concat()  

    // main rotation
    if(num_of_rotation){
    for (let i = 0; i < num_of_rotation; i++ ){
        let firstValue = newList.shift()
        newList.push(firstValue)
    }
}
    return newList

}

const numberOfRotation = 4;

const sampleArray = [1,2 ,3, 4,5]

console.log(leftRotation(sampleArray, 2))
