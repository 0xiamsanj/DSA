package main

import (
    "fmt"
)

func countDigits(num int) int{
    var hash[10] int
    temp:=num
    // fmt.Println(num)
    for num!=0{
        hash[num%10]++
        num/=10
    }
    count:=0
    for i:=0;i<10;i++{
        if hash[i] >= 2{
            count++
        }
    }

    if count>=2 {
        // fmt.Print(temp, " ")
        return temp
    }
    return -1
}

func main(){
    var a, b int
    fmt.Scanf("%d %d",&a,&b)
    flag:=false
    for i:=a;i<=b;i++{
        res:=countDigits(i)
        if(res!=-1){
            fmt.Println(res)
            flag=true
        }
    }

    if !flag{
        fmt.Print("-1")
    }
}
