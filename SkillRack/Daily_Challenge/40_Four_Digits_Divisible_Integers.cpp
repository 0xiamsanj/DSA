#include<iostream>


int parse_string(std::string input, int first, int last){
    int num =0;
    for(int i=first;i<last;i++){
        num = (num*10) +(input[i]-'0');
    }
    return num;
}
int main(){
    std::string input;
    std::cin >> input;
    int i=0,count=0,k,num =0;
    std::cin>>k;
    while(input[i]){
        if(input[i+3]!='\0'){
             num = parse_string(input,i,i+4);
        } else {
            break;
        }
        if(num>=1000 && num%k==0){
            count++;
        }
        i++;
    }
    std::cout << count;
}
