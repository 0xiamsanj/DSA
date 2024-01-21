package main


import "fmt"
func stack(arr...int) []string{

    var str[] string
    const push,pop,stop string = "Push","Pop","STOP"
    for i:=0;i<len(arr);i++{
        len:=0
        if arr[i]>0{
            len++
            str[i] = push

        } else if arr[i]<0{
            len++
            str[i] = pop

        } else if arr[i]==0{
            len++
            str[i] = stop

        }
    }
    return str
}
func main(){

fmt.Print(stack(1,2,3))
}

