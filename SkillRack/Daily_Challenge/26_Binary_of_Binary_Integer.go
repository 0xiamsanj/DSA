package main

import
(   "fmt"
    "math"
)



func main(){
    var n,i int
    fmt.Scanf("%d",&n)

    var x[100] int

    for i=0;n!=0;i++ {
        x[i] = n%2
        n/=2
    }

    var numX int
    for j:=i-1;j>=0;j--{
        fmt.Print(x[j])
        pow:=int(math.Pow(10,float64(i-j+1)))
        numX += x[i]*pow
    }
    for i=0;numX!=0;i++ {
        x[i] =numX%2
        numX/=2
    }
    fmt.Print(x)

}
