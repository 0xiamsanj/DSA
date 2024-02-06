package main

import (
    "fmt"
    "math"
)
func length(num int) int{
    var count int
    for num!=0{
        num/=10
        count++
    }
    return count
}
func concatenateFirstAndLastXDigits(n int, x int){
    leng:=length(n)
    mod2:=int(math.Pow(10,float64(leng-x)))
    mod:=int(math.Pow(10,float64(x)))
    num:=((n/mod2)*mod)+(n%mod)
    fmt.Println(num)
}
func main(){
    var n,x int
    fmt.Scanf("%d %d",&n,&x)
    concatenateFirstAndLastXDigits(67904,5)
}

