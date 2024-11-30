#include <algorithm>
#include <iostream>
#include <iterator>
#include <map>
#include <utility>
#include <vector>

using mypair =std::pair<std::string, int>;

std::vector<std::pair<std::string,int>> copy_map(std::map<std::string,int> hash_map){
    std::vector<std::pair<std::string,int>> res;
    for(auto it:hash_map){
        std::pair<std::string,int> temp;
        temp.first = it.first;
        temp.second = it.second;
        res.push_back(temp);
    }
    return res;
}
int main(){
    std::vector<std::pair<std::string ,std::string>> names;
    std::map<std::string,int> hash_map;
    int n;

    std::cin >> n;
    for(int i=0;i<n;i++){
        std::pair<std::string,std::string> name;
        std::cin >> name.first >> name.second;
        names.push_back(name);
        hash_map[name.second]++;
    }
    std::vector<std::pair<std::string,int>> copy = copy_map(hash_map);

    std::cout << copy.size() << std::endl;
    sort(begin(copy), end(copy), [](const mypair& a, const mypair& b) { return a.second > b.second; });
    for(auto it:copy){
        std::cout << it.first << " " << it.second << std::endl;
    }
}
