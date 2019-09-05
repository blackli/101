package main

import "fmt"

func main() {
	pwd := []int{1, 2, 3}
	for k, v := range pwd {
		fmt.Println(k, v)
	}
}
