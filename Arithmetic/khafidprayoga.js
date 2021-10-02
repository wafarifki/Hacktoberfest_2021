const addNumber = async (x, y) => {
  if (typeof x === "number" && typeof y === "number") {
    return x + y;
  } else {
    return "Params must be Integer";
  }
};

addNumber(3.3, 2.2).then((result) => console.log(result)); // 5.5
addNumber(2019, 2).then((result) => console.log(result)); // 2021
