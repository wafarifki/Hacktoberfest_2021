package main

import "fmt"

func main() {
	var age int

	fmt.Print("Input age: ")
	fmt.Scanln(&age)

	mars := age * 365 / 687

	fmt.Println("You age in mars is : " , mars)
}