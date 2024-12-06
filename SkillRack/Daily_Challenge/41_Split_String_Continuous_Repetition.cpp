#include <iostream>

void printer_func(int start,int end,std::string input){
    while(start<end){
        std::cout << input[start];
        start++;
    }
}
int main(){
    std::string input;
    std::cin >> input;

    int i=0,start,end;
    while(input[i]){
        bool var = true;
        int j=i+1,count=0;
        while(var){
            if(input[j] == input[i]){
                count++;
                j++;
            } else{
                var = false;
            }
        }
        if(count%2==0){
            end = i+(count/2)-1;
            printer_func(i,end,input);
            start = end;

        }
        i=end+1;
    }
}
