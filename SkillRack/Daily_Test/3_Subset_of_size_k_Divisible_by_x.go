package main


import (
    "fmt"
    "math"
)

func main(){
    var n,k,x int

    _, err := fmt.Scanf("%d %d %d", &n, &k, &x)
	if err != nil {
		fmt.Println("Error:", err)
		return
	}

    div:=int(math.Pow(10,float64(k)))
    fmt.Println(div)
    var temp int=n
    var rem ,count int
    for temp!=0{
        rem = temp%div
    fmt.Println(temp)
        if(rem>=div && rem%x==0){
            count++
        }
        temp/=(div-1)
    }
    fmt.Print(count)
}
