package main

import "fmt"

func split(sum int) (x int, y int) {
    x = sum - 1
    y = sum
    return
}

func main() {
    fmt.Println(split(3))
}
