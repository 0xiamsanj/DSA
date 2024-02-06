package main

import (
    "fmt"
    "math"
)

func length(num int) int{
    count:=0
    for num!=0{
        num/=10
        count++
    }
    return count
}

func squareRoot(num int) bool{
    n:=int(math.Sqrt(float64(num)))
    if n*n==num{
        return true
    }
    return false
}

func main(){
    var n int
    fmt.Scanf("%d",&n)
    len:=length(n)
    half1:=n/int(math.Pow(10,float64(len/2)))
    half2:=n%int(math.Pow(10,float64(len/2)))
    if squareRoot(half1) && squareRoot(half2) && squareRoot(n){
        fmt.Println("YES")
    } else {
        fmt.Println("NO")
    }
}
