class Solution {
public:
    void setZeroes(vector<vector<int> > &matrix) {
        int m = matrix.size();
        vector<int> tmp = matrix.back();
        int n = tmp.size();
        vector<int> line (m+n, 0);
        int i, j, k;
        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                if(matrix[i][j] == 0)
                {
                    line[i] = 1;
                    line[m+j] = 1;
                }
            }
        }
        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                if(line[i]==1 || line[m+j]==1)
                    matrix[i][j] = 0;
            }
        }
        
    }
};