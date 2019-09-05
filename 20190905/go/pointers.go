package main

import "fmt"

func main() {
    i := 1
    j := &i
    fmt.Println(*j)
    *j++
    fmt.Println(*j)
}
