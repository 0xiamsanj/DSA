package main

import "fmt"
func main(){
    var n, curr,total,ctr int
    total , ctr = 0,1
    fmt.Scan(&n)
    for ctr<=n{
        fmt.Scan(&curr)
        if(curr%2==0){
            total+=curr
        } else {
            total-=curr
        }
        ctr++

    }
    fmt.Print(total)
}
