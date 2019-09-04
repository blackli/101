package main

import (
	"fmt"
)

func main() {
	var x int = 1
	var f float32 = float32(x)
	fmt.Printf("Type: %T", f)
	fmt.Println(f)
}

