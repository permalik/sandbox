package main

// TODO: impl dynamic array?
// TODO: impl multidimensional array

import "fmt"

func staticArray() {
	arr_one := [10]int{0, 1, 2, 3, 4, 5, 6, 7, 8, 9}
	fmt.Println("static, manually instatiated array:\n", arr_one)

	arr_two := [...]int{0, 1, 2, 3, 4, 5, 6, 7, 8, 9}
	fmt.Println("static, length inferred array:\n", arr_two)

	arr_three := [...]int{0, 1, 2, 7: 7, 8, 9}
	fmt.Println("static, length inferred, zeroed array:\n", arr_three)
}

func multidimensionalArray() {
	var arr [2][3]int
	counter := 1

	for i := 0; i < 2; i++ {
		for j := 0; j < 3; j++ {
			arr[i][j] = counter
			counter++
		}
	}
	fmt.Println("multidimensional array:\n", arr)
}

func main() {
	staticArray()
	multidimensionalArray()
}
