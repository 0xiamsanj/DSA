package main

import "fmt"

func count(num int) bool{
    var hash[10] int
    for num!=0{
        rem:=num%10
        hash[rem]++
        num/=10
    }
    for i:=0;i<10;i++{
        if hash[i]>1{
            return false
        }
    }
    return true
}

func solve(n1 int,n2 int)int{
    le:=0
    for i:=n1;i<=n2;i++{
        var is bool
        is =count(i)
        if is{
            le++
        }
    }
        return le
}

func main(){
    var n1,n2 int
    _,err:=fmt.Scanf("%d %d",&n1,&n2)
    if (err!=nil){
        fmt.Print("err:",err)
        return
    }

    res:= solve(n1,n2)
    fmt.Print(res)

}
