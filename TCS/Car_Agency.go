package main

import ("fmt"
"math"
)

func main (){
    var n,r1,r2,x int
    var total int

    _,err:=fmt.Scanf("%d %d %d %d",&n,&x,&r1,&r2)
    if(err!=nil){
        fmt.Print("Err:",err)
    }
    f:= math.Ceil(float64(x/60))
    for i:=0;i<n;i++{
        total+=r1
    }
    rem:=int(f)-n+1
    for i:=0;i<rem;i++{
        total+=r2
    }
    fmt.Print(total)
}
