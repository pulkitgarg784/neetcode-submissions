class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int area = 0;
        int rows = grid.size();
        int cols = grid[0].size();
        for(int r = 0; r < rows; r++){
            for(int c = 0; c < cols; c++){
                if(grid[r][c] == 1){
                    area = max(area, dfs(grid, r,c));
                }
            }
        }
        return area;
    }

    int dfs(vector<vector<int>>& grid, int r, int c){
        if(r < 0 || c < 0 || r >= grid.size() || c>= grid[0].size() || grid[r][c] == 0){
            return 0;
        }

        grid[r][c] = 0;
        return (1 + dfs(grid, r+1, c)+ dfs(grid, r, c+1) + dfs(grid, r-1, c) + dfs(grid, r, c-1));
    }
};
