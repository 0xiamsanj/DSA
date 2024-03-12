#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> ans;
    int left, right, top, bottom;
    int n;
    cin >> n;
    class Solution
    {
    public:
        vector<vector<int>> generateMatrix(int n)
        {
            if (n <= 0)
                return vector<vector<int>>();
            vector<vector<int>> result(n, vector<int>(n));
            int xBeg = 0, xEnd = n - 1;
            int yBeg = 0, yEnd = n - 1;
            int cur = 1;
            while (true)
            {
                for (int i = yBeg; i <= yEnd; i++)
                    result[xBeg][i] = cur++;
                if (++xBeg > xEnd)
                    break;
                for (int i = xBeg; i <= xEnd; i++)
                    result[i][yEnd] = cur++;
                if (--yEnd < yBeg)
                    break;
                for (int i = yEnd; i >= yBeg; i--)
                    result[xEnd][i] = cur++;
                if (--xEnd < xBeg)
                    break;
                for (int i = xEnd; i >= xBeg; i--)
                    result[i][yBeg] = cur++;
                if (++yBeg > yEnd)
                    break;
            }
            return result;
        }
    };

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<ans[i][j];
        }
    }
    return 0;
}