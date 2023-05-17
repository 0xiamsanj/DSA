//Link : https://practice.geeksforgeeks.org/problems/rat-in-a-maze-problem/1



/*Consider a rat placed at (0, 0) in a square matrix of order N * N. It has to reach the destination at (N - 1, N - 1). Find all possible paths that the rat can take to reach from source to destination. The directions in which the rat can move are 'U'(up), 'D'(down), 'L' (left), 'R' (right). Value 0 at a cell in the matrix represents that it is blocked and rat cannot move to it while value 1 at a cell in the matrix represents that rat can be travel through it.


Input:
N = 4
m[][] = {{1, 0, 0, 0},
         {1, 1, 0, 1}, 
         {1, 1, 0, 0},
         {0, 1, 1, 1}}
Output:
DDRDRR DRDDRR
*/


#include<bits/stdc++.h>
using namespace std;


class Solution{
    private:
    bool isSafe(int x, int y,int n,vector<vector<int>>&m,vector<vector<int>>visited){
        if((x>=0&&x<n) && (y>=0&&y<n) && m[x][y]==1 && visited[x][y] == 0){
            return true;
            
        }
        else{
        return false;
        }
    }
    
    void solve(vector<vector<int>>&m ,int x, int y, int n,vector<vector<int>> visited, vector<string>& ans, string path){
        
        
        
        if(x==n-1 && y==n-1){
            ans.push_back(path);
            return;
        }
        
        int newx ,newy; // Modified value of x & y co-ordinates
        
        //When the node is visited 
        visited[x][y] = 1;
        
        //There are 4 directions - D,L,R,U 
        
        // Down 
        newx = x+1;
        newy = y;
        if(isSafe(newx ,newy ,n ,m ,visited)){
            path.push_back('D');
            solve(m,newx,newy,n,visited,ans,path);
            path.pop_back();
        }
        
        
        //Left 
        newx = x;
        newy = y-1;
       if(isSafe(newx,newy,n,m,visited)){
            path.push_back('L');
            solve(m,newx,newy,n,visited,ans,path);
            path.pop_back();
        }
        
        //Right 
        newx = x;
        newy = y+1;
       if(isSafe(newx,newy,n,m,visited)){
            path.push_back('L');
            solve(m,newx,newy,n,visited,ans,path);
            path.pop_back();
        }
        
        //Up
        newx = x-1;
        newy = y;
        if(isSafe(newx,newy,n,m,visited)){
            path.push_back('U');
            solve(m,newx,newy,n,visited,ans,path);
            path.pop_back();
        }
        
        //Mark it as 0 after going back
        visited[x][y] = 0;
    }
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        int srcx = 0;
        int srcy = 0;
        vector<vector<int>> visited = m;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                visited[i][j] = 0;
            }
        }
        string path = "";
        vector<string> ans;
        solve(m,srcx,srcy,n,visited,ans,path);
        return ans;
    }
};
