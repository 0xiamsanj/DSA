package main

import (
    "fmt"
    "bufio"
    "os"
    "strings"
)

func main(){
    reader:=bufio.NewReader(os.Stdin)
    str,_:=reader.ReadString('\n')
    str=strings.TrimSpace(str)
    fmt.Println(str)
    for _,word:=range str{
        fmt.Println(word)
    }
}
