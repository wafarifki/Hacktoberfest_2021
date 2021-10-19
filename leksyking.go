package main

import (
	"fmt"
	"strconv"
)

func main() {
	var i int = 21
	fmt.Printf("%v, %T\n", i, i)

	var j string
	j = strconv.Itoa(i)
	fmt.Printf("%v,%T", j, j)

}
