package main
import (
    "fmt"
)
func main(){
    var n,x int
    fmt.Scanf("%d %d",&n,&x)
    arr:=make([]int,n)
    for i:=0;i<n;i++{
        fmt.Scanf("%d",&arr[i])
    }
    count:=0
    var flag bool = false
    for _,i:=range arr{
        if i == x{
            flag = true
        }
        if(flag && i%x==0 && i!=x){
            count++
        }
    }
    fmt.Println(count)
}
