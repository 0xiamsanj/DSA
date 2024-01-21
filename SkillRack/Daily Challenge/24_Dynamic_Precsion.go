package main

import ("fmt"
        "math"
       )

func setPrecision(num float64, prec float64)float64{
    output:= math.Pow(10,float64(prec))
    return float64(num * output) / output
}
func main(){
    var m,n,x float64
    _,err:= fmt.Scanf("%f %f %f",&m,&n,&x)
    if(err!=nil){
        fmt.Print("Error:", err)
        return
    }
    var result float64
    result = setPrecision(float64( m/n),x)
    fmt.Print(result)
}
