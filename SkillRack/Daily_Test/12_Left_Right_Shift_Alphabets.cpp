#include <cstring>
#include<iostream>
using namespace  std;

int main(){
    char s1[100], s2[100];
    cin  >> s1 >> s2;

    char alpha[30] = " abcdefghijklmnopqrstuvwxyz";
    int left,right, pos;
    int i=0, count=0;

    while(s1[i]){
        pos = s1[i] - 'a' + 1;
        left = (pos - (i+1) + 26) % 26;
        right = (pos + i+1) % 26;
        // cout << pos << endl;
        if(s1[i] == s2[i]){
            i++;
            continue;
        } else{
            if(alpha[left]== s2[i]){
                s1[i] = alpha[left];
            }if(alpha[right]== s2[i]){
                s1[i] = alpha[right];
            }
            i++;
        }
    // cout << static_cast<char>(left +'a') << " " << static_cast<char>(right +'a') << ":"<< pos<< endl;
    }
    // cout << s1 << endl << s2;
    if(!strcmp(s1,s2)){
        cout<< "YES";
    } else {
        cout<< "NO";
    }
}
