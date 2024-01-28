package main

import "fmt"

func main(){
    var str string
    fmt.Scanf("%s",&str)
    newStr:=[]rune(str)
    length:=len(newStr)
    for i:=0;i<length/2;i++{
        newStr[i],newStr[length-i-1] = newStr[length-i-1],newStr[i]
    }
    for i:=0;i<length;i++{
        if((i+1)%3==0){
            fmt.Printf("%c",newStr[i])
        }
    }

}
