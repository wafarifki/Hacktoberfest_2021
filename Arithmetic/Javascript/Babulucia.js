const factorialOfNumber = number =>
    number < 0
        ? (() => {
            throw new TypeError('No negative numbers please');
        })()
        : number <= 1
            ? 1
            : number * factorialOfNumber(number - 1);

// Examples
factorialOfNumber(4); // 24
factorialOfNumber(8); // 40320