#include<iostream>

int main(){
    int r,c;
    std::cin >> r >> c;

    int arr[100][100];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            std::cin >> arr[i][j];
        }
    }
    std::cout << c/2;

    // First half of i and secong half of r
    for(int i=0;i<r/2;i++){
        for(int j=0;j<c/2;j++){
            std::swap(arr[i][j],arr[r-i-1][(c/2)+j]);
        }
    }

    // Second half of i and first half of r
    for(int i=0;i<r/2;i++){
        for(int j=0;j<c/2;j++){
            std::swap(arr[i][j],arr[r-i-1][(c/2)+j]);
        }
    }
    std::cout << std::endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
