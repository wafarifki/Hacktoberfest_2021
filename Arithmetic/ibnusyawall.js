/**
 * mathMe adalah utilitas matematika
 * Usage: mathMe.perkalian(2, 4); // 8
 **/

class mathMe {
    static perkalian(...num) {
        return eval(num.join`*`)
    }

    static pertambahan(...num) {
        return eval(num.join`+`)
    }

    static pembagian(...num) {
        return eval(num.join`/`)
    }

    static pengurangan(...num) {
        return eval(num.join`-`)
    }
}
