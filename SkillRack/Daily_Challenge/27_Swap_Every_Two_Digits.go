package main

import "fmt"

func swapDigits(n *int){
    temp:=*n
    *n= (temp%10)*10+(temp/10)
}
func powerOf10(exp int) int {
	result := 1
	for i := 0; i < exp; i++ {
		result *= 10
	}
	return result
}
func swapEveryTwoDigits(n int){
    var count,temp int
        var newNum int
    temp=n
    for temp!=0{
        temp/=10
        count++
    }
       //var newNum int
    for i:=count-1;i>=0;i=i-2{
        digits:=n/powerOf10(i-1)
        swapDigits(&digits)
        n=n%powerOf10(i-1)
    fmt.Println(digits)
        newNum=newNum+(digits*powerOf10(i-1))
    }
}


func main(){
    var n int
    fmt.Scanf("%d",&n)
    swapEveryTwoDigits(n)
}
