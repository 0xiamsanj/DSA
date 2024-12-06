#include <iostream>
#include <cmath>

void toggle(int *res, int *arr, int n, int pos){
    for(int i=pos-1;i<n;i++){
        res[i] = 1 - res[i];
    }
}
int main(){
    int n,k;
    std::cin >> n >> k;

    int arr[100];
    for (int i=0;i<n;i++){
        std::cin >> arr[i];
    }
    int res[31] = {0};

    for(int i=0;i<n;i++){
        toggle(res,arr,n,i);
    }

    int i = 0,sum =0;
    while(i<k){
        sum+=(std::pow(2,i)*res[k-i-1]);
        i++;
    }
    std::cout << sum;
}
