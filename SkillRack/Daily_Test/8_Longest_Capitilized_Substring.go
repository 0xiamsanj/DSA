package main

import (
    "fmt"
)
// kLsdgBsdhsdDshshhsdgFbvrtewyuiokplkgjnfd
func main(){
    var str string
    fmt.Scanf("%s",&str)
    var capital bool
    maxLen,count,index:=0,0,0
    for i,char:=range str{
        if (char >=65 && char<=90){
            capital=true
            if(count>maxLen){
                maxLen= count
                index=i-maxLen-1
            }
            count=0
        }
        if(char >=97 && char<=122 && capital){
            count++
        }
    }
    if(maxLen==0){
        fmt.Printf("-1")
        return
    }
    for i:=index;i<index+maxLen+1;i++{
        fmt.Printf("%c",str[i])
    }
}
