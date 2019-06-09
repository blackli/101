package main

import "fmt"

func main() {
    str := []uint8{'h', 'w', '\n'};
    for i := 0; i < len(str); i++ {
        fmt.Printf("%c", str[i]);
    }
}
