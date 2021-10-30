// Right Rotation of an array by X-number of times

// Creating a function that accept two params {array and number of times }

const RightRotate = (arr, numOfTimes)=>{
    let newArray = arr.concat()
    for(let i = 0; i < numOfTimes; i++ ){
       let lastValue = newArray.pop()
        newArray.unshift(lastValue)
    }
    return newArray
}

const sampleArray = [1,2,3,4,5]
const num_of_rotation = 1
// expected result if numOfTimes is 1, [5,1,2,3,4]

console.log(RightRotate(sampleArray,num_of_rotation))