#include<iostream>
#include<vector>


void desc_sort(std::vector<int> res,int *arr){
    for(int i=0;i<res.size();i++){
        for(int j=i+1;j<res.size();j++){
            if(res[i] < res[j]){
                std::swap(arr[i],arr[j]);
                std::swap(res[i],res[j]);
            } else if (res[i] == res[j]){
                if(arr[i] < arr[j]){
                    std::swap(arr[i],arr[j]);
                }
            }
        }
    }
}
int main(){
    int n;
    std::cin >> n;
    int arr[1000];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    std::vector<int> res;
    for(int i=0;i<n;i++){
        int count = 0;
        int temp = arr[i];
        while(temp!=1){
            if(temp%2!=0){
                temp = (temp*3) + 1;
            }
            else {
                temp/=2;
            }
            count++;
        }
        res.push_back(count);
    }
    desc_sort(res,arr);
    for(int i=0;i<n;i++){
        std::cout<<arr[i] <<" ";
    }

}
