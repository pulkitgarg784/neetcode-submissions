class Solution {
private:
    void dfs(int i, int j, vector<vector<char>>& grid){
        if(i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] == '0'){
            return;
        }
        else{
            grid[i][j] = '0';
            dfs(i, j+1, grid);
            dfs(i+1, j, grid);
            dfs(i, j-1, grid);
            dfs(i-1, j, grid);
        }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        int res = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j< n; j++){
                if(grid[i][j] == '1'){
                    res++;
                    dfs(i,j, grid); // flood fill island with 1
                }
            }
        }
        return res;
    }

};
