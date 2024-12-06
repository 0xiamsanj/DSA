#include <iostream>
#include <set>

int check(int a, int b){
    int res = std::min(a,b);
    while(res > 1){
        if(a % res == 0 && b%res == 0){
            break;
        }
        res--;
    }
    return res;
}

int main(){

    int r,c;
    std::cin >> r >> c;
    int matrix[100][100];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            std::cin >> matrix[i][j];
        }
    }

    std::set<int> res_set;
    for(int i=0;i<r;i++){
        for(int j=0;j<c-1;j++){
            bool coprime = check(matrix[i][j],matrix[i][j+1]) == 1 ? true : false;
            if(coprime){
                res_set.insert(matrix[i][j]);
                res_set.insert(matrix[i][j+1]);
            }
        }
        if(res_set.size()==0){
            std::cout << "-1" << std::endl;
        } else {
            for(auto it : res_set){
                std::cout << it << " ";
            }
            res_set.clear();
            std::cout << std::endl;
        }
    }
}
