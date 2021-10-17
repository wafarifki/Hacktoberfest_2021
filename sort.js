const points = [12, 34, 54, 2, 3];
console.log("Array before sorting:")
console.log(points.sort(function(a, b){return b - a}).toString())
console.log("Array after sorting:")
console.log(points.sort(function(a, b){return a - b}).toString())

//
// Array before sorting:
// 54,34,12,3,2
// Array after sorting:
// 2,3,12,34,54
//
