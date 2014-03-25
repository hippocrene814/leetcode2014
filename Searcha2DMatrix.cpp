class Solution {
public:
    bool search(vector<vector<int>> &matrix, int l, int u, int r, int d, int target)
    {
        while(l <= r && u <= d)
        {
            if(matrix[u][l] > target || matrix[d][r] < target)
                return false;
            if(matrix[u][l] == target || matrix[d][l] == target || matrix[u][r] == target || matrix[d][r] == target)
                return true;
            if(u == d)
            {
                if(target < matrix[u][r])
                    r--;
                if(matrix[u][l] < target)
                    l++;
            }
            else
            {
                if(target < matrix[u][r])
                    d = u;
                else
                    u = u + 1;
                if(target < matrix[d][l])
                    d = d - 1;
                else
                    u = d;
            }
        }
        return false;
    }

    bool searchMatrix(vector<vector<int> > &matrix, int target) {
        int m = matrix.size();
        if(m == 0)
            return false;
        vector<int> tmp = matrix.back();
        int n = tmp.size();
        int l = 0;
        int r = n - 1;
        int u = 0;
        int d = m - 1;
        return search(matrix, l, u, r, d, target);
    }
};