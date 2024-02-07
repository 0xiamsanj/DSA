package main

import (
    "fmt"
    "math"
)
func decToBin(num[]int,pow int) int{
    // fmt.Println(num," ",pow)
    var res int
    for i,n:=range num{
        res  += n* int(math.Pow(2,float64(pow-1-i)))
    }
    // fmt.Println(Num)
    return res
}
func main(){
    var r,c int
    fmt.Scanf("%d %d",&r,&c)

    // For declaring a 2D array
    matrix := make([][]int, r)
    for i := 0; i < r; i++ {
        matrix[i] = make([]int, c)
    }

    for i:=0;i<r;i++{
        for j:=0;j<c;j++{
            fmt.Scanf("%d",&matrix[i][j])
        }
    }
    for i:=0;i<r;i++{
        for j:=i+1;j<r;j++{
            if decToBin(matrix[i],c) > decToBin(matrix[j],c){
                matrix[i],matrix[j]=matrix[j],matrix[i]
            }
        }
    }

    for _,arr:=range matrix{
        fmt.Println(arr)
    }
}
