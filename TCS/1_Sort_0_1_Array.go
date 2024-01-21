package main

import "fmt"

func swap(a *int, b* int ){
    var temp int
    temp = *a
    *a = *b
    *b = temp
}
func main(){

    arr:= [12]int{0,1,0,1,0,0,1,1,0,1,1,0}
    for i:=0;i<len(arr);i++{
        for j:=i;j<len(arr);j++{
            if arr[i]>arr[j]{
                swap(&arr[i],&arr[j])
            }
        }
    }
fmt.Print(arr)
}
