package main

import(
    "fmt"
)

func search(arr []int, aim int) int {
    low := 0;
    high := len(arr) - 1
    for low <= high {
        mid := (low + high)/2
        if arr[mid] == aim {
            return mid
        } else if (arr[mid] > aim) {
            high = mid - 1
        } else {
            low = mid + 1
        }
    }
    return -1
}

func main() {
    fmt.Println(search([]int{1, 2, 3}, 2))
}
