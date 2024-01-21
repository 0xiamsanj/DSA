package main

import "fmt"
func maxSubArray(nums [100]int) int {

	res := nums[0]
	tmp := 0

	for _, n := range nums {

		if tmp+n > 0 {
			tmp += n
			if res < tmp {
				res = tmp
			}
		} else {
			tmp = 0
			if res < n {
				res = n
			}
		}

	}
	return res
}
func main(){
    var k,n int
    fmt.Scan(&n)
    var arr[100] int
    for i:=0;i<n;i++{
        fmt.Scanf("%d",&arr[i])
    }
    fmt.Scan(&k)

    res:=maxSubArray(arr)
    fmt.Print(res)
}
