class Solution {
public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
        queue<pair<int,int>> q;
        for(int r = 0; r < grid.size(); ++r){
            for(int c = 0; c < grid[0].size(); ++c){
                if(grid[r][c] == 0){
                    q.push({r,c});
                }
            }
        }

        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();

            // Up
            if(row > 0 && grid[row - 1][col] == INT_MAX){
                grid[row - 1][col] = grid[row][col] + 1;
                q.push({row - 1, col});
            }

            // Down
            if(row < grid.size() - 1 && grid[row + 1][col] == INT_MAX){
                grid[row + 1][col] = grid[row][col] + 1;
                q.push({row + 1, col});
            }

            // Left
            if(col > 0 && grid[row][col - 1] == INT_MAX){
                grid[row][col - 1] = grid[row][col] + 1;
                q.push({row, col - 1});
            }

            // Right
            if(col < grid[0].size() - 1 && grid[row][col + 1] == INT_MAX){
                grid[row][col + 1] = grid[row][col] + 1;
                q.push({row, col + 1});
            }
        }
    }
};
