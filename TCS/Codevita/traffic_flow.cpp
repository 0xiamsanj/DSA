#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int find_min_traffic_flow(int n, int m, const vector<vector<int>>& traffic_grid, pair<int, int> start_pos, pair<int, int> end_pos) {
    vector<vector<int>> min_flow(n + 1, vector<int>(m + 1, INT_MAX));
    min_flow[start_pos.first][start_pos.second] = traffic_grid[start_pos.first - 1][start_pos.second - 1];

    for (int i = start_pos.first; i <= n; ++i) {
        for (int j = start_pos.second; j <= m; ++j) {
            if (i > start_pos.first) {
                min_flow[i][j] = min(min_flow[i][j], min_flow[i - 1][j] + traffic_grid[i - 1][j - 1]);
            }
            if (j > start_pos.second) {
                min_flow[i][j] = min(min_flow[i][j], min_flow[i][j - 1] + traffic_grid[i - 1][j - 1]);
            }
        }
    }

    if (min_flow[end_pos.first][end_pos.second] == INT_MAX) {
        return -1;
    } else {
        return min_flow[end_pos.first][end_pos.second];
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> traffic_grid(n, vector<int>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> traffic_grid[i][j];
        }
    }

    pair<int, int> start_pos, end_pos;
    cin >> start_pos.first >> start_pos.second;
    cin >> end_pos.first >> end_pos.second;

    int result = find_min_traffic_flow(n, m, traffic_grid, start_pos, end_pos);
    cout << result << endl;

    return 0;
}

