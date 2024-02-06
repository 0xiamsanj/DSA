package main
import (
    "fmt"
)

func calcPow(n int)int{
    num:=1
    for i:=0;i<n;i++{
        num*=10
    }
    // fmt.Println(num)
    return num
}
func main(){
    var n,count,num int
    var arr[18] int
    fmt.Scanf("%d",&n)
    for i:=0;i<n;i++{
        fmt.Scanf("%d",&arr[i]);
        if arr[i] == 0{
            count++
        }
    }

    for i:=0;i<n;i++{
        if arr[i] == 0{
            continue
        }
        num= num*calcPow(i) + arr[i]
        fmt.Println(num)
    }
    fmt.Println(num)

}
