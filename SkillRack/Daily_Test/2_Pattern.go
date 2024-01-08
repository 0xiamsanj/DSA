package main

import "fmt"

func main(){
    var n int
    fmt.Scan(&n)
    for i:=0;i<n+1;i++{
        fmt.Print(n)
    }
    fmt.Println()
    for i:=0;i<n;i++{
        for j:=0;j<n+1;j++{
            if j==n-1 {
                fmt.Print(i+1)
            } else{
                fmt.Print(n+i+1)
            }
        }
        fmt.Println()
    }
    for i:=0;i<n+1;i++{
            fmt.Print(n)
        }
}
