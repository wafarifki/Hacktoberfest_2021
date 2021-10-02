class Arithmetic {

    phi: number = 3.14
    result: number

    large(r: number) {
        return this.result = this.phi * r * r
    }

    around(r: number) {
        return this.result = 2 * (this.phi * r)
    }

}

let arithmetic = new Arithmetic()
console.log(arithmetic.large(7))
console.log(arithmetic.around(14))