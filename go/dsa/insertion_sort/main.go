package main

import (
	"fmt"
)

func iterativeInsertionSort(arr *[10]int, len int) {
	for i := 1; i < len; i++ {
		tmp := arr[i]
		j := i - 1

		for j >= 0 && arr[j] > tmp {
			arr[j+1] = arr[j]
			j--
		}

		arr[j+1] = tmp
	}
}

func recursiveInsertionSort(arr *[10]int, len int) {
	if len <= 1 {
		return
	}

	recursiveInsertionSort(arr, len-1)

	tmp := arr[len-1]
	j := len - 2

	for j >= 0 && arr[j] > tmp {
		arr[j+1] = arr[j]
		j--
	}

	arr[j+1] = tmp
}

func main() {
	array_one := [10]int{5, 7, 3, 6, 1, 4, 0, 9, 8, 2}
	length_one := len(array_one)

	fmt.Println("iterative insertion sort:")
	fmt.Println(array_one)
	iterativeInsertionSort(&array_one, length_one)
	fmt.Println(array_one)

	array_two := [10]int{5, 7, 3, 6, 1, 4, 0, 9, 8, 2}
	length_two := len(array_two)

	fmt.Println("recursive insertion sort:")
	fmt.Println(array_two)
	recursiveInsertionSort(&array_two, length_two)
	fmt.Println(array_two)
}
