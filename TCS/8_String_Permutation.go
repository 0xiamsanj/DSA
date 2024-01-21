package main

import ("fmt"
"strings")

func letterCasePermutation(s string) []string {
	result := make([]string, 0)

	var backTracking func(combination string, nextIndex int)
	backTracking = func(combination string, nextIndex int) {
		if len(combination) == len(s) {
			result = append(result, combination)
			return
		}

		for i := nextIndex; i < len(s); i++ {


			backTracking(combination+strings.ToLower(string(s[i])), i+1)
			backTracking(combination+strings.ToUpper(string(s[i])), i+1)
		}
	}

	backTracking("", 0)

	return result
}
func main(){
    var str string
    fmt.Scanf("%s",&str)
    res:=letterCasePermutation(str)
    fmt.Print(res)
}
