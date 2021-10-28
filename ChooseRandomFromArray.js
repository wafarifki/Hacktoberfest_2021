// Use It For Free - Athallah Dzaki

function ChooseRandom(array)
{
    return array[Math.round(Math.random() * array.length)];
}

let array = ['Jhon', 'Dhoe', 'Elips', 'Ken', 'Kennedy', 'Josh', 'King', 'Lord', 'Queen'];

console.log(ChooseRandom(array));
