package main

import "fmt"

func main(){
    var arr1[26] int
    var arr2[26] int
    var str1,str2 string
    fmt.Scanf("%s %s",str1,str2 )
    var flag int

    for _,char := range str1{
        index:= char - 'a'
        arr1[index]++
    }

    for _,char := range str2{
        index:= char - 'a'
        arr2[index]++
    }
    for i:=0;i<26;i++{
        if(arr1[i]!=arr2[i]){
            flag=0
            break
        }
        flag =1
    }
    if(flag==1){
        fmt.Print("Anagram")
    } else {
        fmt.Print("Not an Anagram")
    }
}
