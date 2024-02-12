package main

import (
    "fmt"
)



func solve(num int)int{
    res:=0
    for i:=num;i>=0;i--{
        res= res*10+ i
    }
    return res
}
func main(){
    var num int
    sum:=0
    fmt.Scanf("%d",&num)
    for num!=0{
        sum+=solve(num%10)
        num/=10
    }
    fmt.Println(sum)
}

