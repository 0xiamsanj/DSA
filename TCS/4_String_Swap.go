package main

import "fmt"

func swap(a *byte, b *byte){
    temp:=*a
    *a=*b
   *b=temp
}
func main(){
    var str string
    fmt.Scan(&str)

    le:=len(str)
    if le%2!=0 {
           le--
       }
       byteslice:=[]byte(str)
    for i:=0;i<le;i+=2{
        temp:= byteslice[i]
        byteslice[i] = byteslice[i+1]
        byteslice[i+1]= temp
    }
    str = string(byteslice)
    fmt.Print(str)
}
