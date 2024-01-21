package main

import "fmt"

func solve(arr[] int, k int){
    l:=len(arr)
    i:=l-k
    j:=0
    temp:= make([]int,l)
    for ok:=true;ok;ok=(i%l!=l-k){
        temp[j] = arr[i%l]
        i++
        j++
    }
    fmt.Print(temp)
}
func main(){
    arr:= []int{10,20,30,40,50,60,70,80}
    var k int
    fmt.Scan(&k)
    solve(arr,k)

}
