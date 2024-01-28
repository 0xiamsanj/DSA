package main


import ("fmt"
"os"
"bufio")
func main(){
    var n int
    var num,num1,sum int
    fmt.Scanf("%d",&n)
    arr:= make([]string,n)
    in := bufio.NewReader(os.Stdin)
    fmt.Println(sum)

    for i:=0;i<n;i++{
        arr[i], _ = in.ReadString('\n')
    }

    for _,char :=range arr{
        for _,ch:=range char{
            if ch!=32{
                num =int(ch) - int('0')
            }
            num1 = num1*10+num
        }
        sum+=num1
    }

}
