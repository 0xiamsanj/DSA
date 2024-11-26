#include <iostream>

int main(){
    int n;
    std::cin >> n;

    int arr[100];

    for(int i=0;i<n;i++){
        std::cin >> arr[i];
    }

    bool visited[100] = {false};
    for(int i=0;i<n;i++){
            if (visited[i]){
                continue;
            }
        for(int j=i+1;j<n;j++){

            if (visited[j]){
                continue;
            }
            if(arr[i]>0 && arr[j]>0){
                std::swap(arr[i],arr[j]);
                visited[i] = true;
                visited[j] = true;
                break;
            }
            if(arr[i]<0 && arr[j]<0){
                visited[i] = true;
                visited[j] = true;
                std::swap(arr[i],arr[j]);
                break;
            }
        }
    }

    for(int i=0;i<n;i++){
        std::cout << arr[i] << " ";
    }
}
