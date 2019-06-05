package main

import "fmt"

func main() {
    /*
    var hw [3]int8 = [...]int8{'h', 'w', '\n'}
    for _, value := range hw {
        fmt.Printf("%c", value)
    }
    */
    /*
    var hw []int8 = []int8{'h', 'w', '\n'}
    for _, value := range hw {
        fmt.Printf("%c", value)
    }
    */
    var hw map[int8]int8
    hw = make(map[int8]int8)
    hw['h'] = 'h'
    hw['w'] = 'w'
    hw['\n'] = '\n'
    for k, _ := range hw {
        fmt.Printf("%c", k);
    }
}
