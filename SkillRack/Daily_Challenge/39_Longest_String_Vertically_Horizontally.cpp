#include <bits/stdc++.h>

int main(){
    int r,c;
    std::cin >> r >> c;

    char arr[100][100];

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            std::cin >> arr[i][j];
        }
    }

    std::pair<int,int> cords;

    std::cin >> cords.first >> cords.second;

    cords.first--;
    cords.second--;
    std::vector<std::string> str_arr;

    // Iteration from point to topwards
    std::string str="";
    for(int i=cords.first;i>=0;i--){
         str+=arr[i][cords.second];
    }
    str_arr.push_back(str);

    // Iteration from point to rightwards
    str = "";
    for(int i=cords.second;i<c;i++){
         str+=arr[cords.first][i];
    }
    str_arr.push_back(str);

    // Iteration from point to downwards
    str = "";
    for(int i=cords.first;i<r;i++){
         str+=arr[i][cords.second];
    }
    str_arr.push_back(str);

    // Iteration from point to leftwards
    str = "";
    for(int i=cords.second;i>=0;i--){
         str+=arr[cords.first][i];
    }
    str_arr.push_back(str);

    int max_len = 0;
    for(int i=0;i<str_arr.size();i++){
        if(max_len < str_arr[i].length()){
            max_len = str_arr[i].length();
        }
    }

    for(int i=0;i<str_arr.size();i++){
        if(max_len == str_arr[i].size()){
            std::cout << str_arr[i] << " ";
        }
    }

}
