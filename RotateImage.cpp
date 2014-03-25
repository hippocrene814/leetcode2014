class Solution {
public:
    void swap(int &a, int &b)
    {
        int t = a;
        a = b;
        b = t;
    }
    void rotate(vector<vector<int> > &matrix) {
         int m = matrix.size();
         int i, j;
         for(i=0; i<m; i++)
             for(j=i; j<m; j++)
                swap(matrix[i][j], matrix[j][i]);
         for(i=0; i<m; i++)
            for(j=0; j<(m/2); j++)
                swap(matrix[i][j], matrix[i][m-1-j]);
    }
};