class Solution {
public:
    int minPathSum(vector<vector<int> > &grid) {
        vector<vector<int>> sum = grid;
        int m = grid.size();
        vector<int> line = grid.back();
        int n = line.size();
        for(int i=1; i<m; i++)
            sum[i][0] = sum[i-1][0] + grid[i][0];
        for(int j=1; j<n; j++)
            sum[0][j] = sum[0][j-1] + grid[0][j];
        for(int i=1; i<m; i++)
        {
            for(int j=1; j<n; j++)
                sum[i][j] = min(sum[i][j-1], sum[i-1][j]) + grid[i][j];
        }
        return sum[m-1][n-1];    
    }
};