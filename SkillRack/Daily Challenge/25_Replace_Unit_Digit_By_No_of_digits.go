package main

import "fmt"
func main(){
    var n int
    fmt.Scanf("%d",&n)
    var arr = make([]int, n)

    for i:=0;i<n;i++{
        fmt.Scan(&arr[i])
    }
}
