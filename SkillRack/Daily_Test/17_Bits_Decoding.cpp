#include <cstring>
#include<iostream>

int main(){
    std::string input;
    std::cin >> input;
    std::string res="";

    int i=0;
    while(input[i]){
        std::string num="";
        num+= input[i];
        if(num=="1"){
            if(input[i+1]!='\0')
                num+=input[++i];
            else {
                res="";
            }
        }
        if(num=="0"){
            res+='a';
        }else if(!num.compare("10") || !num.compare("11")){
            res+='b';
        }
        i++;
    }
    if(res==""){
        std::cout << "-1";
    } else {
        std::cout << res;
    }
}

