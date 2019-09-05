package main

import "fmt"

type V struct {
    X int
    Y int
}

func main() {
    vv := V{1, 2}
    vp := &vv
    fmt.Println(((*vp).X))
    fmt.Println(vp.X)
}
