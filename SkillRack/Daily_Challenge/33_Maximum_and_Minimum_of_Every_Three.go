package main

import (
    "fmt"
)
func findMax(arr[]int)int{
    MAX:=-1
    for _,num:=range arr{
        MAX=max(num,MAX)
    }
    return MAX
}

func solve(arr *[]int){
    if(len(*arr)==1){
        return
    }

     res:=make([]int,len(*arr))
    for i:=0;i<len(*arr);i++{
        resu:=findMax(*arr[i:i+3])
        fmt.Println(resu)
        res = append(res,resu)
    }
    *arr=res
    fmt.Println(res)
    // for
}

func main(){
    var n int
    fmt.Scanf("%d",&n)
    arr:=make([]int,n)
    for i:=0;i<n;i++{
        fmt.Scanf("%d",&arr[i])
    }
    solve(&arr)
}
