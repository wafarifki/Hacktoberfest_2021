function sortDown(array) {
    let arr = array

    const result = []

    let res = arr[0];
    let last = 0;
    let i = 0
    
    while (arr.length) {
        if (res >= arr[i]) {
            res = arr[i]
            last = i
        }
    
        if (i === arr.length - 1) {
            result.push(arr[last]);
            arr = [...arr.slice(0, last), ...arr.slice(last + 1, arr.length)]
            res = arr[0]    
            last = 0
            i = 0
        } else {
            i ++
        }
    }

    return result
}

function sortUp(array) {
    let arr = array

    const result = []

    let res = arr[0];
    let last = 0;
    let i = 0
    
    while (arr.length) {
        if (res <= arr[i]) {
            res = arr[i]
            last = i
        }
    
        if (i === arr.length - 1) {
            result.push(arr[last]);
            arr = [...arr.slice(0, last), ...arr.slice(last + 1, arr.length)]
            res = arr[0]    
            last = 0
            i = 0
        } else {
            i ++
        }
    }

    return result
}


/**
 * 
 * simple code for manually sorting number in javascript.
 * not recomended cause very slow rather than embedded vanilla javascript sort
 * 
 * @param {array of integer} arr 
 * @param {string} type 
 * 
 * @returns {array}
 */
function sort(arr, type = "down") {
    if (type === "up") {
        return sortUp(arr)
    }    
    if (type === "down") {
        return sortDown(arr)
    }
}