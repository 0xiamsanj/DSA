#include <iostream>


int main(){

    int k,n=16,row_pos,col_pos,num, count =0;
    bool matrix[500][2] = {false};

    std::cin >> k;
    for(int i=0;i<k;i++){
        std::cin >> num;
        row_pos = num%2==0 ? 1 : 0;
        col_pos = num%2==0 ? num/2-1 : num/2;
        matrix[col_pos][row_pos] = true;
    }

    for(int i=0;i<n/2;i++){
        for(int j=0;j<2;j++){
            std::cout << matrix[i][j] <<" ";
        }
        std::cout << std::endl;
    }
    for(int i=0;i<n/2;i++){
        for(int j=0;j<2;j++){
            if(matrix[i][j])
                continue;
            if(!matrix[i+1][j] && i+1<n/2)
                count++;
            if(!matrix[i-1][j] && i-1>=0)
                count++;
            if(!matrix[i][j+1] && j+1<2)
                count++;
            if(!matrix[i][j-1] && j-1==0)
                count++;
        }
    }
    std::cout << "Count: " << count/2;
}
