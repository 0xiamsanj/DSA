#include<iostream>

int main(){
    std::pair<int,int> cords;
    std::string input_str;
    std::cin >>  input_str;

    int i=0;
    while(input_str[i]){
        if(input_str[i]=='N'){
            cords.second++;
        } else if(input_str[i]=='S'){
            cords.second--;
        } else if(input_str[i]=='W'){
            cords.first--;
        } else if(input_str[i]=='E'){
            cords.first++;
        }
        i++;
    }
    if(cords.first > 0 && cords.second >= 0 ||
    cords.first >= 0 && cords.second > 0)
    {
        std::cout<<"YES";
    } else{
        std::cout<<"NO";
    }
}
